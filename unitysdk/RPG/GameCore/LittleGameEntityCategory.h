#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameEntityCategory; }

#define RPG_GAMECORE_LITTLEGAMEENTITYCATEGORY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E1440)
#define RPG_GAMECORE_LITTLEGAMEENTITYCATEGORY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E1400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameEntityCategory_TypeDefinitionIndex = 18918;

	class LittleGameEntityCategory : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYCATEGORY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameEntityCategory* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameEntityCategory*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYCATEGORY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
