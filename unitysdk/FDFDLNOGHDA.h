#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBKFEMNJBH.h"

#define FDFDLNOGHDA_CEGBADBBCPL_OFFSET UNITYSDK_OFFSET(0x191B0660)
#define FDFDLNOGHDA_EEBBIDPHKJD_OFFSET UNITYSDK_OFFSET(0x191B0600)
#define FDFDLNOGHDA__CTOR_OFFSET UNITYSDK_OFFSET(0x191B0650)

inline static constexpr unsigned int FDFDLNOGHDA_TypeDefinitionIndex = 57865;

class FDFDLNOGHDA : public ::FOBKFEMNJBH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFDLNOGHDA__CTOR_OFFSET))(this);
	}

	::System::Boolean EEBBIDPHKJD(::System::Boolean KMKFEHCGGCB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FDFDLNOGHDA_EEBBIDPHKJD_OFFSET))(this, KMKFEHCGGCB);
	}

	::System::Boolean CEGBADBBCPL(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FDFDLNOGHDA_CEGBADBBCPL_OFFSET))(this, MIALFKCCCPI);
	}
};
