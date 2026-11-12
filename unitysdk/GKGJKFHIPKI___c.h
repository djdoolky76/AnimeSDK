#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKGJKFHIPKI;
namespace System { class Object; }

#define GKGJKFHIPKI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7A5320)
#define GKGJKFHIPKI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7A5360)
#define GKGJKFHIPKI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F7A5370)

inline static constexpr unsigned int GKGJKFHIPKI___c_TypeDefinitionIndex = 33318;

	class GKGJKFHIPKI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14D70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKGJKFHIPKI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGJKFHIPKI___C_CTOR_OFFSET))(this);
		}

		::GKGJKFHIPKI* __cctor_b__33_0()
		{
			return ((::GKGJKFHIPKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGJKFHIPKI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
