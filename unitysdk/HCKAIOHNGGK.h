#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKPLIMLCMIL.h"
#include "unitysdk/HCKAIOHNGGK_PropertyBits.h"
#include "unitysdk/RPG/GameCore/CakeRacePickupItemType.h"
#include "unitysdk/System/Object.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HCKAIOHNGGK_AEINCGNABAD_OFFSET UNITYSDK_OFFSET(0x1C664330)
#define HCKAIOHNGGK_BLBJJDLFCEA_OFFSET UNITYSDK_OFFSET(0x1C664430)
#define HCKAIOHNGGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C664630)
#define HCKAIOHNGGK_DJCCELKNKAJ_OFFSET UNITYSDK_OFFSET(0x1C6643B0)
#define HCKAIOHNGGK_DMEDLCMMIJA_OFFSET UNITYSDK_OFFSET(0x1C6641C0)
#define HCKAIOHNGGK_ELJEADGDOPA_OFFSET UNITYSDK_OFFSET(0x1C664150)
#define HCKAIOHNGGK_GJDMGJCIAMP_OFFSET UNITYSDK_OFFSET(0x1C6644B0)
#define HCKAIOHNGGK_LAMFGGDMMOO_OFFSET UNITYSDK_OFFSET(0x1C6642B0)
#define HCKAIOHNGGK_MFCFABPGFGB_OFFSET UNITYSDK_OFFSET(0x1C664210)
#define HCKAIOHNGGK_MKGDCFBIKKO_OFFSET UNITYSDK_OFFSET(0x1C664260)

inline static constexpr unsigned int HCKAIOHNGGK_TypeDefinitionIndex = 37222;

	class HCKAIOHNGGK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* HGHKFLKGPHA; // 0x10
		::IFBFJDCECML* OHLNEMLLFAI; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* LGDKNINGONG; // 0x20
		::System::Int32 EBJKJAGJGPK; // 0x28
		::CKPLIMLCMIL IHDNMJNKEME; // 0x2C
		::System::Int32 KPLMHMGHNOF; // 0x34
		::System::Int32 BIGKKOGKMLK; // 0x38
		::System::Int32 HBAMPJPOOLM; // 0x3C
		::System::UInt16 FBEBNLOPIBL; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKAIOHNGGK_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::CakeRacePickupItemType ELJEADGDOPA()
		{
			return ((::RPG::GameCore::CakeRacePickupItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKAIOHNGGK_ELJEADGDOPA_OFFSET))(this);
		}

		::System::Boolean DMEDLCMMIJA(::HCKAIOHNGGK_PropertyBits a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HCKAIOHNGGK_PropertyBits))((::PBYTE)hIl2Cpp + HCKAIOHNGGK_DMEDLCMMIJA_OFFSET))(this, a1);
		}

		::System::Void MFCFABPGFGB(::HCKAIOHNGGK_PropertyBits a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCKAIOHNGGK_PropertyBits))((::PBYTE)hIl2Cpp + HCKAIOHNGGK_MFCFABPGFGB_OFFSET))(this, a1);
		}

		::System::Void MKGDCFBIKKO(::HCKAIOHNGGK_PropertyBits a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCKAIOHNGGK_PropertyBits))((::PBYTE)hIl2Cpp + HCKAIOHNGGK_MKGDCFBIKKO_OFFSET))(this, a1);
		}

		::System::Void LAMFGGDMMOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKAIOHNGGK_LAMFGGDMMOO_OFFSET))(this);
		}

		::System::Boolean AEINCGNABAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKAIOHNGGK_AEINCGNABAD_OFFSET))(this);
		}

		::System::Boolean DJCCELKNKAJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKAIOHNGGK_DJCCELKNKAJ_OFFSET))(this);
		}

		::System::Boolean BLBJJDLFCEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKAIOHNGGK_BLBJJDLFCEA_OFFSET))(this);
		}

		::System::Void GJDMGJCIAMP(::PBGNKMMDBGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + HCKAIOHNGGK_GJDMGJCIAMP_OFFSET))(this, a1);
		}

	};
