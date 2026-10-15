#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityHipplen { class ActivityHipplenTraitData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYHIPPLENMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC443B40)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC443B80)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE___C___ONGETHIPPLENINHERITSCRSP_B__8_0_OFFSET UNITYSDK_OFFSET(0xC443B90)

namespace RPG::Client
{
	class ActivityHipplenModule___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1E950);
		}

		static ::System::Comparison_1<::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1E958);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __OnGetHipplenInheritScRsp_b__8_0(::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE___C___ONGETHIPPLENINHERITSCRSP_B__8_0_OFFSET))(this, a1, a2);
		}

	};
}
