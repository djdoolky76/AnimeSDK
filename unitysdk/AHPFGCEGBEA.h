#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LOEONJJICDK.h"
class AIMNKMEFBKE;
class GGDIMKDOIGA;

#define AHPFGCEGBEA_CTOR_OFFSET UNITYSDK_OFFSET(0x16FF8F40)
#define AHPFGCEGBEA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x16FF8F50)

inline static constexpr unsigned int AHPFGCEGBEA_TypeDefinitionIndex = 37451;

	class AHPFGCEGBEA : public ::LOEONJJICDK
	{
	public:
		::AIMNKMEFBKE* EEFMDEHLLFI; // 0x18
		::GGDIMKDOIGA* CCPHCIBGFJB; // 0x20
		::System::Void _ctor(::GGDIMKDOIGA* a1, ::AIMNKMEFBKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GGDIMKDOIGA*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + AHPFGCEGBEA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPFGCEGBEA_INITIALIZE_OFFSET))(this);
		}

	};
