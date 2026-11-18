#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class BFDCJJOGEFG;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_UINPCPERFORM_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x193BA100)
#define MOLEMOLE_UINPCPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x193BA0B0)

namespace MoleMole
{
	inline static constexpr unsigned int UINpcPerform_TypeDefinitionIndex = 53495;

	class UINpcPerform : public ::MoleMole::DisplayMessageBase
	{
	public:
		::BFDCJJOGEFG* performConfig; // 0x28
		::System::Int32 interactID; // 0x30
		::System::UInt32 ownerID; // 0x34

		::System::Void _ctor(::MoleMole::Battle::Entity* owner, ::BFDCJJOGEFG* performConfig, ::System::Int32 interactID)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::BFDCJJOGEFG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCPERFORM__CTOR_OFFSET))(this, owner, performConfig, interactID);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCPERFORM_ONPROCESS_OFFSET))(this);
		}
	};
}
