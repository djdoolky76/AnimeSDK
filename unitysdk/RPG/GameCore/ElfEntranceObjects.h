#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfEntranceAnchorConfig; }
namespace RPG::GameCore { class ElfEntranceNPCSet; }
namespace RPG::GameCore { class ElfEntranceObjects; }

#define RPG_GAMECORE_ELFENTRANCEOBJECTS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D608190)
#define RPG_GAMECORE_ELFENTRANCEOBJECTS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D607FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfEntranceObjects_TypeDefinitionIndex = 16194;

	class ElfEntranceObjects : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ElfEntranceAnchorConfig* SingleAvatarAnchor; // 0x10
		::Il2CppArray<::RPG::GameCore::ElfEntranceAnchorConfig*>* MultiAvatarAnchor; // 0x18
		::Il2CppArray<::RPG::GameCore::ElfEntranceAnchorConfig*>* ElfAnchors; // 0x20
		::RPG::GameCore::ElfEntranceNPCSet* ElfSet; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFENTRANCEOBJECTS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfEntranceObjects* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfEntranceObjects*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFENTRANCEOBJECTS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
