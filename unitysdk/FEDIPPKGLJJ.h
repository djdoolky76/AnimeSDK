#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGJFDPBLDDF.h"

namespace System { class Action; }

#define FEDIPPKGLJJ_GIGBNBJPPGM_OFFSET UNITYSDK_OFFSET(0x13205A60)
#define FEDIPPKGLJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13205A50)

inline static constexpr unsigned int FEDIPPKGLJJ_TypeDefinitionIndex = 69124;

class FEDIPPKGLJJ : public ::AGJFDPBLDDF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDIPPKGLJJ__CTOR_OFFSET))(this);
	}

	::System::Void GIGBNBJPPGM(::System::Single AHAFNGEDPLI, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + FEDIPPKGLJJ_GIGBNBJPPGM_OFFSET))(this, AHAFNGEDPLI, EJGDHCIBCJH);
	}
};
