#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Booklet { class SectionSynopsis; }
namespace System { class String; }

#define RPG_GAMECORE_BOOKLET_SECTIONSYNOPSIS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D447600)
#define RPG_GAMECORE_BOOKLET_SECTIONSYNOPSIS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D447430)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int SectionSynopsis_TypeDefinitionIndex = 24960;

	class SectionSynopsis : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Title; // 0x18
		::System::String* ConfigPath; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SECTIONSYNOPSIS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::SectionSynopsis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::SectionSynopsis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SECTIONSYNOPSIS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
