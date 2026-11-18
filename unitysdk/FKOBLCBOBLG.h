#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNPPOMNKHAG.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FKOBLCBOBLG_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x786FE0)

inline static constexpr unsigned int FKOBLCBOBLG_TypeDefinitionIndex = 59227;

struct alignas(4) FKOBLCBOBLG
{
	::KNPPOMNKHAG GEGBDDBOILK; // 0x10
	::KNPPOMNKHAG OGLLBDLMBOO; // 0x30

	::System::Single OKJCHFGIKBH(::UnityEngine::Vector3 NAFPOHLLAID, ::System::Single PMNLNNGEIFM, ::System::Single FBFFJJNMEPH, ::System::Single DHONHJDJFOD, ::System::Single BBNHKMBJBFF)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FKOBLCBOBLG_OKJCHFGIKBH_OFFSET))(this, NAFPOHLLAID, PMNLNNGEIFM, FBFFJJNMEPH, DHONHJDJFOD, BBNHKMBJBFF);
	}
};
