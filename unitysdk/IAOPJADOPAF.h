#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IODPOEFKGOI.h"
#include "unitysdk/KFOAKMECMME.h"

template <typename T> class NBJFMBINLDO_1;

#define IAOPJADOPAF_CHMBBMIJFNN_OFFSET UNITYSDK_OFFSET(0xEBA7BC0)
#define IAOPJADOPAF_HNIBBHKAOOF_OFFSET UNITYSDK_OFFSET(0xEBA7B80)
#define IAOPJADOPAF__CTOR_OFFSET UNITYSDK_OFFSET(0xEBA82F0)

inline static constexpr unsigned int IAOPJADOPAF_TypeDefinitionIndex = 86704;

class IAOPJADOPAF : public ::System::Object
{
public:
	// static const ::System::Int32 AFMDBKOICOL = 0x3D0; // 0x0
	// static const ::System::Int32 HPLDFBOIMCJ = 0x40; // 0x0
	// static const ::System::Int32 PGCLJDFGKDD = 0x80; // 0x0
	// static const ::System::Int32 LLPIEMAKFJL = 0xA0; // 0x0
	// static const ::System::Int32 GEGAOKJFJPO = 0x10; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOPJADOPAF__CTOR_OFFSET))(this);
	}

	::KFOAKMECMME HNIBBHKAOOF()
	{
		return ((::KFOAKMECMME(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOPJADOPAF_HNIBBHKAOOF_OFFSET))(this);
	}

	::System::Void CHMBBMIJFNN(::NBJFMBINLDO_1<::IODPOEFKGOI>* GENNIFDPOAM)
	{
		return ((::System::Void(*)(::PVOID, ::NBJFMBINLDO_1<::IODPOEFKGOI>*))((::PBYTE)hIl2Cpp + IAOPJADOPAF_CHMBBMIJFNN_OFFSET))(this, GENNIFDPOAM);
	}
};
