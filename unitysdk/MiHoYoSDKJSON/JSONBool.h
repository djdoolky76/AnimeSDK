#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNodeType.h"
#include "unitysdk/MiHoYoSDKJSON/JSONTextMode.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode_Enumerator.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MIHOYOSDKJSON_JSONBOOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EF4B0F0)
#define MIHOYOSDKJSON_JSONBOOL_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EF4AE60)
#define MIHOYOSDKJSON_JSONBOOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EF4B150)
#define MIHOYOSDKJSON_JSONBOOL_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1EF4AF50)
#define MIHOYOSDKJSON_JSONBOOL_GET_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1EF4AE50)
#define MIHOYOSDKJSON_JSONBOOL_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1EF4AE40)
#define MIHOYOSDKJSON_JSONBOOL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EF4AE80)
#define MIHOYOSDKJSON_JSONBOOL_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1EF4AF60)
#define MIHOYOSDKJSON_JSONBOOL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EF4AED0)
#define MIHOYOSDKJSON_JSONBOOL_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1EF4B090)
#define MIHOYOSDKJSON_JSONBOOL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EF4AFD0)
#define MIHOYOSDKJSON_JSONBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF4AF70)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONBool_TypeDefinitionIndex = 35091;

	class JSONBool : public ::MiHoYoSDKJSON::JSONNode
	{
	public:
		::System::Boolean m_Data; // 0x10

		::System::Void _ctor(::System::Boolean aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL__CTOR_OFFSET))(this, aData);
		}

		::System::Void _ctor_1(::System::String* aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL__CTOR_1_OFFSET))(this, aData);
		}

		::MiHoYoSDKJSON::JSONNodeType get_Tag()
		{
			return ((::MiHoYoSDKJSON::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL_GET_ISBOOLEAN_OFFSET))(this);
		}

		::MiHoYoSDKJSON::JSONNode_Enumerator GetEnumerator()
		{
			return ((::MiHoYoSDKJSON::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL_SET_VALUE_OFFSET))(this, value);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL_SET_ASBOOL_OFFSET))(this, value);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::MiHoYoSDKJSON::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYoSDKJSON::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL_GETHASHCODE_OFFSET))(this);
		}
	};
}
