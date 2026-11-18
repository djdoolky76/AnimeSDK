#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NEOINAMMOFA;
namespace System { class Action; }

#define NEOINAMMOFA_HFILJBMHOEM_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x17350880)
#define NEOINAMMOFA_HFILJBMHOEM__CTOR_OFFSET UNITYSDK_OFFSET(0x17350870)

inline static constexpr unsigned int NEOINAMMOFA_HFILJBMHOEM_TypeDefinitionIndex = 15337;

class NEOINAMMOFA_HFILJBMHOEM : public ::System::Object
{
public:
	::NEOINAMMOFA* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOINAMMOFA_HFILJBMHOEM__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NEOINAMMOFA_HFILJBMHOEM_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
