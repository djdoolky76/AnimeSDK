#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBBFAJOHDNG.h"
#include "unitysdk/System/ValueType.h"

class ALMMGOFACDF;
class KPNIFGIKELE;
class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define INAFDANFAPN__CTOR_OFFSET UNITYSDK_OFFSET(0x7E7DC0)

inline static constexpr unsigned int INAFDANFAPN_TypeDefinitionIndex = 67415;

struct alignas(8) INAFDANFAPN
{
	::System::Int32 IMOCDGPBGME; // 0x10
	::System::Boolean NGEPPPMIMIE; // 0x14
	::System::Boolean CLKFLAMPPME; // 0x15
	::System::Boolean NIGBKKNJGLO; // 0x16
	::System::Boolean CJHGJJMHCLO; // 0x17
	::System::Boolean FGJCDPCCLDK; // 0x18
	::System::Byte _padding0[0x3];
	::MBBFAJOHDNG CHHGFOOBPCK; // 0x1C
	::System::Byte _padding1[0x4];
	::MoleMole::Battle::Entity* ALBCFGOBAEK; // 0x30
	::KPNIFGIKELE* OJEAOMINJKI; // 0x38
	::System::String* HENDPBLNEBO; // 0x40
	::NLNIIPDCABP* CFLBLBCPFPI; // 0x48
	::ALMMGOFACDF* GAEKKIIFLDK; // 0x50

	::System::Void _ctor(::System::Int32 PAKHENNMFIK, ::System::Boolean FONKIFOPPLP, ::System::Boolean CNPGHPMPAID, ::System::Boolean PMAOPOAPJGB, ::System::Boolean FNEGKAKDPKA, ::System::Boolean FKAALDCJPDP, ::MBBFAJOHDNG NNAKPHEJBHJ, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::KPNIFGIKELE* EEBHMONLMKK, ::System::String* DNOHAOIAFOP, ::NLNIIPDCABP* FNFNDIBMPDE, ::ALMMGOFACDF* JGIHAKIFJIJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::MBBFAJOHDNG, ::MoleMole::Battle::Entity*, ::KPNIFGIKELE*, ::System::String*, ::NLNIIPDCABP*, ::ALMMGOFACDF*))((::PBYTE)hIl2Cpp + INAFDANFAPN__CTOR_OFFSET))(this, PAKHENNMFIK, FONKIFOPPLP, CNPGHPMPAID, PMAOPOAPJGB, FNEGKAKDPKA, FKAALDCJPDP, NNAKPHEJBHJ, MFMPICKHAMJ, EEBHMONLMKK, DNOHAOIAFOP, FNFNDIBMPDE, JGIHAKIFJIJ);
	}
};
