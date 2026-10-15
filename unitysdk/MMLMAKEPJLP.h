#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/RPG/GameCore/TargetGenderType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MMLMAKEPJLP;
namespace System { class String; }

#define MMLMAKEPJLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D2DA0)
#define MMLMAKEPJLP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1D29B0)

	class MMLMAKEPJLP : public ::System::Object
	{
	public:
		::System::String* DEJJGGOABPA; // 0x10
		::System::String* GJMHAJGIHOM; // 0x18
		::System::String* HHIIGAIJEDA; // 0x20
		::RPG::GameCore::TargetGenderType FJDEIHMGHIF; // 0x28
		::System::UInt32 KODCANKFHAO; // 0x2C
		::RPG::Client::TextID OEPDNGFAKDA; // 0x30
		::RPG::Client::TextID PMNJAKBDNEG; // 0x40
		::RPG::Client::TextID AGNDDHOLJNL; // 0x50
		::RPG::GameCore::ItemRarity PMIEAEGJNMJ; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLMAKEPJLP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MMLMAKEPJLP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MMLMAKEPJLP*))((::PBYTE)hIl2Cpp + MMLMAKEPJLP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
