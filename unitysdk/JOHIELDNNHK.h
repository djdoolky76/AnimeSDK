#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCKMBGAKABL.h"

class BCCMPEIHJMN_CAICKFLHNGI;

#define JOHIELDNNHK_LKCGMHHGHEB_OFFSET UNITYSDK_OFFSET(0x15B75360)
#define JOHIELDNNHK_LPOJJCLLBGD_OFFSET UNITYSDK_OFFSET(0x15B751F0)
#define JOHIELDNNHK__CTOR_OFFSET UNITYSDK_OFFSET(0x15B751A0)

inline static constexpr unsigned int JOHIELDNNHK_TypeDefinitionIndex = 65690;

class JOHIELDNNHK : public ::HCKMBGAKABL
{
public:
	::System::Void _ctor(::BCCMPEIHJMN_CAICKFLHNGI* HHEOJLBHEGI)
	{
		return ((::System::Void(*)(::PVOID, ::BCCMPEIHJMN_CAICKFLHNGI*))((::PBYTE)hIl2Cpp + JOHIELDNNHK__CTOR_OFFSET))(this, HHEOJLBHEGI);
	}

	::System::Void LPOJJCLLBGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOHIELDNNHK_LPOJJCLLBGD_OFFSET))(this);
	}

	::System::Void LKCGMHHGHEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOHIELDNNHK_LKCGMHHGHEB_OFFSET))(this);
	}
};
