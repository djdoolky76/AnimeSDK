#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define OBOCABOPCON_IFDDJAALMEE_CTOR_OFFSET UNITYSDK_OFFSET(0xBD4D260)
#define OBOCABOPCON_IFDDJAALMEE_GET_ISOVERPANEL_OFFSET UNITYSDK_OFFSET(0xBD4D5B0)
#define OBOCABOPCON_IFDDJAALMEE_GET_OBJECTDATA_OFFSET UNITYSDK_OFFSET(0xBD4D5A0)
#define OBOCABOPCON_IFDDJAALMEE_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0xBD4D590)

inline static constexpr unsigned int OBOCABOPCON_IFDDJAALMEE_TypeDefinitionIndex = 81258;

	class OBOCABOPCON_IFDDJAALMEE : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* _Source_k__BackingField; // 0x10
		::System::Object* _ObjectData_k__BackingField; // 0x18
		::System::Boolean _IsOverPanel_k__BackingField; // 0x20
		::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::Object* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + OBOCABOPCON_IFDDJAALMEE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::GameObject* get_Source()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOCABOPCON_IFDDJAALMEE_GET_SOURCE_OFFSET))(this);
		}

		::System::Object* get_ObjectData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOCABOPCON_IFDDJAALMEE_GET_OBJECTDATA_OFFSET))(this);
		}

		::System::Boolean get_IsOverPanel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOCABOPCON_IFDDJAALMEE_GET_ISOVERPANEL_OFFSET))(this);
		}

	};
