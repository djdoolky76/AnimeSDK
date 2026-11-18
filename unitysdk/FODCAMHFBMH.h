#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

class IOOIHHOJOPI;
namespace MoleMole { class UIUrbanMapTrackLineWidgetContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T> class DBMAHDDGMHM_1;

#define FODCAMHFBMH_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x11D8B240)
#define FODCAMHFBMH_KDLADFIENBL_OFFSET UNITYSDK_OFFSET(0x11D8B620)
#define FODCAMHFBMH_KJLBMJKKPJI_OFFSET UNITYSDK_OFFSET(0x11D8B6B0)
#define FODCAMHFBMH_MEABAAJFJDI_OFFSET UNITYSDK_OFFSET(0x11D8B410)
#define FODCAMHFBMH__CTOR_OFFSET UNITYSDK_OFFSET(0x11D8B3C0)

inline static constexpr unsigned int FODCAMHFBMH_TypeDefinitionIndex = 82302;

class FODCAMHFBMH : public ::PBJOCICFNGK
{
public:
	::DBMAHDDGMHM_1<::MoleMole::UIUrbanMapTrackLineWidgetContext*>* DAAAEJDBNFI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FODCAMHFBMH__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + FODCAMHFBMH_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* MEABAAJFJDI()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FODCAMHFBMH_MEABAAJFJDI_OFFSET))(this);
	}

	::System::Void KDLADFIENBL(::MoleMole::UIUrbanMapTrackLineWidgetContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapTrackLineWidgetContext*))((::PBYTE)hIl2Cpp + FODCAMHFBMH_KDLADFIENBL_OFFSET))(this, AAOCANGHBDG);
	}

	::UnityEngine::Color KJLBMJKKPJI()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + FODCAMHFBMH_KJLBMJKKPJI_OFFSET))(this);
	}
};
