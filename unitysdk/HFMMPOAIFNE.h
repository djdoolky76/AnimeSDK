#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNFNAFKBHBN.h"
#include "unitysdk/LKIDEBBHFIL.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueTuple_2.h"

class CODJLLEKIAJ;
namespace System { class String; }

#define HFMMPOAIFNE_BDHKBNIMHFJ_OFFSET UNITYSDK_OFFSET(0x16CEC920)
#define HFMMPOAIFNE_BNMHECLBNKO_OFFSET UNITYSDK_OFFSET(0x16CEC8A0)
#define HFMMPOAIFNE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x16CEC7B0)
#define HFMMPOAIFNE_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x16CEC7E0)
#define HFMMPOAIFNE_GET_REDDOTINFO_OFFSET UNITYSDK_OFFSET(0x16CEC7F0)
#define HFMMPOAIFNE_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x16CEC570)
#define HFMMPOAIFNE_IPDIAPFGABC_OFFSET UNITYSDK_OFFSET(0x16CEC790)
#define HFMMPOAIFNE__CTOR_OFFSET UNITYSDK_OFFSET(0x16CEC910)

inline static constexpr unsigned int HFMMPOAIFNE_TypeDefinitionIndex = 46743;

class HFMMPOAIFNE : public ::System::Object
{
public:
	::System::String* FNJPKKAHJAJ; // 0x10
	::CODJLLEKIAJ* DFMKILICPFB; // 0x18
	::System::Int32 OGAEALLPMFO; // 0x20
	::System::Int32 FMJLCEBHPEC; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMMPOAIFNE__CTOR_OFFSET))(this);
	}

	::System::String* get_Title()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMMPOAIFNE_GET_TITLE_OFFSET))(this);
	}

	::Foundation::AssetPath get_IconPath()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMMPOAIFNE_GET_ICONPATH_OFFSET))(this);
	}

	::BNFNAFKBHBN get_IconType()
	{
		return ((::BNFNAFKBHBN(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMMPOAIFNE_GET_ICONTYPE_OFFSET))(this);
	}

	::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32> get_RedDotInfo()
	{
		return ((::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMMPOAIFNE_GET_REDDOTINFO_OFFSET))(this);
	}

	::LKIDEBBHFIL IPDIAPFGABC()
	{
		return ((::LKIDEBBHFIL(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMMPOAIFNE_IPDIAPFGABC_OFFSET))(this);
	}

	::Share::ENotificationBadgeType BDHKBNIMHFJ()
	{
		return ((::Share::ENotificationBadgeType(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMMPOAIFNE_BDHKBNIMHFJ_OFFSET))(this);
	}

	::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32> BNMHECLBNKO()
	{
		return ((::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMMPOAIFNE_BNMHECLBNKO_OFFSET))(this);
	}
};
