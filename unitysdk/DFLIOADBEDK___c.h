#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFLIOADBEDK;
namespace System { class Object; }

#define DFLIOADBEDK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1A6990)
#define DFLIOADBEDK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A69D0)
#define DFLIOADBEDK___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E1A69E0)

inline static constexpr unsigned int DFLIOADBEDK___c_TypeDefinitionIndex = 27917;

	class DFLIOADBEDK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x330B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFLIOADBEDK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLIOADBEDK___C_CTOR_OFFSET))(this);
		}

		::DFLIOADBEDK* __cctor_b__38_0()
		{
			return ((::DFLIOADBEDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLIOADBEDK___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
