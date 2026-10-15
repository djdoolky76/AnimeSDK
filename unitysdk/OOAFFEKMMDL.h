#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/EObjectFeature.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define OOAFFEKMMDL_CTOR_OFFSET UNITYSDK_OFFSET(0xBF5A6A0)
#define OOAFFEKMMDL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF5A450)
#define OOAFFEKMMDL_GFPGNOOKDBD_OFFSET UNITYSDK_OFFSET(0xBF5A700)
#define OOAFFEKMMDL_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xBF5ACA0)
#define OOAFFEKMMDL_MCPPMEAEBKE_OFFSET UNITYSDK_OFFSET(0xBF5A4B0)
#define OOAFFEKMMDL_MLLMAFCHNGD_OFFSET UNITYSDK_OFFSET(0xBF5A960)
#define OOAFFEKMMDL_PIGJDJADHAB_OFFSET UNITYSDK_OFFSET(0xBF5AA00)

inline static constexpr unsigned int OOAFFEKMMDL_TypeDefinitionIndex = 60767;

	class OOAFFEKMMDL : public ::System::Object
	{
	public:
		::UnityEngine::Transform* PMNDHEHLCAP; // 0x10
		::UnityEngine::SkinnedMeshRenderer* DINHCOCIJDJ; // 0x18
		::UnityEngine::GameObject* OLPPHJJNMEA; // 0x20
		::RPG::CustomRP::EObjectFeature DFPEAPNOCGN; // 0x28
		::System::Boolean NDHEDNNNPFH; // 0x2C
		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OOAFFEKMMDL_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAFFEKMMDL_DISPOSE_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAFFEKMMDL_LJOLGCNKIEH_OFFSET))(this);
		}

		::System::Void PIGJDJADHAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAFFEKMMDL_PIGJDJADHAB_OFFSET))(this);
		}

		::System::Void MCPPMEAEBKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAFFEKMMDL_MCPPMEAEBKE_OFFSET))(this);
		}

		::UnityEngine::SkinnedMeshRenderer* GFPGNOOKDBD(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::SkinnedMeshRenderer*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OOAFFEKMMDL_GFPGNOOKDBD_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* MLLMAFCHNGD(::UnityEngine::GameObject* a1, ::UnityEngine::SkinnedMeshRenderer* a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + OOAFFEKMMDL_MLLMAFCHNGD_OFFSET))(this, a1, a2);
		}

	};
