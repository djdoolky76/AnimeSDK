#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHHHCKCFPIG;
namespace System { class Object; }

#define OHHHCKCFPIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE32640)
#define OHHHCKCFPIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE32680)
#define OHHHCKCFPIG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE32690)

inline static constexpr unsigned int OHHHCKCFPIG___c_TypeDefinitionIndex = 29862;

	class OHHHCKCFPIG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHHHCKCFPIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHHCKCFPIG___C_CTOR_OFFSET))(this);
		}

		::OHHHCKCFPIG* __cctor_b__23_0()
		{
			return ((::OHHHCKCFPIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHHCKCFPIG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
