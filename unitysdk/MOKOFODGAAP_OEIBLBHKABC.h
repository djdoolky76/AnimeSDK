#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

class FGICKENFLJC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOKOFODGAAP_OEIBLBHKABC_ENIBJMMCAMJ_OFFSET UNITYSDK_OFFSET(0x1303DDE0)
#define MOKOFODGAAP_OEIBLBHKABC_GHOCALKLJCD_OFFSET UNITYSDK_OFFSET(0x1303DFE0)
#define MOKOFODGAAP_OEIBLBHKABC__CTOR_OFFSET UNITYSDK_OFFSET(0x1303DDD0)

inline static constexpr unsigned int MOKOFODGAAP_OEIBLBHKABC_TypeDefinitionIndex = 41427;

class MOKOFODGAAP_OEIBLBHKABC : public ::System::Object
{
public:
	::HOCDHMEPPEG ABMKEFPKPMD; // 0x10
	::HOCDHMEPPEG MMCKPLBLCIL; // 0x40
	::HOCDHMEPPEG GPELAKKMLBG; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKOFODGAAP_OEIBLBHKABC__CTOR_OFFSET))(this);
	}

	::System::Void ENIBJMMCAMJ(::System::Boolean CAAFEGLOALC, ::System::Collections::Generic::List_1<::FGICKENFLJC*>* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::FGICKENFLJC*>*))((::PBYTE)hIl2Cpp + MOKOFODGAAP_OEIBLBHKABC_ENIBJMMCAMJ_OFFSET))(this, CAAFEGLOALC, PIIPCLCCOIG);
	}

	::System::Void GHOCALKLJCD(::System::Boolean EBFCACIEKBC, ::System::Collections::Generic::List_1<::FGICKENFLJC*>* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::FGICKENFLJC*>*))((::PBYTE)hIl2Cpp + MOKOFODGAAP_OEIBLBHKABC_GHOCALKLJCD_OFFSET))(this, EBFCACIEKBC, PIIPCLCCOIG);
	}
};
