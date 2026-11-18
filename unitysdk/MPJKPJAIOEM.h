#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKLPCMMHKEO.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class Object; }

#define MPJKPJAIOEM_DALANODJLCE_OFFSET UNITYSDK_OFFSET(0x177DA4C0)
#define MPJKPJAIOEM__CTOR_OFFSET UNITYSDK_OFFSET(0x177DA4B0)

inline static constexpr unsigned int MPJKPJAIOEM_TypeDefinitionIndex = 61777;

class MPJKPJAIOEM : public ::AKLPCMMHKEO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJKPJAIOEM__CTOR_OFFSET))(this);
	}

	::System::Void DALANODJLCE(::LGCNEDCMPKM& BKBGPKNGNMF, ::System::Object* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::System::Object*))((::PBYTE)hIl2Cpp + MPJKPJAIOEM_DALANODJLCE_OFFSET))(this, BKBGPKNGNMF, EGEGIMGMJHN);
	}
};
