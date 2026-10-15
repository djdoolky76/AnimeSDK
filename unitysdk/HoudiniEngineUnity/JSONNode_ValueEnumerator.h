#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode_Enumerator.h"
namespace HoudiniEngineUnity { class JSONNode; }
namespace System { class Object; }

#define HOUDINIENGINEUNITY_JSONNODE_VALUEENUMERATOR_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1300)
#define HOUDINIENGINEUNITY_JSONNODE_VALUEENUMERATOR_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1360)
#define HOUDINIENGINEUNITY_JSONNODE_VALUEENUMERATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x12C0)
#define HOUDINIENGINEUNITY_JSONNODE_VALUEENUMERATOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1400)
#define HOUDINIENGINEUNITY_JSONNODE_VALUEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1450)
#define HOUDINIENGINEUNITY_JSONNODE_VALUEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x304DB80)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int JSONNode_ValueEnumerator_TypeDefinitionIndex = 40671;

	struct alignas(4) JSONNode_ValueEnumerator
	{
		::HoudiniEngineUnity::JSONNode_Enumerator m_Enumerator; // 0x10
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_VALUEENUMERATOR_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_VALUEENUMERATOR_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::HoudiniEngineUnity::JSONNode_Enumerator a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::JSONNode_Enumerator))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_VALUEENUMERATOR_CTOR_2_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::JSONNode* get_Current()
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_VALUEENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_VALUEENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		/*
		::HoudiniEngineUnity::JSONNode_ValueEnumerator GetEnumerator()
		{
			return ((::HoudiniEngineUnity::JSONNode_ValueEnumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_VALUEENUMERATOR_GETENUMERATOR_OFFSET))(this);
		}
		*/

	};
}
