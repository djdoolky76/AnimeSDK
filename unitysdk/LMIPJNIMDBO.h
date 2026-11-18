#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GFFIDCFOEKL_1.h"
#include "unitysdk/NIKMEJNINMI.h"

class BMLIBADPBGA;
class CPENOMAIIOF;

#define LMIPJNIMDBO_GGHBINKBBID_OFFSET UNITYSDK_OFFSET(0x1E5E7890)
#define LMIPJNIMDBO_KNOCAPIKBJH_OFFSET UNITYSDK_OFFSET(0x1E5F7500)

inline static constexpr unsigned int LMIPJNIMDBO_TypeDefinitionIndex = 34060;

class LMIPJNIMDBO : public ::System::Object
{
public:
	::CPENOMAIIOF* PJKJHBPIHCD; // 0x10
	::BMLIBADPBGA* EGENKJPKJEI; // 0x18
	::System::Int64 CDNFNBDEJFK; // 0x20
	::System::Int64 KCAOHLOCAHP; // 0x28
	::System::Int32 BFCHGDENELO; // 0x30
	::System::Int32 MIDPJOAKJJE; // 0x34
	::System::Int64 LAMKEICNPDJ; // 0x38
	::System::Int64 GGOPFLNDJGB; // 0x40

	::NIKMEJNINMI KNOCAPIKBJH(::System::Int64 OHOGDOMNHNK)
	{
		return ((::NIKMEJNINMI(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + LMIPJNIMDBO_KNOCAPIKBJH_OFFSET))(this, OHOGDOMNHNK);
	}

	::GFFIDCFOEKL_1<::BMLIBADPBGA*> GGHBINKBBID(::System::Int64 OHOGDOMNHNK, ::System::Int32 BEPMDFENBMH)
	{
		return ((::GFFIDCFOEKL_1<::BMLIBADPBGA*>(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + LMIPJNIMDBO_GGHBINKBBID_OFFSET))(this, OHOGDOMNHNK, BEPMDFENBMH);
	}
};
