#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LICIFKNCFAJ;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Collider; }

#define GKCOHFPFEBN_LMMEAGELMKI_EDNHFMGHPGH_OFFSET UNITYSDK_OFFSET(0x10FE4F00)
#define GKCOHFPFEBN_LMMEAGELMKI_KEJGKAOCLBE_OFFSET UNITYSDK_OFFSET(0x10FE4ED0)
#define GKCOHFPFEBN_LMMEAGELMKI__CTOR_OFFSET UNITYSDK_OFFSET(0x10FE4EC0)

inline static constexpr unsigned int GKCOHFPFEBN_LMMEAGELMKI_TypeDefinitionIndex = 54788;

class GKCOHFPFEBN_LMMEAGELMKI : public ::System::Object
{
public:
	::LICIFKNCFAJ* HMMMOCJAEOA; // 0x10
	::MoleMole::Battle::Entity* AMNIHACKELI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_LMMEAGELMKI__CTOR_OFFSET))(this);
	}

	::System::Void KEJGKAOCLBE(::UnityEngine::Collider* PIIPCLCCOIG, ::System::Object* MINPNEAOEMM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_LMMEAGELMKI_KEJGKAOCLBE_OFFSET))(this, PIIPCLCCOIG, MINPNEAOEMM);
	}

	::System::Void EDNHFMGHPGH(::UnityEngine::Collider* PIIPCLCCOIG, ::System::Object* MINPNEAOEMM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_LMMEAGELMKI_EDNHFMGHPGH_OFFSET))(this, PIIPCLCCOIG, MINPNEAOEMM);
	}
};
