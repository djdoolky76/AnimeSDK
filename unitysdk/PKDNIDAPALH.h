#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PKDNIDAPALH__CTOR_OFFSET UNITYSDK_OFFSET(0x15573000)

inline static constexpr unsigned int PKDNIDAPALH_TypeDefinitionIndex = 67628;

class PKDNIDAPALH : public ::System::Object
{
public:
	::System::Int32 LPPIKLAOLID; // 0x10
	::System::Int32 OBFKLMNDCNH; // 0x14

	::System::Void _ctor(::System::Int32 GFMKIJKBFPC, ::System::Int32 LMPLGAMOFOC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PKDNIDAPALH__CTOR_OFFSET))(this, GFMKIJKBFPC, LMPLGAMOFOC);
	}
};
