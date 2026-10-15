#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGamePresetCategoryData; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEPRESETCATEGORYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B7C70)
#define RPG_GAMECORE_LITTLEGAMEPRESETCATEGORYDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B7AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGamePresetCategoryData_TypeDefinitionIndex = 18923;

	class LittleGamePresetCategoryData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* CategoryName; // 0x10
		::System::String* Comment; // 0x18
		::RPG::GameCore::LittleGameEntityType EntityType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEPRESETCATEGORYDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGamePresetCategoryData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGamePresetCategoryData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEPRESETCATEGORYDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
