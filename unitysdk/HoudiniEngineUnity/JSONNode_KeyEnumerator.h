#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode_Enumerator.h"
namespace System { class Object; }
namespace System { class String; }

#define HOUDINIENGINEUNITY_JSONNODE_KEYENUMERATOR_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1300)
#define HOUDINIENGINEUNITY_JSONNODE_KEYENUMERATOR_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1360)
#define HOUDINIENGINEUNITY_JSONNODE_KEYENUMERATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x12C0)
#define HOUDINIENGINEUNITY_JSONNODE_KEYENUMERATOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1400)
#define HOUDINIENGINEUNITY_JSONNODE_KEYENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB8E0)
#define HOUDINIENGINEUNITY_JSONNODE_KEYENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x304D330)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int JSONNode_KeyEnumerator_TypeDefinitionIndex = 40672;

	struct alignas(4) JSONNode_KeyEnumerator
	{
		::HoudiniEngineUnity::JSONNode_Enumerator m_Enumerator; // 0x10
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_KEYENUMERATOR_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_KEYENUMERATOR_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::HoudiniEngineUnity::JSONNode_Enumerator a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::JSONNode_Enumerator))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_KEYENUMERATOR_CTOR_2_OFFSET))(this, a1);
		}

		::System::String* get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_KEYENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_KEYENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		/*
		::HoudiniEngineUnity::JSONNode_KeyEnumerator GetEnumerator()
		{
			return ((::HoudiniEngineUnity::JSONNode_KeyEnumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_KEYENUMERATOR_GETENUMERATOR_OFFSET))(this);
		}
		*/

	};
}
