#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FA82CB6A44407CBC_E4B328AF2A6C595B;
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define FA82CB6A44407CBC_A6BED41503130418_B3DC34B21A538F3D_OFFSET UNITYSDK_OFFSET(0x1D9B160)
#define FA82CB6A44407CBC_A6BED41503130418__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FA82CB6A44407CBC_A6BED41503130418_TypeDefinitionIndex = 10142;

class FA82CB6A44407CBC_A6BED41503130418 : public ::System::Object
{
public:
	::UnityEngine::GameObject* AD1247287D2D9217; // 0x10
	::FA82CB6A44407CBC_E4B328AF2A6C595B* A8791C2B0F6F977B; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FA82CB6A44407CBC_A6BED41503130418__CTOR_OFFSET))(this);
	}

	::System::Void B3DC34B21A538F3D(::UnityEngine::Playables::PlayableDirector* A9F0E1077186BAC8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + FA82CB6A44407CBC_A6BED41503130418_B3DC34B21A538F3D_OFFSET))(this, A9F0E1077186BAC8);
	}
};
