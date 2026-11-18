#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OLEFJMDPONK.h"
#include "unitysdk/EGLBLKHFBPC.h"

class BAEOKKAAAPD;
class KGBFLHNJHHN;

#define BOFMBDEGBFD_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1D977760)
#define BOFMBDEGBFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D977750)

inline static constexpr unsigned int BOFMBDEGBFD_TypeDefinitionIndex = 93486;

class BOFMBDEGBFD : public ::OLEFJMDPONK
{
public:
	::System::Void _ctor(::EGLBLKHFBPC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EGLBLKHFBPC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BOFMBDEGBFD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::BAEOKKAAAPD* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::BAEOKKAAAPD*))((::PBYTE)hIl2Cpp + BOFMBDEGBFD_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
