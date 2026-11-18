#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPNCFCFIKCF.h"

namespace System { class Action; }

#define GGKINEOJDMN_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x149C2C40)
#define GGKINEOJDMN__CTOR_OFFSET UNITYSDK_OFFSET(0x149C2E60)

inline static constexpr unsigned int GGKINEOJDMN_TypeDefinitionIndex = 61637;

class GGKINEOJDMN : public ::IPNCFCFIKCF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKINEOJDMN__CTOR_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GGKINEOJDMN_HFBPONNNLBA_OFFSET))(this, EJGDHCIBCJH);
	}
};
