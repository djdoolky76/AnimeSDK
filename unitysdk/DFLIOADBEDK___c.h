#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFLIOADBEDK;
namespace System { class Object; }

#define DFLIOADBEDK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4816C0)
#define DFLIOADBEDK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F481700)
#define DFLIOADBEDK___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F481710)

inline static constexpr unsigned int DFLIOADBEDK___c_TypeDefinitionIndex = 28507;

	class DFLIOADBEDK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2DCD0);
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
