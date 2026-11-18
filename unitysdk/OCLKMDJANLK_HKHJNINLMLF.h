#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define OCLKMDJANLK_HKHJNINLMLF_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x1D0D0370)
#define OCLKMDJANLK_HKHJNINLMLF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D0360)

inline static constexpr unsigned int OCLKMDJANLK_HKHJNINLMLF_TypeDefinitionIndex = 10757;

class OCLKMDJANLK_HKHJNINLMLF : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLKMDJANLK_HKHJNINLMLF__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLKMDJANLK_HKHJNINLMLF_FBNBBPGPFHK_OFFSET))(this);
	}
};
