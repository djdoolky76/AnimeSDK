#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode.h"
#include "unitysdk/HoudiniEngineUnity/JSONNodeType.h"
#include "unitysdk/HoudiniEngineUnity/JSONTextMode.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode_Enumerator.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define HOUDINIENGINEUNITY_JSONBOOL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CB2A540)
#define HOUDINIENGINEUNITY_JSONBOOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB2A530)
#define HOUDINIENGINEUNITY_JSONBOOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CB2A5D0)
#define HOUDINIENGINEUNITY_JSONBOOL_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CB2A480)
#define HOUDINIENGINEUNITY_JSONBOOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CB2A5F0)
#define HOUDINIENGINEUNITY_JSONBOOL_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1CB2A510)
#define HOUDINIENGINEUNITY_JSONBOOL_GET_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1CB2A470)
#define HOUDINIENGINEUNITY_JSONBOOL_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1CB2A460)
#define HOUDINIENGINEUNITY_JSONBOOL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1CB2A4A0)
#define HOUDINIENGINEUNITY_JSONBOOL_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1CB2A520)
#define HOUDINIENGINEUNITY_JSONBOOL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1CB2A4C0)
#define HOUDINIENGINEUNITY_JSONBOOL_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1CB2A590)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int JSONBool_TypeDefinitionIndex = 41658;

	class JSONBool : public ::HoudiniEngineUnity::JSONNode
	{
	public:
		::System::Boolean m_Data; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_CTOR_1_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::JSONNodeType get_Tag()
		{
			return ((::HoudiniEngineUnity::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_GET_ISBOOLEAN_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode_Enumerator GetEnumerator()
		{
			return ((::HoudiniEngineUnity::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_SET_ASBOOL_OFFSET))(this, a1);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::HoudiniEngineUnity::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::JSONTextMode))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_GETHASHCODE_OFFSET))(this);
		}

	};
}
