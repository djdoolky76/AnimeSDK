#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfBehaviorStateContentItem; }
namespace System { class String; }

#define RPG_GAMECORE_ELFBEHAVIORSTATECONTENTITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D633D90)
#define RPG_GAMECORE_ELFBEHAVIORSTATECONTENTITEM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D633DA0)
#define RPG_GAMECORE_ELFBEHAVIORSTATECONTENTITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D633C20)

namespace RPG::GameCore
{
	class ElfBehaviorStateContentItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Chance; // 0x10
		::System::Single MinDelay; // 0x14
		::System::Single MaxDelay; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* Content; // 0x20
		::System::Single Duration; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBEHAVIORSTATECONTENTITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfBehaviorStateContentItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfBehaviorStateContentItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBEHAVIORSTATECONTENTITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfBehaviorStateContentItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfBehaviorStateContentItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBEHAVIORSTATECONTENTITEM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
