#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/DateTime.h"

class LCBJDGHHDOO;
namespace MoleMole { class MonthCardDayReward; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EDIOENBPPJN_ALGDLJGCEHD_OFFSET UNITYSDK_OFFSET(0x148CCC80)
#define EDIOENBPPJN_BMDFHEOGEKO_OFFSET UNITYSDK_OFFSET(0x148CC570)
#define EDIOENBPPJN_FDEFGOCNOOO_OFFSET UNITYSDK_OFFSET(0x148CCC90)
#define EDIOENBPPJN_NIKIAEADIBD_OFFSET UNITYSDK_OFFSET(0x148CCC60)
#define EDIOENBPPJN_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x148CCC70)
#define EDIOENBPPJN__CTOR_OFFSET UNITYSDK_OFFSET(0x148CC060)

inline static constexpr unsigned int EDIOENBPPJN_TypeDefinitionIndex = 68492;

class EDIOENBPPJN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::MonthCardDayReward*>* _JBHPGKDBICE_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::LCBJDGHHDOO*>* OEJAFKMGGJM; // 0x18
	::System::UInt32 _HHNNKGPFJNO_k__BackingField; // 0x20

	::System::Void _ctor(::System::DateTime ALLNOLHHJMD, ::System::Collections::Generic::List_1<::LCBJDGHHDOO*>* MGNPPPJOJDK, ::System::UInt32 APKIKLPPHEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::DateTime, ::System::Collections::Generic::List_1<::LCBJDGHHDOO*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + EDIOENBPPJN__CTOR_OFFSET))(this, ALLNOLHHJMD, MGNPPPJOJDK, APKIKLPPHEA);
	}

	::System::Collections::Generic::List_1<::MoleMole::MonthCardDayReward*>* NIKIAEADIBD()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::MonthCardDayReward*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIOENBPPJN_NIKIAEADIBD_OFFSET))(this);
	}

	::System::UInt32 PPIFNHNGCGO()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIOENBPPJN_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void ALGDLJGCEHD(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDIOENBPPJN_ALGDLJGCEHD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BMDFHEOGEKO(::System::DateTime ALLNOLHHJMD)
	{
		return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + EDIOENBPPJN_BMDFHEOGEKO_OFFSET))(this, ALLNOLHHJMD);
	}

	::System::Void FDEFGOCNOOO(::System::Collections::Generic::List_1<::MoleMole::MonthCardDayReward*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MonthCardDayReward*>*))((::PBYTE)hIl2Cpp + EDIOENBPPJN_FDEFGOCNOOO_OFFSET))(this, EGEGIMGMJHN);
	}
};
