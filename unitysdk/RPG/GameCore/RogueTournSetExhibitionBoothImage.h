#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RogueTournSetExhibitionBoothImage; }

#define RPG_GAMECORE_ROGUETOURNSETEXHIBITIONBOOTHIMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA13C90)
#define RPG_GAMECORE_ROGUETOURNSETEXHIBITIONBOOTHIMAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA13CA0)
#define RPG_GAMECORE_ROGUETOURNSETEXHIBITIONBOOTHIMAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA13C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournSetExhibitionBoothImage_TypeDefinitionIndex = 22117;

	class RogueTournSetExhibitionBoothImage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BoothID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNSETEXHIBITIONBOOTHIMAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournSetExhibitionBoothImage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournSetExhibitionBoothImage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNSETEXHIBITIONBOOTHIMAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournSetExhibitionBoothImage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournSetExhibitionBoothImage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNSETEXHIBITIONBOOTHIMAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
