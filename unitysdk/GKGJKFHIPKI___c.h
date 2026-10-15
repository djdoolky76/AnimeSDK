#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKGJKFHIPKI;
namespace System { class Object; }

#define GKGJKFHIPKI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E485B80)
#define GKGJKFHIPKI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E485BC0)
#define GKGJKFHIPKI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E485BD0)

inline static constexpr unsigned int GKGJKFHIPKI___c_TypeDefinitionIndex = 32405;

	class GKGJKFHIPKI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B590);
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
