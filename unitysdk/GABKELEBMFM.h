#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define GABKELEBMFM_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x2E78AF0)
#define GABKELEBMFM_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x2E78BA0)
#define GABKELEBMFM_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x2E78B50)

inline static constexpr unsigned int GABKELEBMFM_TypeDefinitionIndex = 60302;

	struct alignas(8) GABKELEBMFM
	{
		::UnityEngine::Vector3 CEOCJBPLDOG; // 0x10
		::UnityEngine::Quaternion GFFPECJEGAG; // 0x1C
		::UnityEngine::Vector3 GOINMCEPJLA; // 0x2C
		::UnityEngine::Quaternion GPOAGGCILMF; // 0x38
		::System::Single IEHPFADHJFD; // 0x48
		::System::Byte _padding0[0x4];
		::System::Action* IMDLGFPMPEK; // 0x50
		::System::Action* HKHDLACNBOK; // 0x58
		::System::Void DLAILGNMFGI(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Single a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + GABKELEBMFM_DLAILGNMFGI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GABKELEBMFM_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void KFGJEKJHIMB(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + GABKELEBMFM_KFGJEKJHIMB_OFFSET))(this, a1, a2, a3);
		}

	};
