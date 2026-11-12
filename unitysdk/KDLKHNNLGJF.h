#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCGKBOPGJL.h"
#include "unitysdk/GGLKJLLMHBN.h"
class DNIAIFGHFLM;
class DPHIFKIPMLI;
class HPJEECIEDAB;
class NCINHOOPPNG;

#define KDLKHNNLGJF_ABHMEPKGMKA_OFFSET UNITYSDK_OFFSET(0xBBF1750)
#define KDLKHNNLGJF_CTOR_OFFSET UNITYSDK_OFFSET(0xBBF0D20)
#define KDLKHNNLGJF_DGBMKOOLGID_OFFSET UNITYSDK_OFFSET(0xBBF0E30)
#define KDLKHNNLGJF__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0xBBF0EC0)
#define KDLKHNNLGJF__REBUILD_OFFSET UNITYSDK_OFFSET(0xBBF1000)

inline static constexpr unsigned int KDLKHNNLGJF_TypeDefinitionIndex = 64152;

	class KDLKHNNLGJF : public ::GGLKJLLMHBN
	{
	public:
		::HPJEECIEDAB* IHFNBHEIIAI; // 0x28
		::DPHIFKIPMLI* PMGONAJKJAE; // 0x30
		::DNIAIFGHFLM* GOHMGCHLKLM; // 0x38
		::APCGKBOPGJL ODMGLBEOBDP; // 0x40
		::System::UInt32 FFFFJCOACPK; // 0x48
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
