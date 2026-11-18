#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AGJFJGEMIPB;
namespace MoleMole { class MonoSpawnPoint; }
namespace MoleMole::Battle { class Entity; }

#define PGNFPEFOACA_ADIOJNDAIJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13A93C20)

inline static constexpr unsigned int PGNFPEFOACA_ADIOJNDAIJJ_TypeDefinitionIndex = 83311;

class PGNFPEFOACA_ADIOJNDAIJJ : public ::System::Object
{
public:
	::MoleMole::MonoSpawnPoint* OIKMICDBAPP; // 0x10
	::MoleMole::Battle::Entity* FFHNMDNPGMC; // 0x18
	::AGJFJGEMIPB* CENFDFIKBDC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNFPEFOACA_ADIOJNDAIJJ__CTOR_OFFSET))(this);
	}
};
