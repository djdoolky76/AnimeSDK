#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACKABEKCMOH_NHGPPEFMBMD;
namespace RPG::Client { class UIPrefabLoader; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define ACKABEKCMOH_CTOR_OFFSET UNITYSDK_OFFSET(0xB123A30)
#define ACKABEKCMOH_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB123AB0)
#define ACKABEKCMOH_MPFKCHHCIMO_OFFSET UNITYSDK_OFFSET(0xB123B00)

inline static constexpr unsigned int ACKABEKCMOH_TypeDefinitionIndex = 65956;

	class ACKABEKCMOH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* BEHHICMOFIE; // 0x10
		::ACKABEKCMOH_NHGPPEFMBMD* IGHAHBNLIJA; // 0x18
		::RPG::Client::UIPrefabLoader* HMELCEOFACP; // 0x20
		::System::String* GEJIJFFILEB; // 0x28
		::System::Void _ctor(::System::String* a1, ::ACKABEKCMOH_NHGPPEFMBMD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ACKABEKCMOH_NHGPPEFMBMD*))((::PBYTE)hIl2Cpp + ACKABEKCMOH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACKABEKCMOH_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void MPFKCHHCIMO(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + ACKABEKCMOH_MPFKCHHCIMO_OFFSET))(this, a1);
		}

	};
