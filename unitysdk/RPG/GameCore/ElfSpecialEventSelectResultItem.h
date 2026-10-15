#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfSelectEventTalk; }
namespace RPG::GameCore { class ElfSpecialEventEffect; }
namespace RPG::GameCore { class ElfSpecialEventSelectResultItem; }

#define RPG_GAMECORE_ELFSPECIALEVENTSELECTRESULTITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6394E0)
#define RPG_GAMECORE_ELFSPECIALEVENTSELECTRESULTITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6390F0)

namespace RPG::GameCore
{
	class ElfSpecialEventSelectResultItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ElfSelectEventTalk*>* NextTalkIDList; // 0x10
		::Il2CppArray<::RPG::GameCore::ElfSpecialEventEffect*>* EventEffect; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSPECIALEVENTSELECTRESULTITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfSpecialEventSelectResultItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfSpecialEventSelectResultItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSPECIALEVENTSELECTRESULTITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
