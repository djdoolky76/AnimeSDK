#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGAANNPEJCH.h"
#include "unitysdk/JGELKBLKFHE.h"
#include "unitysdk/JGJJKCMBCMA.h"

class ADACFNEHECA;
class PBIJEADFPLA;
namespace MoleMole { class UIShunguangEventDiaryContext; }
namespace MoleMole { class UIShunguangEventScratchCardContext; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JDHGBLHJPDF_AFLKFPEIGNI_OFFSET UNITYSDK_OFFSET(0x13AC2FE0)
#define JDHGBLHJPDF_ANGILIHDGAF_OFFSET UNITYSDK_OFFSET(0x13AC21E0)
#define JDHGBLHJPDF_CMBMFLCODAC_OFFSET UNITYSDK_OFFSET(0x13AC2360)
#define JDHGBLHJPDF_GFNPEDODPOM_OFFSET UNITYSDK_OFFSET(0x13AC2920)
#define JDHGBLHJPDF_IFDDMIJEGAC_OFFSET UNITYSDK_OFFSET(0x13AC2BB0)
#define JDHGBLHJPDF_IFNFJEJKLOJ_OFFSET UNITYSDK_OFFSET(0x13AC24A0)
#define JDHGBLHJPDF_IGFOFCBNKJJ_OFFSET UNITYSDK_OFFSET(0x13AC2DC0)
#define JDHGBLHJPDF_IGOMECGKCAM_OFFSET UNITYSDK_OFFSET(0x13AC1C70)
#define JDHGBLHJPDF_ILHLHIGJKJA_OFFSET UNITYSDK_OFFSET(0x13AC1A50)
#define JDHGBLHJPDF_IOFJGEBAIKF_OFFSET UNITYSDK_OFFSET(0x13AC2400)
#define JDHGBLHJPDF_OOANAOBOKCK_OFFSET UNITYSDK_OFFSET(0x13AC2A80)
#define JDHGBLHJPDF__CTOR_OFFSET UNITYSDK_OFFSET(0x13AC1A40)

inline static constexpr unsigned int JDHGBLHJPDF_TypeDefinitionIndex = 50911;

class JDHGBLHJPDF : public ::JGELKBLKFHE
{
public:
	::System::Collections::Generic::List_1<::PBIJEADFPLA*>* INEODOHEGPP; // 0x18
	::System::Collections::Generic::List_1<::ADACFNEHECA*>* AGCEDDEPKOB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHGBLHJPDF__CTOR_OFFSET))(this);
	}

	::System::Void ILHLHIGJKJA(::System::Int32 PAEEEHKILOC, ::EGAANNPEJCH HCKDKJHAOMF, ::System::Action* EDNJGMKPFHG, ::System::Action* OLBAKFLBNIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::EGAANNPEJCH, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + JDHGBLHJPDF_ILHLHIGJKJA_OFFSET))(this, PAEEEHKILOC, HCKDKJHAOMF, EDNJGMKPFHG, OLBAKFLBNIG);
	}

	::System::Void IGOMECGKCAM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHGBLHJPDF_IGOMECGKCAM_OFFSET))(this);
	}

	::PBIJEADFPLA* ANGILIHDGAF(::JGJJKCMBCMA GJOKHCLJFML)
	{
		return ((::PBIJEADFPLA*(*)(::PVOID, ::JGJJKCMBCMA))((::PBYTE)hIl2Cpp + JDHGBLHJPDF_ANGILIHDGAF_OFFSET))(this, GJOKHCLJFML);
	}

	::System::Collections::Generic::List_1<::ADACFNEHECA*>* IOFJGEBAIKF()
	{
		return ((::System::Collections::Generic::List_1<::ADACFNEHECA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHGBLHJPDF_IOFJGEBAIKF_OFFSET))(this);
	}

	::System::Void IFNFJEJKLOJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHGBLHJPDF_IFNFJEJKLOJ_OFFSET))(this);
	}

	::System::Void GFNPEDODPOM(::MoleMole::UIShunguangEventScratchCardContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIShunguangEventScratchCardContext*))((::PBYTE)hIl2Cpp + JDHGBLHJPDF_GFNPEDODPOM_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Int32 OOANAOBOKCK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHGBLHJPDF_OOANAOBOKCK_OFFSET))(this);
	}

	::System::Void IFDDMIJEGAC(::MoleMole::UIShunguangEventDiaryContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIShunguangEventDiaryContext*))((::PBYTE)hIl2Cpp + JDHGBLHJPDF_IFDDMIJEGAC_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Boolean IGFOFCBNKJJ(::System::Int32 OGDNGAMKFDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JDHGBLHJPDF_IGFOFCBNKJJ_OFFSET))(this, OGDNGAMKFDG);
	}

	static ::System::Boolean AFLKFPEIGNI()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JDHGBLHJPDF_AFLKFPEIGNI_OFFSET))();
	}

	::System::Collections::Generic::List_1<::PBIJEADFPLA*>* CMBMFLCODAC()
	{
		return ((::System::Collections::Generic::List_1<::PBIJEADFPLA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHGBLHJPDF_CMBMFLCODAC_OFFSET))(this);
	}
};
