#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KFBAENHGMFB_PFNEKHCLCHG_ENBBNHEEBPI_OFFSET UNITYSDK_OFFSET(0x157E62D0)
#define KFBAENHGMFB_PFNEKHCLCHG__CTOR_OFFSET UNITYSDK_OFFSET(0x157E62C0)

inline static constexpr unsigned int KFBAENHGMFB_PFNEKHCLCHG_TypeDefinitionIndex = 78590;

class KFBAENHGMFB_PFNEKHCLCHG : public ::System::Object
{
public:
	::System::Action* KJEGEDODKCE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBAENHGMFB_PFNEKHCLCHG__CTOR_OFFSET))(this);
	}

	::System::Void ENBBNHEEBPI(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_PFNEKHCLCHG_ENBBNHEEBPI_OFFSET))(this, GLAOEHCGCFO);
	}
};
