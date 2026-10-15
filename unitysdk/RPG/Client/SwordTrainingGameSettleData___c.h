#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class SwordTrainingPowerRankConfigRow; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE172F60)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE172FA0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA___C__DONEXT_B__56_0_OFFSET UNITYSDK_OFFSET(0xE172FE0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA___C___INITALLPOWERRANKROW_B__11_0_OFFSET UNITYSDK_OFFSET(0xE172FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingGameSettleData___c_TypeDefinitionIndex = 61959;

	class SwordTrainingGameSettleData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::SwordTrainingPowerRankConfigRow*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::SwordTrainingPowerRankConfigRow*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F950);
		}

		static ::System::Action** StaticGet___9__56_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F958);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __InitAllPowerRankRow_b__11_0(::RPG::GameCore::SwordTrainingPowerRankConfigRow* a1, ::RPG::GameCore::SwordTrainingPowerRankConfigRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::SwordTrainingPowerRankConfigRow*, ::RPG::GameCore::SwordTrainingPowerRankConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA___C___INITALLPOWERRANKROW_B__11_0_OFFSET))(this, a1, a2);
		}

		::System::Void _DoNext_b__56_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA___C__DONEXT_B__56_0_OFFSET))(this);
		}

	};
}
