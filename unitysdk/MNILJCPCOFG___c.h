#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNILJCPCOFG;
namespace System { class Object; }

#define MNILJCPCOFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA9AC90)
#define MNILJCPCOFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA9ACC0)
#define MNILJCPCOFG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA9ACD0)

	class MNILJCPCOFG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59FF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNILJCPCOFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNILJCPCOFG___C_CTOR_OFFSET))(this);
		}

		::MNILJCPCOFG* __cctor_b__23_0()
		{
			return ((::MNILJCPCOFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNILJCPCOFG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
