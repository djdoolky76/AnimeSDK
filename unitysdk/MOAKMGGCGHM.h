#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ANAPNFPOMNG;

#define MOAKMGGCGHM_MHGIFJGGPGM_OFFSET UNITYSDK_OFFSET(0x1302CD70)
#define MOAKMGGCGHM_NLCHKEPJAJE_OFFSET UNITYSDK_OFFSET(0x1302CC80)
#define MOAKMGGCGHM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1302CD30)
#define MOAKMGGCGHM__CTOR_OFFSET UNITYSDK_OFFSET(0x1302CD20)

inline static constexpr unsigned int MOAKMGGCGHM_TypeDefinitionIndex = 89434;

class MOAKMGGCGHM : public ::System::Object
{
public:
	static ::MOAKMGGCGHM** StaticGet_NJLLMPCDOEB()
	{
		return (::MOAKMGGCGHM**)Il2CppClass::FromTypeDefinitionIndex(MOAKMGGCGHM_TypeDefinitionIndex)->GetStaticField(0x50920);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOAKMGGCGHM__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOAKMGGCGHM__CCTOR_OFFSET))();
	}

	::ANAPNFPOMNG* NLCHKEPJAJE(::System::Int32 OBNIAHNMHPF)
	{
		return ((::ANAPNFPOMNG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOAKMGGCGHM_NLCHKEPJAJE_OFFSET))(this, OBNIAHNMHPF);
	}

	static ::System::Boolean MHGIFJGGPGM(::System::Int32 BBMDGPCOFOF)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOAKMGGCGHM_MHGIFJGGPGM_OFFSET))(BBMDGPCOFOF);
	}
};
