#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCGKBOPGJL.h"
#include "unitysdk/GGLKJLLMHBN.h"
class DNIAIFGHFLM;
class DPHIFKIPMLI;
class HPJEECIEDAB;
class NCINHOOPPNG;

#define KDLKHNNLGJF_ABHMEPKGMKA_OFFSET UNITYSDK_OFFSET(0x1B5CA0A0)
#define KDLKHNNLGJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5C9670)
#define KDLKHNNLGJF_DGBMKOOLGID_OFFSET UNITYSDK_OFFSET(0x1B5C9780)
#define KDLKHNNLGJF__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0x1B5C9810)
#define KDLKHNNLGJF__REBUILD_OFFSET UNITYSDK_OFFSET(0x1B5C9950)

inline static constexpr unsigned int KDLKHNNLGJF_TypeDefinitionIndex = 64152;

	class KDLKHNNLGJF : public ::GGLKJLLMHBN
	{
	public:
		::DNIAIFGHFLM* GOHMGCHLKLM; // 0x28
		::HPJEECIEDAB* IHFNBHEIIAI; // 0x30
		::DPHIFKIPMLI* PMGONAJKJAE; // 0x38
		::System::UInt32 FFFFJCOACPK; // 0x40
		::APCGKBOPGJL ODMGLBEOBDP; // 0x44
		::System::Void _ctor(::APCGKBOPGJL a1, ::HPJEECIEDAB* a2, ::DNIAIFGHFLM* a3)
		{
			return ((::System::Void(*)(::PVOID, ::APCGKBOPGJL, ::HPJEECIEDAB*, ::DNIAIFGHFLM*))((::PBYTE)hIl2Cpp + KDLKHNNLGJF_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DGBMKOOLGID(::DPHIFKIPMLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPHIFKIPMLI*))((::PBYTE)hIl2Cpp + KDLKHNNLGJF_DGBMKOOLGID_OFFSET))(this, a1);
		}

		::System::Boolean _CheckNeedRebuild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLKHNNLGJF__CHECKNEEDREBUILD_OFFSET))(this);
		}

		::System::Void _Rebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLKHNNLGJF__REBUILD_OFFSET))(this);
		}

		::System::Void ABHMEPKGMKA(::NCINHOOPPNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCINHOOPPNG*))((::PBYTE)hIl2Cpp + KDLKHNNLGJF_ABHMEPKGMKA_OFFSET))(this, a1);
		}

	};
