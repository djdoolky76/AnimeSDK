#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class HNLACBJDCGI;
class LGINJIKKBJA;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define BIFLPBINKAD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15079760)
#define BIFLPBINKAD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15079620)
#define BIFLPBINKAD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15079160)
#define BIFLPBINKAD_PJIPIJJLAKC_OFFSET UNITYSDK_OFFSET(0x15079440)
#define BIFLPBINKAD__CTOR_OFFSET UNITYSDK_OFFSET(0x15079750)

inline static constexpr unsigned int BIFLPBINKAD_TypeDefinitionIndex = 78674;

class BIFLPBINKAD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* JELGGOHAMID; // 0x18
	::LGINJIKKBJA* MAHNABIKKDL; // 0x20
	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* KHDCCMKHCLE; // 0x28
	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* FMANOCAFGEF; // 0x30
	::UIControllerExtensionData* CBKHDEEKEOB; // 0x38
	::UnityEngine::Animation* PMCNDKMMFDG; // 0x40
	::FILNFMCNCFE* NFDEKCKNIEC; // 0x48
	::UnityEngine::Transform* MBKACMJJMBH; // 0x50
	::UnityEngine::Transform* PNHGFJBDMKA; // 0x58
	::UnityEngine::Animation* OBMFIJDBOLH; // 0x60
	::UnityEngine::Transform* BLAHNJODMAG; // 0x68
	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* NHCFCMGFDCG; // 0x70
	::LGINJIKKBJA* PDOJCHBHDCA; // 0x78
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFLPBINKAD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BIFLPBINKAD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFLPBINKAD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BIFLPBINKAD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* PJIPIJJLAKC(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::FGCOIBFFCHB*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BIFLPBINKAD_PJIPIJJLAKC_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
