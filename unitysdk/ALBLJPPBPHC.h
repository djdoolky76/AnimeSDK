#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLLLACFEBJF.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"

namespace MoleMole { class UICinemaPlayPageController; }
namespace System { class String; }

#define ALBLJPPBPHC_CLFGMEKEAEH_OFFSET UNITYSDK_OFFSET(0x135F5410)
#define ALBLJPPBPHC_GEAEMFPMGFM_OFFSET UNITYSDK_OFFSET(0x135F5370)
#define ALBLJPPBPHC_GMAMEDEODHA_OFFSET UNITYSDK_OFFSET(0x135F5A70)
#define ALBLJPPBPHC_HFFBHOJNBHO_OFFSET UNITYSDK_OFFSET(0x135F55F0)
#define ALBLJPPBPHC_HIBHJFBFBPA_OFFSET UNITYSDK_OFFSET(0x135F5C70)
#define ALBLJPPBPHC_IBEDFPDGIMG_OFFSET UNITYSDK_OFFSET(0x135F5940)
#define ALBLJPPBPHC_ICHDBJEBLEJ_OFFSET UNITYSDK_OFFSET(0x135F57F0)
#define ALBLJPPBPHC__CTOR_OFFSET UNITYSDK_OFFSET(0x135F5360)

inline static constexpr unsigned int ALBLJPPBPHC_TypeDefinitionIndex = 45838;

class ALBLJPPBPHC : public ::System::Object
{
public:
	::System::String* HKBLIAHMFKG; // 0x10
	::MoleMole::EntityHandle HPADNAEINPK; // 0x18
	::MoleMole::UICinemaPlayPageController* JGFKBBFIPJF; // 0x28
	::System::Int32 JFFOMPKGBPB; // 0x30
	::System::Int32 EMIHPNKBMBF; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBLJPPBPHC__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask GEAEMFPMGFM(::System::Int32 NCFIKONEBGH)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ALBLJPPBPHC_GEAEMFPMGFM_OFFSET))(this, NCFIKONEBGH);
	}

	::System::Void CLFGMEKEAEH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBLJPPBPHC_CLFGMEKEAEH_OFFSET))(this);
	}

	::System::Void HFFBHOJNBHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBLJPPBPHC_HFFBHOJNBHO_OFFSET))(this);
	}

	::System::Void ICHDBJEBLEJ(::DLLLACFEBJF JPJBIBPBODE, ::System::String* KPIAFDELPJL)
	{
		return ((::System::Void(*)(::PVOID, ::DLLLACFEBJF, ::System::String*))((::PBYTE)hIl2Cpp + ALBLJPPBPHC_ICHDBJEBLEJ_OFFSET))(this, JPJBIBPBODE, KPIAFDELPJL);
	}

	::System::Void IBEDFPDGIMG(::DLLLACFEBJF JPJBIBPBODE)
	{
		return ((::System::Void(*)(::PVOID, ::DLLLACFEBJF))((::PBYTE)hIl2Cpp + ALBLJPPBPHC_IBEDFPDGIMG_OFFSET))(this, JPJBIBPBODE);
	}

	::System::Void GMAMEDEODHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBLJPPBPHC_GMAMEDEODHA_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid HIBHJFBFBPA(::System::String* BJIELNAKFJG)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ALBLJPPBPHC_HIBHJFBFBPA_OFFSET))(this, BJIELNAKFJG);
	}
};
