#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HighlightOutlineSetting; }
namespace System { class String; }

#define RPG_GAMECORE_HIGHLIGHTOUTLINESETTING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73CAC0)
#define RPG_GAMECORE_HIGHLIGHTOUTLINESETTING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73C8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HighlightOutlineSetting_TypeDefinitionIndex = 17147;

	class HighlightOutlineSetting : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single HightlightWidth; // 0x10
		::System::Single HightlightWidth2; // 0x14
		::System::String* HightlightColor; // 0x18
		::System::String* HightlightColor2; // 0x20
		::System::Single Pow; // 0x28
		::System::Single OutlineFadeout; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIGHLIGHTOUTLINESETTING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HighlightOutlineSetting* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HighlightOutlineSetting*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIGHLIGHTOUTLINESETTING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
