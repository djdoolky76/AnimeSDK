#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ParticleSystemShapeType.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Renderer; }

#define AEMCAOEICDG_LPNDHFKNIIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12CE4AE0)

inline static constexpr unsigned int AEMCAOEICDG_LPNDHFKNIIJ_TypeDefinitionIndex = 80923;

class AEMCAOEICDG_LPNDHFKNIIJ : public ::System::Object
{
public:
	::UnityEngine::ParticleSystem* GHCNBDPFNMG; // 0x10
	::UnityEngine::Renderer* LPIEOHMKKOE; // 0x18
	::System::Single KLAPKPNLEMC; // 0x20
	::System::Boolean EELOMJDKGPB; // 0x24
	::System::Boolean DEJMJOHPEKH; // 0x25
	::System::Byte _padding0[0x2];
	::UnityEngine::ParticleSystemShapeType NKHANBKGBKN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMCAOEICDG_LPNDHFKNIIJ__CTOR_OFFSET))(this);
	}
};
