#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJOCEJLPADK;
namespace System { class Object; }

#define CJOCEJLPADK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0BA1E0)
#define CJOCEJLPADK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0BA220)
#define CJOCEJLPADK___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1E0BA230)

inline static constexpr unsigned int CJOCEJLPADK___c_TypeDefinitionIndex = 25063;

	class CJOCEJLPADK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x191A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJOCEJLPADK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOCEJLPADK___C_CTOR_OFFSET))(this);
		}

		::CJOCEJLPADK* __cctor_b__63_0()
		{
			return ((::CJOCEJLPADK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOCEJLPADK___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
