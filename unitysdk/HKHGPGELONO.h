#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;

#define HKHGPGELONO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15B641C0)
#define HKHGPGELONO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15B640E0)
#define HKHGPGELONO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15B64840)
#define HKHGPGELONO__CTOR_OFFSET UNITYSDK_OFFSET(0x15B64750)

inline static constexpr unsigned int HKHGPGELONO_TypeDefinitionIndex = 54913;

class HKHGPGELONO : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Object*>*>* PFDEOFKGLGL; // 0x28
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* MCMGBADKPOO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHGPGELONO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHGPGELONO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HKHGPGELONO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHGPGELONO_GDEOPIBNOIN_OFFSET))(this);
	}
};
