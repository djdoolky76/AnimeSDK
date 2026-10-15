#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/APCGKBOPGJL.h"
class DNIAIFGHFLM;
class HPJEECIEDAB;
class IPFNLCFACJH;
class OCBFOHCHPPG;
class POKKCEHMFMJ;

#define GGBKKLGBBII_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x159F68D0)
#define GGBKKLGBBII_CTOR_OFFSET UNITYSDK_OFFSET(0x159F67D0)

inline static constexpr unsigned int GGBKKLGBBII_TypeDefinitionIndex = 62626;

	class GGBKKLGBBII : public ::System::Object
	{
	public:
		::POKKCEHMFMJ* FKBDFJBMPCC; // 0x10
		::DNIAIFGHFLM* GOHMGCHLKLM; // 0x18
		::HPJEECIEDAB* IHFNBHEIIAI; // 0x20
		::IPFNLCFACJH* DCJCONLGILD; // 0x28
		::System::Void _ctor(::IPFNLCFACJH* a1, ::HPJEECIEDAB* a2, ::DNIAIFGHFLM* a3, ::POKKCEHMFMJ* a4)
		{
			return ((::System::Void(*)(::PVOID, ::IPFNLCFACJH*, ::HPJEECIEDAB*, ::DNIAIFGHFLM*, ::POKKCEHMFMJ*))((::PBYTE)hIl2Cpp + GGBKKLGBBII_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::OCBFOHCHPPG* BPLPBPMEODA(::APCGKBOPGJL a1)
		{
			return ((::OCBFOHCHPPG*(*)(::PVOID, ::APCGKBOPGJL))((::PBYTE)hIl2Cpp + GGBKKLGBBII_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
