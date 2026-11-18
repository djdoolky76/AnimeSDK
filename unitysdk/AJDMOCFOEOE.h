#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/COMMFDFJMHF.h"

class CCGKLCKJFPH;

#define AJDMOCFOEOE_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x164820B0)
#define AJDMOCFOEOE_MKGBAENPFIK_OFFSET UNITYSDK_OFFSET(0x16482150)
#define AJDMOCFOEOE__CTOR_OFFSET UNITYSDK_OFFSET(0x16482140)

inline static constexpr unsigned int AJDMOCFOEOE_TypeDefinitionIndex = 44396;

class AJDMOCFOEOE : public ::COMMFDFJMHF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDMOCFOEOE__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDMOCFOEOE_DEJBOKDOGCD_OFFSET))(this);
	}

	::AJDMOCFOEOE* MKGBAENPFIK(::System::Int32 COMDNFILAIC, ::CCGKLCKJFPH* EBALKHIEICC)
	{
		return ((::AJDMOCFOEOE*(*)(::PVOID, ::System::Int32, ::CCGKLCKJFPH*))((::PBYTE)hIl2Cpp + AJDMOCFOEOE_MKGBAENPFIK_OFFSET))(this, COMDNFILAIC, EBALKHIEICC);
	}
};
