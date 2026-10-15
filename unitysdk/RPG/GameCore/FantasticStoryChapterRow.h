#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FantasticStoryChapterRow; }
namespace System { class String; }

#define RPG_GAMECORE_FANTASTICSTORYCHAPTERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D669280)
#define RPG_GAMECORE_FANTASTICSTORYCHAPTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D668FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FantasticStoryChapterRow_TypeDefinitionIndex = 11463;

	class FantasticStoryChapterRow : public ::System::Object
	{
	public:
		::System::String* FigurePath; // 0x10
		::RPG::Client::TextID describe; // 0x18
		::RPG::Client::TextID Name; // 0x28
		::System::UInt32 MissionID; // 0x38
		::System::UInt32 ChapterID; // 0x3C
		::System::UInt32 ActivityModuleID; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FANTASTICSTORYCHAPTERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FantasticStoryChapterRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FantasticStoryChapterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FANTASTICSTORYCHAPTERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
