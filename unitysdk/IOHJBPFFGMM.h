#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateAffixRarityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class IOHJBPFFGMM;
namespace System { class String; }

#define IOHJBPFFGMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF292A0)
#define IOHJBPFFGMM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CF28E80)

inline static constexpr unsigned int IOHJBPFFGMM_TypeDefinitionIndex = 11535;

	class IOHJBPFFGMM : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* MDEBFIFOKHH; // 0x10
		::System::String* LBLJLNPBDPB; // 0x18
		::Il2CppArray<::System::UInt32>* BEOGEKDEPLO; // 0x20
		::RPG::Client::TextID KBNHPKIOGLH; // 0x28
		::System::UInt32 HNIMELBCBBJ; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID IDABEFMAPFE; // 0x40
		::System::UInt32 EFAIIOHKFGD; // 0x50
		::RPG::GameCore::FateAffixRarityType PMIEAEGJNMJ; // 0x54
		::RPG::Client::TextID HEDNBIABAKP; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHJBPFFGMM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IOHJBPFFGMM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IOHJBPFFGMM*))((::PBYTE)hIl2Cpp + IOHJBPFFGMM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
