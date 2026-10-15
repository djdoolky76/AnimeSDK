#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EffectScaleAdaptType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class EffectConfig; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_EFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D601650)
#define RPG_GAMECORE_EFFECTCONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D601670)
#define RPG_GAMECORE_EFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6010C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectConfig_TypeDefinitionIndex = 20277;

	class EffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EffectPath; // 0x10
		::System::Boolean IsAttachToTargetEntity; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* AttachPoint; // 0x20
		::RPG::MVector3 PositionOffset; // 0x28
		::RPG::MVector3 RotationOffset; // 0x34
		::RPG::MVector3 Scale; // 0x40
		::RPG::GameCore::EffectScaleAdaptType ScaleAdaptType; // 0x4C
		::System::Boolean SyncPropState; // 0x50
		::System::Byte _padding1[0x7];
		::RPG::GameCore::DynamicString* InitEffectState; // 0x58
		::System::Boolean ForbidLod; // 0x60
		::System::Boolean ForceSimulateImmediately; // 0x61
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::EffectConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::EffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTCONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
