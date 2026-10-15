#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Booklet { class ChapterConfig; }
namespace RPG::GameCore::Booklet { class SectionSynopsis; }

#define RPG_GAMECORE_BOOKLET_CHAPTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D472D90)
#define RPG_GAMECORE_BOOKLET_CHAPTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D472BB0)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int ChapterConfig_TypeDefinitionIndex = 24959;

	class ChapterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Title; // 0x18
		::Il2CppArray<::RPG::GameCore::Booklet::SectionSynopsis*>* SectionSynopsisList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_CHAPTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::ChapterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::ChapterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_CHAPTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
