#pragma once
#include "unitysdk/unitysdk.h"

class KBDGKAJPALP;
namespace System { class Action; }

#define GNKPGJCEIGE_BJFGMNGBLGJ_OFFSET UNITYSDK_OFFSET(0x124CBFB0)
#define GNKPGJCEIGE__CTOR_OFFSET UNITYSDK_OFFSET(0x124CBF90)

inline static constexpr unsigned int GNKPGJCEIGE_TypeDefinitionIndex = 93280;

class GNKPGJCEIGE
{
public:
	::System::Void _ctor(::KBDGKAJPALP* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::KBDGKAJPALP*))((::PBYTE)hIl2Cpp + GNKPGJCEIGE__CTOR_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void BJFGMNGBLGJ(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GNKPGJCEIGE_BJFGMNGBLGJ_OFFSET))(this, EJGDHCIBCJH);
	}
};
