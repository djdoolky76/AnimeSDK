#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"
#include "unitysdk/JGLIFHIAIEH.h"

#define COOEBCMNOPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1E57C6E0)

inline static constexpr unsigned int COOEBCMNOPJ_TypeDefinitionIndex = 94395;

class COOEBCMNOPJ : public ::BIHPBFHEOOA
{
public:
	::JGLIFHIAIEH KFMCJEAFEMJ; // 0x10
	::System::Int32 DGKKBBMHAEF; // 0x18
	::System::Int32 ALFOGIJLBBN; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COOEBCMNOPJ__CTOR_OFFSET))(this);
	}
};
