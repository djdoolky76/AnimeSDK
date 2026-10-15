#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CoverRegionList; }
namespace System { class String; }

#define RPG_GAMECORE_COVERREGIONLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B2A10)
#define RPG_GAMECORE_COVERREGIONLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B2920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CoverRegionList_TypeDefinitionIndex = 19219;

	class CoverRegionList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* Regions; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COVERREGIONLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CoverRegionList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CoverRegionList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COVERREGIONLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
