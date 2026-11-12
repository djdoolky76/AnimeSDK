#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class ALMFLCJCHKP;
class LKFPICOFNDF;
class LMFOOOLDECA;
class OMNJCDDMLHI;

#define HMDCOHHMMFA_AOBBLPIDECE_OFFSET UNITYSDK_OFFSET(0x16D15FB0)
#define HMDCOHHMMFA_CTOR_OFFSET UNITYSDK_OFFSET(0x16D15EB0)
#define HMDCOHHMMFA_HGGMMMABMFA_OFFSET UNITYSDK_OFFSET(0x16D16010)
#define HMDCOHHMMFA_JOLMCAGPKOC_OFFSET UNITYSDK_OFFSET(0x16D15F60)
#define HMDCOHHMMFA_MFBMHCAMAEI_OFFSET UNITYSDK_OFFSET(0x16D15EC0)

inline static constexpr unsigned int HMDCOHHMMFA_TypeDefinitionIndex = 80593;

	class HMDCOHHMMFA : public ::System::Object
	{
	public:
		::LMFOOOLDECA* PDENFEFCAGN; // 0x10
		::OMNJCDDMLHI* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::LMFOOOLDECA* a1, ::OMNJCDDMLHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LMFOOOLDECA*, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + HMDCOHHMMFA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MFBMHCAMAEI(::ALMFLCJCHKP* a1, ::LKFPICOFNDF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::LKFPICOFNDF*))((::PBYTE)hIl2Cpp + HMDCOHHMMFA_MFBMHCAMAEI_OFFSET))(this, a1, a2);
		}

		::System::Void JOLMCAGPKOC(::ALMFLCJCHKP* a1, ::LKFPICOFNDF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::LKFPICOFNDF*))((::PBYTE)hIl2Cpp + HMDCOHHMMFA_JOLMCAGPKOC_OFFSET))(this, a1, a2);
		}

		::System::Void AOBBLPIDECE(::ALMFLCJCHKP* a1, ::LKFPICOFNDF* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::LKFPICOFNDF*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HMDCOHHMMFA_AOBBLPIDECE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HGGMMMABMFA(::ALMFLCJCHKP* a1, ::LKFPICOFNDF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::LKFPICOFNDF*))((::PBYTE)hIl2Cpp + HMDCOHHMMFA_HGGMMMABMFA_OFFSET))(this, a1, a2);
		}

	};
