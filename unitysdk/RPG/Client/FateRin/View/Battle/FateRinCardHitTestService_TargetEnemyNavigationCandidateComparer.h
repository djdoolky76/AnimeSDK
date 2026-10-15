#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AFMGKIIDMJL.h"
namespace RPG::Client::FateRin::View::Battle { class FateRinCardHitTestService_TargetEnemyNavigationCandidateComparer; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_TARGETENEMYNAVIGATIONCANDIDATECOMPARER_CCTOR_OFFSET UNITYSDK_OFFSET(0xCFBF610)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_TARGETENEMYNAVIGATIONCANDIDATECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0xCFBF530)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_TARGETENEMYNAVIGATIONCANDIDATECOMPARER_CTOR_OFFSET UNITYSDK_OFFSET(0xCFBF600)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinCardHitTestService_TargetEnemyNavigationCandidateComparer_TypeDefinitionIndex = 80676;

	class FateRinCardHitTestService_TargetEnemyNavigationCandidateComparer : public ::System::Object
	{
	public:
		static ::RPG::Client::FateRin::View::Battle::FateRinCardHitTestService_TargetEnemyNavigationCandidateComparer** StaticGet_Instance()
		{
			return (::RPG::Client::FateRin::View::Battle::FateRinCardHitTestService_TargetEnemyNavigationCandidateComparer**)UnitySDK::FromName("RPG.Client.FateRin.View.Battle", "TargetEnemyNavigationCandidateComparer")->GetStaticField(0x599C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_TARGETENEMYNAVIGATIONCANDIDATECOMPARER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_TARGETENEMYNAVIGATIONCANDIDATECOMPARER_CCTOR_OFFSET))();
		}

		::System::Int32 Compare(::AFMGKIIDMJL a1, ::AFMGKIIDMJL a2)
		{
			return ((::System::Int32(*)(::PVOID, ::AFMGKIIDMJL, ::AFMGKIIDMJL))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_TARGETENEMYNAVIGATIONCANDIDATECOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}

	};
}
