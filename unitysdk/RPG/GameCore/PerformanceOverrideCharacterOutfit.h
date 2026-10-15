#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceOverrideCharacterOutfit; }
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCEOVERRIDECHARACTEROUTFIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8FD360)
#define RPG_GAMECORE_PERFORMANCEOVERRIDECHARACTEROUTFIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8FD210)

namespace RPG::GameCore
{
	class PerformanceOverrideCharacterOutfit : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::Il2CppArray<::System::UInt32>* OverrideOutfitIDs; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEOVERRIDECHARACTEROUTFIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceOverrideCharacterOutfit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceOverrideCharacterOutfit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEOVERRIDECHARACTEROUTFIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
