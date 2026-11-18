#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKOPEHLPKNG.h"
#include "unitysdk/System/Object.h"

class MAAJBJLLHMP;

#define ADJNAJHAOHE_ICJEMGIBPIJ_EJJCHFHJDHD_OFFSET UNITYSDK_OFFSET(0x135D6AA0)
#define ADJNAJHAOHE_ICJEMGIBPIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x135D6A90)

inline static constexpr unsigned int ADJNAJHAOHE_ICJEMGIBPIJ_TypeDefinitionIndex = 41399;

class ADJNAJHAOHE_ICJEMGIBPIJ : public ::System::Object
{
public:
	::IKOPEHLPKNG BBKHCPPKCNF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJNAJHAOHE_ICJEMGIBPIJ__CTOR_OFFSET))(this);
	}

	::System::Boolean EJJCHFHJDHD(::MAAJBJLLHMP* CBLGCIFLMKL)
	{
		return ((::System::Boolean(*)(::PVOID, ::MAAJBJLLHMP*))((::PBYTE)hIl2Cpp + ADJNAJHAOHE_ICJEMGIBPIJ_EJJCHFHJDHD_OFFSET))(this, CBLGCIFLMKL);
	}
};
