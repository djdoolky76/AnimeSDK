#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICIMFKPDDMD_CEHBLMGKHHN;
namespace RPG::Client { class UIPrefabLoader; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define ICIMFKPDDMD_CTOR_OFFSET UNITYSDK_OFFSET(0x15E413D0)
#define ICIMFKPDDMD_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15E41450)
#define ICIMFKPDDMD_INIJCJJLPKM_1_OFFSET UNITYSDK_OFFSET(0x15E414A0)
#define ICIMFKPDDMD_MPFKCHHCIMO_OFFSET UNITYSDK_OFFSET(0x15E417D0)
#define ICIMFKPDDMD_NMENMJMBNOL_OFFSET UNITYSDK_OFFSET(0x15E41620)

inline static constexpr unsigned int ICIMFKPDDMD_TypeDefinitionIndex = 71176;

	class ICIMFKPDDMD : public ::System::Object
	{
	public:
		::RPG::Client::UIPrefabLoader* HMELCEOFACP; // 0x10
		::ICIMFKPDDMD_CEHBLMGKHHN* IGHAHBNLIJA; // 0x18
		::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* BEHHICMOFIE; // 0x20
		::System::String* GEJIJFFILEB; // 0x28
		::System::Void _ctor(::System::String* a1, ::ICIMFKPDDMD_CEHBLMGKHHN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ICIMFKPDDMD_CEHBLMGKHHN*))((::PBYTE)hIl2Cpp + ICIMFKPDDMD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICIMFKPDDMD_HADOHLNHHGB_OFFSET))(this);
		}

		::UnityEngine::Transform* INIJCJJLPKM_1()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICIMFKPDDMD_INIJCJJLPKM_1_OFFSET))(this);
		}

		::System::Void MPFKCHHCIMO(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + ICIMFKPDDMD_MPFKCHHCIMO_OFFSET))(this, a1);
		}

		::System::Void NMENMJMBNOL(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + ICIMFKPDDMD_NMENMJMBNOL_OFFSET))(this, a1, a2);
		}

	};
