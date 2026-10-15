#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityHipplen { class ActivityHipplenTraitData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC40A470)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC40A4B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA___C__GETTRAITCOLLECTDATALIST_B__7_0_OFFSET UNITYSDK_OFFSET(0xC40A4C0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenCollectData___c_TypeDefinitionIndex = 75499;

	class ActivityHipplenCollectData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ActivityHipplen", "<>c")->GetStaticField(0x18D30);
		}

		static ::System::Comparison_1<::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*>**)UnitySDK::FromName("RPG.Client.ActivityHipplen", "<>c")->GetStaticField(0x18D38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetTraitCollectDataList_b__7_0(::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA___C__GETTRAITCOLLECTDATALIST_B__7_0_OFFSET))(this, a1, a2);
		}

	};
}
