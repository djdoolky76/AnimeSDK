#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }

#define MOLEMOLE_ENGINE_NAPSCENEOPTIMIZEMANAGER_MATERIALLODITEM_CMBLCGHHPOA_OFFSET UNITYSDK_OFFSET(0x142ED360)
#define MOLEMOLE_ENGINE_NAPSCENEOPTIMIZEMANAGER_MATERIALLODITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x142ECFF0)

namespace MoleMole::Engine
{
	inline static constexpr unsigned int NapSceneOptimizeManager_MaterialLodItem_TypeDefinitionIndex = 86807;

	class NapSceneOptimizeManager_MaterialLodItem : public ::System::Object
	{
	public:
		::UnityEngine::MeshRenderer* renderItems; // 0x10
		::Il2CppArray<::System::Int32>* linkedIndex; // 0x18

		::System::Void _ctor(::UnityEngine::MeshRenderer* OCFHGOGFGPE, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* MKJHKFHBKGI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_NAPSCENEOPTIMIZEMANAGER_MATERIALLODITEM__CTOR_OFFSET))(this, OCFHGOGFGPE, MKJHKFHBKGI);
		}

		::System::Void CMBLCGHHPOA(::Il2CppArray<::UnityEngine::Material*>* MKJHKFHBKGI)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_NAPSCENEOPTIMIZEMANAGER_MATERIALLODITEM_CMBLCGHHPOA_OFFSET))(this, MKJHKFHBKGI);
		}
	};
}
