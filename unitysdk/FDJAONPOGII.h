#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class ALMFLCJCHKP;
class LKFPICOFNDF;
class LMFOOOLDECA;
class OMNJCDDMLHI;

#define FDJAONPOGII_AOBBLPIDECE_OFFSET UNITYSDK_OFFSET(0x156D21B0)
#define FDJAONPOGII_CTOR_OFFSET UNITYSDK_OFFSET(0x156D1E40)
#define FDJAONPOGII_HGGMMMABMFA_OFFSET UNITYSDK_OFFSET(0x156D2270)
#define FDJAONPOGII_IHFEJMCDBHE_OFFSET UNITYSDK_OFFSET(0x156D1EB0)
#define FDJAONPOGII_JOLMCAGPKOC_OFFSET UNITYSDK_OFFSET(0x156D1E50)
#define FDJAONPOGII_MFBMHCAMAEI_OFFSET UNITYSDK_OFFSET(0x156D2220)

inline static constexpr unsigned int FDJAONPOGII_TypeDefinitionIndex = 77859;

	class FDJAONPOGII : public ::System::Object
	{
	public:
		::LMFOOOLDECA* PDENFEFCAGN; // 0x10
		::OMNJCDDMLHI* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::LMFOOOLDECA* a1, ::OMNJCDDMLHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LMFOOOLDECA*, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + FDJAONPOGII_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void JOLMCAGPKOC(::ALMFLCJCHKP* a1, ::LKFPICOFNDF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::LKFPICOFNDF*))((::PBYTE)hIl2Cpp + FDJAONPOGII_JOLMCAGPKOC_OFFSET))(this, a1, a2);
		}

		::System::Void AOBBLPIDECE(::ALMFLCJCHKP* a1, ::LKFPICOFNDF* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::LKFPICOFNDF*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FDJAONPOGII_AOBBLPIDECE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IHFEJMCDBHE(::ALMFLCJCHKP* a1, ::LKFPICOFNDF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::LKFPICOFNDF*))((::PBYTE)hIl2Cpp + FDJAONPOGII_IHFEJMCDBHE_OFFSET))(this, a1, a2);
		}

		::System::Void MFBMHCAMAEI(::ALMFLCJCHKP* a1, ::LKFPICOFNDF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::LKFPICOFNDF*))((::PBYTE)hIl2Cpp + FDJAONPOGII_MFBMHCAMAEI_OFFSET))(this, a1, a2);
		}

		::System::Void HGGMMMABMFA(::ALMFLCJCHKP* a1, ::LKFPICOFNDF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::LKFPICOFNDF*))((::PBYTE)hIl2Cpp + FDJAONPOGII_HGGMMMABMFA_OFFSET))(this, a1, a2);
		}

	};
