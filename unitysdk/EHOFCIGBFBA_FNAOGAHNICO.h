#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGamepadNavigatableList; }

#define EHOFCIGBFBA_FNAOGAHNICO_MGOGHODONPF_OFFSET UNITYSDK_OFFSET(0x16BE37A0)
#define EHOFCIGBFBA_FNAOGAHNICO__CTOR_OFFSET UNITYSDK_OFFSET(0x16BE3790)

inline static constexpr unsigned int EHOFCIGBFBA_FNAOGAHNICO_TypeDefinitionIndex = 52216;

class EHOFCIGBFBA_FNAOGAHNICO : public ::System::Object
{
public:
	::MoleMole::MonoGamepadNavigatableList* KEEEDMGEMJD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFCIGBFBA_FNAOGAHNICO__CTOR_OFFSET))(this);
	}

	::System::Void MGOGHODONPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFCIGBFBA_FNAOGAHNICO_MGOGHODONPF_OFFSET))(this);
	}
};
