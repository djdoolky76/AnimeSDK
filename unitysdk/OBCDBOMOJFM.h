#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ResourceModeBase.h"

namespace System { class Action; }

#define OBCDBOMOJFM__CTOR_OFFSET UNITYSDK_OFFSET(0xF16E2A0)

inline static constexpr unsigned int OBCDBOMOJFM_TypeDefinitionIndex = 52046;

class OBCDBOMOJFM : public ::ResourceModeBase
{
public:
	::System::Void _ctor(::System::Action* DIENEAELFIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OBCDBOMOJFM__CTOR_OFFSET))(this, DIENEAELFIL);
	}
};
