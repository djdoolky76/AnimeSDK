#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EffectAdaptionConfig; }
namespace RPG::GameCore { class MaterialPropertyAdaptionConfig; }
namespace System { class String; }

#define RPG_GAMECORE_EFFECTADAPTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D62EB30)
#define RPG_GAMECORE_EFFECTADAPTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D62E7A0)

namespace RPG::GameCore
{
	class EffectAdaptionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EffectPath; // 0x10
		::System::String* AliasName; // 0x18
		::System::String* AttachPoint; // 0x20
		::RPG::MVector3 PositionOffset; // 0x28
		::RPG::MVector3 RotationOffset; // 0x34
		::System::Single Scale; // 0x40
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::MaterialPropertyAdaptionConfig*>* OverrideMaterialProperty; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTADAPTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EffectAdaptionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EffectAdaptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTADAPTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
