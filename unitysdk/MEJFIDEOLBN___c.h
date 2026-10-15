#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEJFIDEOLBN;
namespace System { class Object; }

#define MEJFIDEOLBN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA0DDD0)
#define MEJFIDEOLBN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA0DE00)
#define MEJFIDEOLBN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA0DE10)

	class MEJFIDEOLBN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AE50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEJFIDEOLBN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJFIDEOLBN___C_CTOR_OFFSET))(this);
		}

		::MEJFIDEOLBN* __cctor_b__23_0()
		{
			return ((::MEJFIDEOLBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJFIDEOLBN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
