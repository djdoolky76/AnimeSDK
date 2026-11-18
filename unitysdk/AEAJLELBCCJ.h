#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FOHHIICFBPC;
namespace MoleMole::Config { class HollowChessboardParticleConfig; }
namespace UnityEngine { class GameObject; }

#define AEAJLELBCCJ_SPAWN_OFFSET UNITYSDK_OFFSET(0x1420F770)
#define AEAJLELBCCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1420F7D0)

inline static constexpr unsigned int AEAJLELBCCJ_TypeDefinitionIndex = 54891;

class AEAJLELBCCJ : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEAJLELBCCJ__CTOR_OFFSET))(this);
	}

	::FOHHIICFBPC* Spawn(::UnityEngine::GameObject* AMPCAMJGJJA, ::MoleMole::Config::HollowChessboardParticleConfig* DFMKILICPFB)
	{
		return ((::FOHHIICFBPC*(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Config::HollowChessboardParticleConfig*))((::PBYTE)hIl2Cpp + AEAJLELBCCJ_SPAWN_OFFSET))(this, AMPCAMJGJJA, DFMKILICPFB);
	}
};
