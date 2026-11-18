#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

class BODKHFKIMFE;

#define LEBCJIOPAIK_EGPICFNOIKL_OFFSET UNITYSDK_OFFSET(0x184E38B0)
#define LEBCJIOPAIK_NMLFKHOPMAE_OFFSET UNITYSDK_OFFSET(0x184E3880)
#define LEBCJIOPAIK_NNMIMDKLPDO_OFFSET UNITYSDK_OFFSET(0x184E38A0)
#define LEBCJIOPAIK_PDAOANBJNCF_OFFSET UNITYSDK_OFFSET(0x184E3890)
#define LEBCJIOPAIK__CTOR_OFFSET UNITYSDK_OFFSET(0x184E3870)

inline static constexpr unsigned int LEBCJIOPAIK_TypeDefinitionIndex = 60616;

class LEBCJIOPAIK : public ::System::Object
{
public:
	::BODKHFKIMFE* EPNKBDHHHKB; // 0x10
	::System::DateTime _AHNAILMEANE_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBCJIOPAIK__CTOR_OFFSET))(this);
	}

	::System::DateTime NMLFKHOPMAE()
	{
		return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBCJIOPAIK_NMLFKHOPMAE_OFFSET))(this);
	}

	::BODKHFKIMFE* PDAOANBJNCF()
	{
		return ((::BODKHFKIMFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBCJIOPAIK_PDAOANBJNCF_OFFSET))(this);
	}

	::System::Void NNMIMDKLPDO(::System::DateTime EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + LEBCJIOPAIK_NNMIMDKLPDO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EGPICFNOIKL(::BODKHFKIMFE* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::BODKHFKIMFE*))((::PBYTE)hIl2Cpp + LEBCJIOPAIK_EGPICFNOIKL_OFFSET))(this, EGEGIMGMJHN);
	}
};
