#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKPLIMLCMIL.h"
#include "unitysdk/HCKAIOHNGGK_PropertyBits.h"
#include "unitysdk/RPG/GameCore/CakeRacePickupItemType.h"
#include "unitysdk/System/Object.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HCKAIOHNGGK_AEINCGNABAD_OFFSET UNITYSDK_OFFSET(0x1AA73850)
#define HCKAIOHNGGK_BLBJJDLFCEA_OFFSET UNITYSDK_OFFSET(0x1AA73950)
#define HCKAIOHNGGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA73B40)
#define HCKAIOHNGGK_DJCCELKNKAJ_OFFSET UNITYSDK_OFFSET(0x1AA738D0)
#define HCKAIOHNGGK_DMEDLCMMIJA_OFFSET UNITYSDK_OFFSET(0x1AA736E0)
#define HCKAIOHNGGK_ELJEADGDOPA_OFFSET UNITYSDK_OFFSET(0x1AA73670)
#define HCKAIOHNGGK_GJDMGJCIAMP_OFFSET UNITYSDK_OFFSET(0x1AA739D0)
#define HCKAIOHNGGK_LAMFGGDMMOO_OFFSET UNITYSDK_OFFSET(0x1AA737D0)
#define HCKAIOHNGGK_MFCFABPGFGB_OFFSET UNITYSDK_OFFSET(0x1AA73730)
#define HCKAIOHNGGK_MKGDCFBIKKO_OFFSET UNITYSDK_OFFSET(0x1AA73780)

inline static constexpr unsigned int HCKAIOHNGGK_TypeDefinitionIndex = 38150;

	class HCKAIOHNGGK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* LGDKNINGONG; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* HGHKFLKGPHA; // 0x18
		::IFBFJDCECML* OHLNEMLLFAI; // 0x20
		::System::Int32 BIGKKOGKMLK; // 0x28
		::System::Int32 EBJKJAGJGPK; // 0x2C
		::System::Int32 KPLMHMGHNOF; // 0x30
		::System::UInt16 FBEBNLOPIBL; // 0x34
		::System::Byte _padding0[0x2];
		::CKPLIMLCMIL IHDNMJNKEME; // 0x38
		::System::Int32 HBAMPJPOOLM; // 0x40
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
