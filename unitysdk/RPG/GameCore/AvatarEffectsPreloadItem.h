#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarEffectsPreloadItem; }
namespace RPG::GameCore { class PreloadItem; }
namespace System { class String; }

#define RPG_GAMECORE_AVATAREFFECTSPRELOADITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E4910)
#define RPG_GAMECORE_AVATAREFFECTSPRELOADITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3E47E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarEffectsPreloadItem_TypeDefinitionIndex = 16363;

	class AvatarEffectsPreloadItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* SkillTypes; // 0x10
		::Il2CppArray<::RPG::GameCore::PreloadItem*>* EffectPaths; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREFFECTSPRELOADITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarEffectsPreloadItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarEffectsPreloadItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREFFECTSPRELOADITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
