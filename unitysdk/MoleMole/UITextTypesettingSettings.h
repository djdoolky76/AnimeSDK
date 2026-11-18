#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBKLHLCGLMN.h"
#include "unitysdk/MoleMole/TextTypesetMidChar.h"
#include "unitysdk/PFHAJOLBMAD.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MEPJPKKGEBN.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__MIDLETTERTEXTDISPLAY_OFFSET UNITYSDK_OFFSET(0x185D36F0)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__NOTINENDDISPLAY_OFFSET UNITYSDK_OFFSET(0x185D3500)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__NOTINHEADDISPLAY_OFFSET UNITYSDK_OFFSET(0x185D36C0)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__NOTINHEADIFAFTERTEXTDISPLAY_OFFSET UNITYSDK_OFFSET(0x185D36D0)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__SPECIALWORDDISPLAY_OFFSET UNITYSDK_OFFSET(0x185D36E0)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_HIHLFOODCOD_1_OFFSET UNITYSDK_OFFSET(0x185D3F30)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_HIHLFOODCOD_OFFSET UNITYSDK_OFFSET(0x185D38B0)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_HMINGPBFLIL_OFFSET UNITYSDK_OFFSET(0x185D3510)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_JEBMCDDMJJL_OFFSET UNITYSDK_OFFSET(0x185D3BB0)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS_PNCNFLEFADE_OFFSET UNITYSDK_OFFSET(0x185D3710)
#define MOLEMOLE_UITEXTTYPESETTINGSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x185D3700)

namespace MoleMole
{
	inline static constexpr unsigned int UITextTypesettingSettings_TypeDefinitionIndex = 60610;

	class UITextTypesettingSettings : public ::System::Object
	{
	public:
		::System::String* Ellipsis; // 0x10
		::Il2CppArray<::System::String*>* NotInEnd; // 0x18
		::Il2CppArray<::System::String*>* NotInHead; // 0x20
		::Il2CppArray<::System::String*>* NotInHeadIfAfterText; // 0x28
		::Il2CppArray<::System::String*>* SpecialWord; // 0x30
		::Il2CppArray<::System::String*>* MidLetter; // 0x38
		::Il2CppArray<::MoleMole::TextTypesetMidChar>* MidChars; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS__CTOR_OFFSET))(this);
		}

		::System::String* get__NotInEndDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__NOTINENDDISPLAY_OFFSET))(this);
		}

		::System::String* get__NotInHeadDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__NOTINHEADDISPLAY_OFFSET))(this);
		}

		::System::String* get__NotInHeadIfAfterTextDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__NOTINHEADIFAFTERTEXTDISPLAY_OFFSET))(this);
		}

		::System::String* get__SpecialWordDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__SPECIALWORDDISPLAY_OFFSET))(this);
		}

		::System::String* get__MidLetterTextDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_GET__MIDLETTERTEXTDISPLAY_OFFSET))(this);
		}

		static ::System::String* PNCNFLEFADE(::System::String* LCEGOBBEECM)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_PNCNFLEFADE_OFFSET))(LCEGOBBEECM);
		}

		static ::System::Void HIHLFOODCOD(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::GBKLHLCGLMN, ::MEPJPKKGEBN>>* NNJOMEFILCC, ::System::String* MCOHLHMKLIP, ::PFHAJOLBMAD BIONMKKFOEJ)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::GBKLHLCGLMN, ::MEPJPKKGEBN>>*, ::System::String*, ::PFHAJOLBMAD))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_HIHLFOODCOD_OFFSET))(NNJOMEFILCC, MCOHLHMKLIP, BIONMKKFOEJ);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::GBKLHLCGLMN, ::MEPJPKKGEBN>>* JEBMCDDMJJL()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::GBKLHLCGLMN, ::MEPJPKKGEBN>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_JEBMCDDMJJL_OFFSET))(this);
		}

		static ::System::String* HMINGPBFLIL(::Il2CppArray<::System::String*>* FODNKAMHIGN)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_HMINGPBFLIL_OFFSET))(FODNKAMHIGN);
		}

		static ::System::Void HIHLFOODCOD_1(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::GBKLHLCGLMN, ::MEPJPKKGEBN>>* NNJOMEFILCC, ::System::String* MCOHLHMKLIP, ::GBKLHLCGLMN OMMEALOOOOD)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::GBKLHLCGLMN, ::MEPJPKKGEBN>>*, ::System::String*, ::GBKLHLCGLMN))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGSETTINGS_HIHLFOODCOD_1_OFFSET))(NNJOMEFILCC, MCOHLHMKLIP, OMMEALOOOOD);
		}
	};
}
