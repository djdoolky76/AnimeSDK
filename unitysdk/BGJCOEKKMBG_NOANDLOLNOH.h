#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JMHGCMPIPFA;
namespace System { class Action; }

#define BGJCOEKKMBG_NOANDLOLNOH_IFPBFFKKEJI_OFFSET UNITYSDK_OFFSET(0x1424EFD0)
#define BGJCOEKKMBG_NOANDLOLNOH__CTOR_OFFSET UNITYSDK_OFFSET(0x1424EFC0)

inline static constexpr unsigned int BGJCOEKKMBG_NOANDLOLNOH_TypeDefinitionIndex = 46531;

class BGJCOEKKMBG_NOANDLOLNOH : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJCOEKKMBG_NOANDLOLNOH__CTOR_OFFSET))(this);
	}

	::System::Void IFPBFFKKEJI(::JMHGCMPIPFA* KEBKJIONIDG)
	{
		return ((::System::Void(*)(::PVOID, ::JMHGCMPIPFA*))((::PBYTE)hIl2Cpp + BGJCOEKKMBG_NOANDLOLNOH_IFPBFFKKEJI_OFFSET))(this, KEBKJIONIDG);
	}
};
