#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class ALMFLCJCHKP;
class LKFPICOFNDF;

#define EDJFJFMNFJE_AOBBLPIDECE_OFFSET UNITYSDK_OFFSET(0x13321BF0)
#define EDJFJFMNFJE_CTOR_OFFSET UNITYSDK_OFFSET(0x13321CF0)
#define EDJFJFMNFJE_HGGMMMABMFA_OFFSET UNITYSDK_OFFSET(0x13321CA0)
#define EDJFJFMNFJE_JOLMCAGPKOC_OFFSET UNITYSDK_OFFSET(0x13321BA0)
#define EDJFJFMNFJE_MFBMHCAMAEI_OFFSET UNITYSDK_OFFSET(0x13321C50)

inline static constexpr unsigned int EDJFJFMNFJE_TypeDefinitionIndex = 77857;

	class EDJFJFMNFJE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJFJFMNFJE_CTOR_OFFSET))(this);
		}

		::System::Void JOLMCAGPKOC(::ALMFLCJCHKP* a1, ::LKFPICOFNDF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::LKFPICOFNDF*))((::PBYTE)hIl2Cpp + EDJFJFMNFJE_JOLMCAGPKOC_OFFSET))(this, a1, a2);
		}

		::System::Void AOBBLPIDECE(::ALMFLCJCHKP* a1, ::LKFPICOFNDF* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::LKFPICOFNDF*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + EDJFJFMNFJE_AOBBLPIDECE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MFBMHCAMAEI(::ALMFLCJCHKP* a1, ::LKFPICOFNDF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::LKFPICOFNDF*))((::PBYTE)hIl2Cpp + EDJFJFMNFJE_MFBMHCAMAEI_OFFSET))(this, a1, a2);
		}

		::System::Void HGGMMMABMFA(::ALMFLCJCHKP* a1, ::LKFPICOFNDF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::LKFPICOFNDF*))((::PBYTE)hIl2Cpp + EDJFJFMNFJE_HGGMMMABMFA_OFFSET))(this, a1, a2);
		}

	};
