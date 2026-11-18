#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HGAKHJOHHLE_DIDBECOEHJB_OFFSET UNITYSDK_OFFSET(0x16CEDD60)
#define HGAKHJOHHLE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16CEDFD0)
#define HGAKHJOHHLE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16CEDF40)
#define HGAKHJOHHLE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16CEDB70)
#define HGAKHJOHHLE__CTOR_OFFSET UNITYSDK_OFFSET(0x16CEDFC0)

inline static constexpr unsigned int HGAKHJOHHLE_TypeDefinitionIndex = 67686;

class HGAKHJOHHLE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* MJMGANKGIFM; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x20
	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* GDJLPGIBPDO; // 0x28
	::FGCOIBFFCHB* LGMNCDGHKKG; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* BDKBBOKFMOB; // 0x38
	::UnityEngine::Animation* NFONGFBNLBG; // 0x40
	::UnityEngine::Transform* OHMAFDDJJIB; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* INOKEAFJFNF; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAKHJOHHLE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HGAKHJOHHLE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* DIDBECOEHJB(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::FGCOIBFFCHB*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HGAKHJOHHLE_DIDBECOEHJB_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HGAKHJOHHLE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAKHJOHHLE_KGEBDLGBGNM_OFFSET))(this);
	}
};
