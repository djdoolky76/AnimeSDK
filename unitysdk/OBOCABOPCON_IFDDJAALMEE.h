#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define OBOCABOPCON_IFDDJAALMEE_CTOR_OFFSET UNITYSDK_OFFSET(0xBD46080)
#define OBOCABOPCON_IFDDJAALMEE_GET_ISOVERPANEL_OFFSET UNITYSDK_OFFSET(0xBD463D0)
#define OBOCABOPCON_IFDDJAALMEE_GET_OBJECTDATA_OFFSET UNITYSDK_OFFSET(0xBD463C0)
#define OBOCABOPCON_IFDDJAALMEE_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0xBD463B0)

inline static constexpr unsigned int OBOCABOPCON_IFDDJAALMEE_TypeDefinitionIndex = 81257;

	class OBOCABOPCON_IFDDJAALMEE : public ::System::Object
	{
	public:
		::System::Object* _ObjectData_k__BackingField; // 0x10
		::UnityEngine::GameObject* _Source_k__BackingField; // 0x18
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
