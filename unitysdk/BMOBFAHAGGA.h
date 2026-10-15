#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateAffixRarityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class BMOBFAHAGGA;
class FCOEMCEDLNL;
namespace System { class String; }

#define BMOBFAHAGGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E3C50)
#define BMOBFAHAGGA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9E3830)

inline static constexpr unsigned int BMOBFAHAGGA_TypeDefinitionIndex = 11533;

	class BMOBFAHAGGA : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* MDEBFIFOKHH; // 0x10
		::System::String* LBLJLNPBDPB; // 0x18
		::Il2CppArray<::System::UInt32>* BEOGEKDEPLO; // 0x20
		::RPG::Client::TextID KBNHPKIOGLH; // 0x28
		::System::UInt32 EFAIIOHKFGD; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID HEDNBIABAKP; // 0x40
		::RPG::GameCore::FateAffixRarityType PMIEAEGJNMJ; // 0x50
		::System::UInt32 BELHHHIHCEF; // 0x54
		::RPG::Client::TextID IDABEFMAPFE; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOBFAHAGGA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BMOBFAHAGGA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BMOBFAHAGGA*))((::PBYTE)hIl2Cpp + BMOBFAHAGGA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
