#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ManikinCustomConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MANIKINCUSTOMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D2750)
#define RPG_GAMECORE_MANIKINCUSTOMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7D25A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ManikinCustomConfig_TypeDefinitionIndex = 17475;

	class ManikinCustomConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* Positions; // 0x10
		::System::Single Pitch; // 0x18
		::System::Single MaxRotationX; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINCUSTOMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ManikinCustomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ManikinCustomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINCUSTOMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
