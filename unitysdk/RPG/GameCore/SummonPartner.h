#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SummonPartner; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SUMMONPARTNER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3A350)
#define RPG_GAMECORE_SUMMONPARTNER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB3A360)
#define RPG_GAMECORE_SUMMONPARTNER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB3A310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonPartner_TypeDefinitionIndex = 22695;

	class SummonPartner : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* PrefabPath; // 0x18
		::System::String* ConfigPath; // 0x20
		::System::String* MemberName; // 0x28
		::RPG::MVector3 PosOffset; // 0x30
		::System::Single AngleOffset; // 0x3C
		::System::Boolean EnableEmotion; // 0x40
		::System::Boolean RefreshFormation; // 0x41
		::System::Byte _padding0[0x6];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPartnerCreate; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONPARTNER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SummonPartner* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SummonPartner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONPARTNER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SummonPartner* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SummonPartner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONPARTNER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
