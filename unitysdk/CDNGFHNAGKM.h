#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHAMECMLDPN.h"

class AIBCFMANMBA;
namespace System { class String; }
template <typename T> class DFDEIDBBGHG_1;

#define CDNGFHNAGKM_AGBGILDOEID_OFFSET UNITYSDK_OFFSET(0x1FF65030)
#define CDNGFHNAGKM_GIGBNBJPPGM_1_OFFSET UNITYSDK_OFFSET(0x1FF65240)
#define CDNGFHNAGKM_PHEHPMKLOLH_OFFSET UNITYSDK_OFFSET(0x1FF651D0)
#define CDNGFHNAGKM__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF65020)

inline static constexpr unsigned int CDNGFHNAGKM_TypeDefinitionIndex = 28910;

class CDNGFHNAGKM : public ::IHAMECMLDPN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNGFHNAGKM__CTOR_OFFSET))(this);
	}

	::System::Void AGBGILDOEID(::DFDEIDBBGHG_1<::AIBCFMANMBA*>* LPENEOFBNIK)
	{
		return ((::System::Void(*)(::PVOID, ::DFDEIDBBGHG_1<::AIBCFMANMBA*>*))((::PBYTE)hIl2Cpp + CDNGFHNAGKM_AGBGILDOEID_OFFSET))(this, LPENEOFBNIK);
	}

	::System::Void PHEHPMKLOLH(::CDNGFHNAGKM* LMMPMNFPPEN)
	{
		return ((::System::Void(*)(::PVOID, ::CDNGFHNAGKM*))((::PBYTE)hIl2Cpp + CDNGFHNAGKM_PHEHPMKLOLH_OFFSET))(this, LMMPMNFPPEN);
	}

	::System::Void GIGBNBJPPGM_1(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CDNGFHNAGKM_GIGBNBJPPGM_1_OFFSET))(this, HIAIKHDFCLN);
	}
};
