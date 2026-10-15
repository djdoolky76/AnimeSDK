#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Renderer; }

#define MESHBOUNDDRAWER_CTOR_OFFSET UNITYSDK_OFFSET(0xBA44EF0)
#define MESHBOUNDDRAWER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xBA44CB0)
#define MESHBOUNDDRAWER_START_OFFSET UNITYSDK_OFFSET(0xBA44A10)

inline static constexpr unsigned int MeshBoundDrawer_TypeDefinitionIndex = 47287;

	class MeshBoundDrawer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* BICEEGMOBGN; // 0x18
		::UnityEngine::Bounds FBOMKLKIAMO; // 0x20
		::Il2CppArray<::UnityEngine::Vector3>* JCDHKHJBIHG; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHBOUNDDRAWER_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHBOUNDDRAWER_START_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHBOUNDDRAWER_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

	};
