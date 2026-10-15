#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBNNPCIIDAJ.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace System { class String; }

#define LCLIBJJPIAM_BPMMLAJPPMH_OFFSET UNITYSDK_OFFSET(0xB6185B0)
#define LCLIBJJPIAM_CTOR_OFFSET UNITYSDK_OFFSET(0xB618560)
#define LCLIBJJPIAM_GET_REQUIRESTANDONGROUND_OFFSET UNITYSDK_OFFSET(0xB618AC0)
#define LCLIBJJPIAM_LEJMCJJKENC_OFFSET UNITYSDK_OFFSET(0xB618A70)

	class LCLIBJJPIAM : public ::NBNNPCIIDAJ
	{
	public:
		::System::Boolean KCCKBLNMHMO; // 0x1A0
		::System::Void _ctor(::RPG::GameCore::AdventureCharacterController* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*, ::System::String*))((::PBYTE)hIl2Cpp + LCLIBJJPIAM_CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 BPMMLAJPPMH(::RPG::GameCore::CharacterInputData* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LCLIBJJPIAM_BPMMLAJPPMH_OFFSET))(this, a1, a2);
		}

		::System::Void LEJMCJJKENC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LCLIBJJPIAM_LEJMCJJKENC_OFFSET))(this, a1);
		}

		::System::Boolean get_RequireStandOnGround()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCLIBJJPIAM_GET_REQUIRESTANDONGROUND_OFFSET))(this);
		}

	};
