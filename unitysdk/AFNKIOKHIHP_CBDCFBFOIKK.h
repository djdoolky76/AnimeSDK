#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

class AFNKIOKHIHP_FIFOEIDKNDP;
class FGICKENFLJC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFNKIOKHIHP_CBDCFBFOIKK_ENIBJMMCAMJ_OFFSET UNITYSDK_OFFSET(0x1434FAC0)
#define AFNKIOKHIHP_CBDCFBFOIKK_GHOCALKLJCD_OFFSET UNITYSDK_OFFSET(0x1434FFB0)
#define AFNKIOKHIHP_CBDCFBFOIKK__CTOR_OFFSET UNITYSDK_OFFSET(0x1434FAB0)

inline static constexpr unsigned int AFNKIOKHIHP_CBDCFBFOIKK_TypeDefinitionIndex = 79096;

class AFNKIOKHIHP_CBDCFBFOIKK : public ::System::Object
{
public:
	::HOCDHMEPPEG MMCKPLBLCIL; // 0x10
	::HOCDHMEPPEG GPELAKKMLBG; // 0x40
	::HOCDHMEPPEG ABMKEFPKPMD; // 0x70
	::AFNKIOKHIHP_FIFOEIDKNDP* KGFKHBMEKBL; // 0xA0
	::System::Int32 BCIDENGCMOI; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFNKIOKHIHP_CBDCFBFOIKK__CTOR_OFFSET))(this);
	}

	::System::Void ENIBJMMCAMJ(::System::Boolean CAAFEGLOALC, ::System::Collections::Generic::List_1<::FGICKENFLJC*>* GHHNDIOIGAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::FGICKENFLJC*>*))((::PBYTE)hIl2Cpp + AFNKIOKHIHP_CBDCFBFOIKK_ENIBJMMCAMJ_OFFSET))(this, CAAFEGLOALC, GHHNDIOIGAA);
	}

	::System::Void GHOCALKLJCD(::System::Boolean EBFCACIEKBC, ::System::Collections::Generic::List_1<::FGICKENFLJC*>* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::FGICKENFLJC*>*))((::PBYTE)hIl2Cpp + AFNKIOKHIHP_CBDCFBFOIKK_GHOCALKLJCD_OFFSET))(this, EBFCACIEKBC, NKMKJFCBBCK);
	}
};
