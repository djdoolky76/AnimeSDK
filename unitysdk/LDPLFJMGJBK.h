#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BFONKMKLHNI;
class JGNPOMIAMOI;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LDPLFJMGJBK_CEMKGDDDPDD_OFFSET UNITYSDK_OFFSET(0x1CDE18A0)
#define LDPLFJMGJBK_EKCMLIDPFBE_OFFSET UNITYSDK_OFFSET(0x1CDE19E0)
#define LDPLFJMGJBK_EKJHEJBBKIF_OFFSET UNITYSDK_OFFSET(0x1CDE18B0)
#define LDPLFJMGJBK_MECIEJPPFIG_1_OFFSET UNITYSDK_OFFSET(0x1CDE18D0)
#define LDPLFJMGJBK_PDFKGNAABAD_OFFSET UNITYSDK_OFFSET(0x1CDE18C0)
#define LDPLFJMGJBK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDE1790)

inline static constexpr unsigned int LDPLFJMGJBK_TypeDefinitionIndex = 29055;

class LDPLFJMGJBK : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::BFONKMKLHNI*>* _AJGHOIIMAEN_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::BFONKMKLHNI*>* _GEFOHKLOMDN_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPLFJMGJBK__CTOR_OFFSET))(this);
	}

	::System::Void CEMKGDDDPDD(::System::Collections::Generic::Dictionary_2<::System::Type*, ::BFONKMKLHNI*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::BFONKMKLHNI*>*))((::PBYTE)hIl2Cpp + LDPLFJMGJBK_CEMKGDDDPDD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::BFONKMKLHNI*>* EKJHEJBBKIF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::BFONKMKLHNI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPLFJMGJBK_EKJHEJBBKIF_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Type*, ::BFONKMKLHNI*>* PDFKGNAABAD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Type*, ::BFONKMKLHNI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPLFJMGJBK_PDFKGNAABAD_OFFSET))(this);
	}

	::System::Boolean MECIEJPPFIG_1(::System::Int32 AEMAHLJGGMO, ::JGNPOMIAMOI*& GBELIHABEDH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JGNPOMIAMOI*&))((::PBYTE)hIl2Cpp + LDPLFJMGJBK_MECIEJPPFIG_1_OFFSET))(this, AEMAHLJGGMO, GBELIHABEDH);
	}

	::System::Void EKCMLIDPFBE(::System::Collections::Generic::Dictionary_2<::System::Int32, ::BFONKMKLHNI*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::BFONKMKLHNI*>*))((::PBYTE)hIl2Cpp + LDPLFJMGJBK_EKCMLIDPFBE_OFFSET))(this, EGEGIMGMJHN);
	}
};
