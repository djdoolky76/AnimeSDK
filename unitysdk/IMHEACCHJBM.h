#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHCLHGCLLBF.h"

class BNDIBAOAEAP;
class CJIEIHEDMME;
class IBENDELLLAO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IMHEACCHJBM_GKAEHGNPINH_OFFSET UNITYSDK_OFFSET(0x19888CC0)
#define IMHEACCHJBM_GKCLAFJFBNF_OFFSET UNITYSDK_OFFSET(0x19889430)
#define IMHEACCHJBM_IIBNMDDNBCJ_OFFSET UNITYSDK_OFFSET(0x198894C0)
#define IMHEACCHJBM_NFBEDJIJIBF_OFFSET UNITYSDK_OFFSET(0x198891C0)
#define IMHEACCHJBM_OPMPMDMAENO_OFFSET UNITYSDK_OFFSET(0x19888FF0)
#define IMHEACCHJBM__CTOR_OFFSET UNITYSDK_OFFSET(0x19888C60)

inline static constexpr unsigned int IMHEACCHJBM_TypeDefinitionIndex = 80019;

class IMHEACCHJBM : public ::JHCLHGCLLBF
{
public:
	::System::Collections::Generic::List_1<::BNDIBAOAEAP*>* BPKDCOCJOBC; // 0x18
	::System::Boolean HEONLGEHIJK; // 0x20

	::System::Void _ctor(::CJIEIHEDMME* PJBDLMBIIBH)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + IMHEACCHJBM__CTOR_OFFSET))(this, PJBDLMBIIBH);
	}

	::System::Void OPMPMDMAENO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHEACCHJBM_OPMPMDMAENO_OFFSET))(this);
	}

	::System::Void GKAEHGNPINH(::System::Int32 INEPJABHIIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IMHEACCHJBM_GKAEHGNPINH_OFFSET))(this, INEPJABHIIG);
	}

	::System::Void GKCLAFJFBNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHEACCHJBM_GKCLAFJFBNF_OFFSET))(this);
	}

	::BNDIBAOAEAP* IIBNMDDNBCJ(::System::Int32 BNLHPGHLKDK)
	{
		return ((::BNDIBAOAEAP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IMHEACCHJBM_IIBNMDDNBCJ_OFFSET))(this, BNLHPGHLKDK);
	}

	::System::Void NFBEDJIJIBF(::IBENDELLLAO* JNLBPMKIFNK, ::System::Int32 OBBMBNCIBPG)
	{
		return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*, ::System::Int32))((::PBYTE)hIl2Cpp + IMHEACCHJBM_NFBEDJIJIBF_OFFSET))(this, JNLBPMKIFNK, OBBMBNCIBPG);
	}
};
