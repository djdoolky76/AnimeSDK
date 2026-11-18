#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Renderer; }

#define OMMBGCLDGFC_MJBGFDPOBKA_EKINNIBHLDN_OFFSET UNITYSDK_OFFSET(0x16F866D0)
#define OMMBGCLDGFC_MJBGFDPOBKA__CTOR_OFFSET UNITYSDK_OFFSET(0x16F866C0)

inline static constexpr unsigned int OMMBGCLDGFC_MJBGFDPOBKA_TypeDefinitionIndex = 68547;

class OMMBGCLDGFC_MJBGFDPOBKA : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* AMNIHACKELI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMBGCLDGFC_MJBGFDPOBKA__CTOR_OFFSET))(this);
	}

	::System::Void EKINNIBHLDN(::UnityEngine::Renderer* OCFHGOGFGPE, ::System::Boolean NNJLDLIHINN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + OMMBGCLDGFC_MJBGFDPOBKA_EKINNIBHLDN_OFFSET))(this, OCFHGOGFGPE, NNJLDLIHINN);
	}
};
