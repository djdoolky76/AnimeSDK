#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

class LBMGHNEIBDP;
namespace MoleMole::Engine { class MeshStreamingManager; }
namespace UnityEngine { class Object; }

#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_NGBDMLAFDDH_LIOLPLFIDJA_OFFSET UNITYSDK_OFFSET(0x13562720)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_NGBDMLAFDDH__CTOR_OFFSET UNITYSDK_OFFSET(0x13562710)

namespace MoleMole::Engine
{
	inline static constexpr unsigned int MeshStreamingManager_NGBDMLAFDDH_TypeDefinitionIndex = 42436;

	class MeshStreamingManager_NGBDMLAFDDH : public ::System::Object
	{
	public:
		::LBMGHNEIBDP* CEKAJLAPJDA; // 0x10
		::MoleMole::Engine::MeshStreamingManager* KLHPEBKNIFB; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_NGBDMLAFDDH__CTOR_OFFSET))(this);
		}

		::System::Void LIOLPLFIDJA(::UnityEngine::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle FCEIKAIDHPM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_NGBDMLAFDDH_LIOLPLFIDJA_OFFSET))(this, NGLKIKLLLFL, FCEIKAIDHPM);
		}
	};
}
