#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/CJGGMLHPLOG.h"
#include "unitysdk/LHMMBAGOCLO.h"

#define OODFCNBJKMC_MHMOIBOIPAK_OFFSET UNITYSDK_OFFSET(0x1DA16630)
#define OODFCNBJKMC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DA16610)
#define OODFCNBJKMC__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA165F0)

inline static constexpr unsigned int OODFCNBJKMC_TypeDefinitionIndex = 93908;

class OODFCNBJKMC
{
public:
	::JGLIFHIAIEH MNPCIGNOEML; // 0x10
	::System::Boolean JLAEMHBBCOF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OODFCNBJKMC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Boolean JJANHNNLOLO, ::JGLIFHIAIEH KMPMJGGHHOI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::JGLIFHIAIEH))((::PBYTE)hIl2Cpp + OODFCNBJKMC__CTOR_1_OFFSET))(this, JJANHNNLOLO, KMPMJGGHHOI);
	}

	::CJGGMLHPLOG MHMOIBOIPAK(::LHMMBAGOCLO& HBMGHPEPBNC)
	{
		return ((::CJGGMLHPLOG(*)(::PVOID, ::LHMMBAGOCLO&))((::PBYTE)hIl2Cpp + OODFCNBJKMC_MHMOIBOIPAK_OFFSET))(this, HBMGHPEPBNC);
	}
};
