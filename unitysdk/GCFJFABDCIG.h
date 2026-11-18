#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CELEAAKFDPL.h"
#include "unitysdk/JKHCGCJIMHC.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/HCDCPDGBIMB.h"
#include "unitysdk/System/ValueTuple_3.h"

class GLJLOMHIEIA;
class POFOFGILKAA;
namespace MoleMole { class UISummerEventResultPageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GCFJFABDCIG_DFILIFBBMLN_OFFSET UNITYSDK_OFFSET(0xBB81970)
#define GCFJFABDCIG_FNACHECOODF_OFFSET UNITYSDK_OFFSET(0xBB82130)
#define GCFJFABDCIG_HFHNAJBICHD_1_OFFSET UNITYSDK_OFFSET(0xBB82500)
#define GCFJFABDCIG_HFHNAJBICHD_OFFSET UNITYSDK_OFFSET(0xBB81EC0)
#define GCFJFABDCIG_HIHMDMNJIIJ_OFFSET UNITYSDK_OFFSET(0xBB819E0)
#define GCFJFABDCIG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0xBB823D0)
#define GCFJFABDCIG_JJCECLNIHEK_OFFSET UNITYSDK_OFFSET(0xBB823C0)
#define GCFJFABDCIG_JLHBKJKDGDE_OFFSET UNITYSDK_OFFSET(0xBB81A80)
#define GCFJFABDCIG_KNAMLBOMBMK_OFFSET UNITYSDK_OFFSET(0xBB82200)
#define GCFJFABDCIG_LAKHJJCLDKB_OFFSET UNITYSDK_OFFSET(0xBB82560)
#define GCFJFABDCIG_LJEEJABBAHD_OFFSET UNITYSDK_OFFSET(0xBB81960)
#define GCFJFABDCIG_NPHBLJDPFHH_OFFSET UNITYSDK_OFFSET(0xBB81980)
#define GCFJFABDCIG_PJHOJIDCIPH_OFFSET UNITYSDK_OFFSET(0xBB82210)
#define GCFJFABDCIG__CTOR_OFFSET UNITYSDK_OFFSET(0xBB821F0)

inline static constexpr unsigned int GCFJFABDCIG_TypeDefinitionIndex = 55267;

class GCFJFABDCIG : public ::CELEAAKFDPL
{
public:
	::MoleMole::UISummerEventResultPageController* GGCMFPKILJB; // 0x2F8
	::JKHCGCJIMHC DHLGFHMKNOB; // 0x300
	::System::Boolean JBLBIHOICAF; // 0x304
	::System::Byte _padding0[0x3];
	::System::Int32 KBKHJALDMAO; // 0x308
	::System::Single GJIPGNGGNOP; // 0x30C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFJFABDCIG__CTOR_OFFSET))(this);
	}

	::MoleMole::ELocalPlayType LJEEJABBAHD()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFJFABDCIG_LJEEJABBAHD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HCDCPDGBIMB>* DFILIFBBMLN()
	{
		return ((::System::Collections::Generic::List_1<::HCDCPDGBIMB>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFJFABDCIG_DFILIFBBMLN_OFFSET))(this);
	}

	::System::Single NPHBLJDPFHH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFJFABDCIG_NPHBLJDPFHH_OFFSET))(this);
	}

	::System::Boolean HIHMDMNJIIJ(::MoleMole::Level::RatingType& NILNNELOMCG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Level::RatingType&))((::PBYTE)hIl2Cpp + GCFJFABDCIG_HIHMDMNJIIJ_OFFSET))(this, NILNNELOMCG);
	}

	::System::Void JLHBKJKDGDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFJFABDCIG_JLHBKJKDGDE_OFFSET))(this);
	}

	::System::Void FNACHECOODF(::POFOFGILKAA* HEJIBNEHLIG)
	{
		return ((::System::Void(*)(::PVOID, ::POFOFGILKAA*))((::PBYTE)hIl2Cpp + GCFJFABDCIG_FNACHECOODF_OFFSET))(this, HEJIBNEHLIG);
	}

	::System::Void KNAMLBOMBMK(::POFOFGILKAA* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::POFOFGILKAA*))((::PBYTE)hIl2Cpp + GCFJFABDCIG_KNAMLBOMBMK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::ValueTuple_3<::JKHCGCJIMHC, ::System::Single, ::System::Single> HFHNAJBICHD(::System::Single FNIOPKPHDEH)
	{
		return ((::System::ValueTuple_3<::JKHCGCJIMHC, ::System::Single, ::System::Single>(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCFJFABDCIG_HFHNAJBICHD_OFFSET))(this, FNIOPKPHDEH);
	}

	::System::Single PJHOJIDCIPH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFJFABDCIG_PJHOJIDCIPH_OFFSET))(this);
	}

	::System::Void JJCECLNIHEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFJFABDCIG_JJCECLNIHEK_OFFSET))(this);
	}

	::GLJLOMHIEIA* IFDPKDOFOJD()
	{
		return ((::GLJLOMHIEIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFJFABDCIG_IFDPKDOFOJD_OFFSET))(this);
	}

	::JKHCGCJIMHC HFHNAJBICHD_1()
	{
		return ((::JKHCGCJIMHC(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFJFABDCIG_HFHNAJBICHD_1_OFFSET))(this);
	}

	::System::Boolean LAKHJJCLDKB(::MoleMole::Level::RatingType& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Level::RatingType&))((::PBYTE)hIl2Cpp + GCFJFABDCIG_LAKHJJCLDKB_OFFSET))(this, MIALFKCCCPI);
	}
};
