#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCAMANFJINC.h"
#include "unitysdk/RPG/GameCore/ChenLingEffectType.h"
#include "unitysdk/System/Object.h"
class HGCIPBFBNKO;
class JLPEICPFLMC;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameSession; }
namespace RPG::Client::ChenLingBattle { class Effect; }
namespace RPG::GameCore { class ChenLingEffectRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_CREATE_OFFSET UNITYSDK_OFFSET(0x1D7CE620)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D9590)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GETEFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0x1D7D9DF0)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x1D7DA170)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1D7DA1B0)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_SOURCEID_OFFSET UNITYSDK_OFFSET(0x1D7DA1A0)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x1D7DA190)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1D7DA180)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET__CONFIG_OFFSET UNITYSDK_OFFSET(0x1D7D9530)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1D7D9DA0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int Effect_TypeDefinitionIndex = 78686;

	class Effect : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _EffectParams; // 0x10
		::BCAMANFJINC _SourceType_k__BackingField; // 0x18
		::System::UInt32 _ConfigId_k__BackingField; // 0x1C
		::System::UInt64 _SourceID_k__BackingField; // 0x20
		::System::UInt64 _UniqueId_k__BackingField; // 0x28
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt64 a2, ::JLPEICPFLMC* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64, ::JLPEICPFLMC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::ChenLingBattle::Effect* Create(::HGCIPBFBNKO* a1, ::RPG::Client::ChenLingBattle::ChenLingBattleGameSession* a2)
		{
			return ((::RPG::Client::ChenLingBattle::Effect*(*)(::HGCIPBFBNKO*, ::RPG::Client::ChenLingBattle::ChenLingBattleGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT_CREATE_OFFSET))(a1, a2);
		}

		::System::Void Sync(::HGCIPBFBNKO* a1, ::JLPEICPFLMC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGCIPBFBNKO*, ::JLPEICPFLMC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT_SYNC_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetEffectParams()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT_GETEFFECTPARAMS_OFFSET))(this);
		}

		::System::UInt32 get_ConfigId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_CONFIGID_OFFSET))(this);
		}

		::System::UInt64 get_UniqueId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_UNIQUEID_OFFSET))(this);
		}

		::BCAMANFJINC get_SourceType()
		{
			return ((::BCAMANFJINC(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_SOURCETYPE_OFFSET))(this);
		}

		::System::UInt64 get_SourceID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_SOURCEID_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingEffectType get_EffectType()
		{
			return ((::RPG::GameCore::ChenLingEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET_EFFECTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingEffectRow* get__Config()
		{
			return ((::RPG::GameCore::ChenLingEffectRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECT_GET__CONFIG_OFFSET))(this);
		}

	};
}
