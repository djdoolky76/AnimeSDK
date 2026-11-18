#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode_Enumerator_Type.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

namespace MiHoYoSDKJSON { class JSONNode; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYOSDKJSON_JSONNODE_ENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x95D680)
#define MIHOYOSDKJSON_JSONNODE_ENUMERATOR_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x5FA570)
#define MIHOYOSDKJSON_JSONNODE_ENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x95D6D0)
#define MIHOYOSDKJSON_JSONNODE_ENUMERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x823710)
#define MIHOYOSDKJSON_JSONNODE_ENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x8236C0)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONNode_Enumerator_TypeDefinitionIndex = 35077;

	struct alignas(8) JSONNode_Enumerator
	{
		::MiHoYoSDKJSON::JSONNode_Enumerator_Type type; // 0x10
		::System::Byte _padding0[0x4];
		::System::Object* m_Object; // 0x18
		::System::Byte _padding1[0x20];
		::System::Object* m_Array; // 0x40

		::System::Void _ctor(::System::Object* aArrayEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_ENUMERATOR__CTOR_OFFSET))(this, aArrayEnum);
		}

		::System::Void _ctor_1(::System::Object* aDictEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_ENUMERATOR__CTOR_1_OFFSET))(this, aDictEnum);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_ENUMERATOR_GET_ISVALID_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYoSDKJSON::JSONNode*> get_Current()
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYoSDKJSON::JSONNode*>(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_ENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_ENUMERATOR_MOVENEXT_OFFSET))(this);
		}
	};
}
