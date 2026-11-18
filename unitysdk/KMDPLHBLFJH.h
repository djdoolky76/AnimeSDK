#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BCOFOFCAODO;

#define KMDPLHBLFJH_HJIENHCLHGM_OFFSET UNITYSDK_OFFSET(0x1516A450)
#define KMDPLHBLFJH__CTOR_OFFSET UNITYSDK_OFFSET(0x1516A440)

inline static constexpr unsigned int KMDPLHBLFJH_TypeDefinitionIndex = 66763;

class KMDPLHBLFJH : public ::System::Object
{
public:
	// static const ::System::Int32 BDDDNMAPEAB = 0x8; // 0x0
	::BCOFOFCAODO* FAIPFCNDLDE; // 0x10

	::System::Void _ctor(::BCOFOFCAODO* FAIPFCNDLDE)
	{
		return ((::System::Void(*)(::PVOID, ::BCOFOFCAODO*))((::PBYTE)hIl2Cpp + KMDPLHBLFJH__CTOR_OFFSET))(this, FAIPFCNDLDE);
	}

	::System::Void HJIENHCLHGM(::System::Int32 HKHHHJHCGKL, ::System::Int32 GHIBJCNHPAF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KMDPLHBLFJH_HJIENHCLHGM_OFFSET))(this, HKHHHJHCGKL, GHIBJCNHPAF);
	}
};
