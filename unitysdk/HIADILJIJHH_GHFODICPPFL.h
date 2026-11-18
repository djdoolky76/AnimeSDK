#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EAOGLMKGMGE.h"

class DFEONFMKCKE;
class FCANCDJBJNG;
class GOLNGLCOEEA;
namespace System { class Action; }

#define HIADILJIJHH_GHFODICPPFL_NKPIMBABNBC_OFFSET UNITYSDK_OFFSET(0x17E4CEA0)
#define HIADILJIJHH_GHFODICPPFL__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4CE90)

inline static constexpr unsigned int HIADILJIJHH_GHFODICPPFL_TypeDefinitionIndex = 61814;

class HIADILJIJHH_GHFODICPPFL : public ::System::Object
{
public:
	::FCANCDJBJNG* AIBJGMNPFKB; // 0x10
	::DFEONFMKCKE* LDHANCOIDNB; // 0x18
	::DFEONFMKCKE* AOLPGMNHIAF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIADILJIJHH_GHFODICPPFL__CTOR_OFFSET))(this);
	}

	::System::Void NKPIMBABNBC(::EAOGLMKGMGE KDLFPIFEKCL, ::GOLNGLCOEEA* KNMOLPINLGA, ::System::Action* ODLKCMLBIGL, ::System::Action* DLCEPMJAGLD)
	{
		return ((::System::Void(*)(::PVOID, ::EAOGLMKGMGE, ::GOLNGLCOEEA*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + HIADILJIJHH_GHFODICPPFL_NKPIMBABNBC_OFFSET))(this, KDLFPIFEKCL, KNMOLPINLGA, ODLKCMLBIGL, DLCEPMJAGLD);
	}
};
