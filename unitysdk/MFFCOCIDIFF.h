#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ResourceModeBase.h"

namespace System { class Action; }

#define MFFCOCIDIFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A63CD00)

inline static constexpr unsigned int MFFCOCIDIFF_TypeDefinitionIndex = 47737;

class MFFCOCIDIFF : public ::ResourceModeBase
{
public:
	::System::Void _ctor(::System::Action* DIENEAELFIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MFFCOCIDIFF__CTOR_OFFSET))(this, DIENEAELFIL);
	}
};
