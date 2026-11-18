#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OHKIJGGINDA_FMCBKPDAAJH_PGDAEEMMKNB_OFFSET UNITYSDK_OFFSET(0x10072720)
#define OHKIJGGINDA_FMCBKPDAAJH__CTOR_OFFSET UNITYSDK_OFFSET(0x10072710)

inline static constexpr unsigned int OHKIJGGINDA_FMCBKPDAAJH_TypeDefinitionIndex = 64300;

class OHKIJGGINDA_FMCBKPDAAJH : public ::System::Object
{
public:
	::System::Action* FKHOJLMBILE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKIJGGINDA_FMCBKPDAAJH__CTOR_OFFSET))(this);
	}

	::System::Void PGDAEEMMKNB(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OHKIJGGINDA_FMCBKPDAAJH_PGDAEEMMKNB_OFFSET))(this, PIIPCLCCOIG);
	}
};
