#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMGNMOCJCGP.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class DBEEELCGJOA;

#define GKMBMEAJKLG_ELDOONDFGDG_OFFSET UNITYSDK_OFFSET(0x1E2EB6F0)
#define GKMBMEAJKLG_GOPBPACGIAM_OFFSET UNITYSDK_OFFSET(0x1E2EB630)
#define GKMBMEAJKLG_IBKFMPFKKOM_OFFSET UNITYSDK_OFFSET(0x1E2EB580)

inline static constexpr unsigned int GKMBMEAJKLG_TypeDefinitionIndex = 93428;

class GKMBMEAJKLG : public ::System::Object
{
public:
	static ::System::Void IBKFMPFKKOM(::DBEEELCGJOA* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::DBEEELCGJOA*))((::PBYTE)hIl2Cpp + GKMBMEAJKLG_IBKFMPFKKOM_OFFSET))(KECKGDFIALJ);
	}

	static ::System::ValueTuple_2<::System::Int32, ::System::Int32> GOPBPACGIAM(::System::Int32 PKGKMMLAFNH, ::System::Int32 ECDMEMELHJP, ::System::Int32 FOEFDNMNNNB, ::System::Int32 IMIFPLMKOLA)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GKMBMEAJKLG_GOPBPACGIAM_OFFSET))(PKGKMMLAFNH, ECDMEMELHJP, FOEFDNMNNNB, IMIFPLMKOLA);
	}

	static ::System::Void ELDOONDFGDG(::DBEEELCGJOA* KECKGDFIALJ, ::BMGNMOCJCGP FKMHMOELCIO)
	{
		return ((::System::Void(*)(::DBEEELCGJOA*, ::BMGNMOCJCGP))((::PBYTE)hIl2Cpp + GKMBMEAJKLG_ELDOONDFGDG_OFFSET))(KECKGDFIALJ, FKMHMOELCIO);
	}
};
