#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LOEONJJICDK.h"
class AIMNKMEFBKE;
class GGDIMKDOIGA;

#define AHPFGCEGBEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C58B180)
#define AHPFGCEGBEA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C58B190)

	class AHPFGCEGBEA : public ::LOEONJJICDK
	{
	public:
		::GGDIMKDOIGA* CCPHCIBGFJB; // 0x18
		::AIMNKMEFBKE* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::GGDIMKDOIGA* a1, ::AIMNKMEFBKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GGDIMKDOIGA*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + AHPFGCEGBEA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPFGCEGBEA_INITIALIZE_OFFSET))(this);
		}

	};
