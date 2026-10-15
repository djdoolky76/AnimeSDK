#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::FateRin::Card { class IFateRinCardViewModel; }
namespace System { class String; }

#define NBDKFMMEMGP_NIHPBABLPBP_OFFSET UNITYSDK_OFFSET(0xBABE5C0)

inline static constexpr unsigned int NBDKFMMEMGP_TypeDefinitionIndex = 80664;

	class NBDKFMMEMGP : public ::System::Object
	{
	public:
		// static const ::System::String* NHDHANNPHNA; // 0x0
		// static const ::System::String* OPJAJMKNPJN; // 0x0
		// static const ::System::String* LNBDELIGFJN; // 0x0
		// static const ::System::String* DNDMJEFFHBP; // 0x0
		// static const ::System::String* NPKHAAKDLII; // 0x0
		// static const ::System::String* KHKFKOFGNHL; // 0x0
		// static const ::System::String* LDGNBHOFCJC; // 0x0
		// static const ::System::String* BNJHDBDPHKM; // 0x0
		// static const ::System::String* EANGEOJOFHC; // 0x0
		// static const ::System::String* BCJNEKMKJNL; // 0x0
		// static const ::System::String* FJCKFKINOAN; // 0x0
		// static const ::System::String* LLELFKBBKJE; // 0x0
		// static const ::System::String* GPJBGNJAILE; // 0x0
		static ::System::String* NIHPBABLPBP(::RPG::Client::FateRin::Card::IFateRinCardViewModel* a1)
		{
			return ((::System::String*(*)(::RPG::Client::FateRin::Card::IFateRinCardViewModel*))((::PBYTE)hIl2Cpp + NBDKFMMEMGP_NIHPBABLPBP_OFFSET))(a1);
		}

	};
