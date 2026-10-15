#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode_Enumerator_Type.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
namespace MiHoYoSDKJSON { class JSONNode; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYOSDKJSON_JSONNODE_ENUMERATOR_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1120)
#define MIHOYOSDKJSON_JSONNODE_ENUMERATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x10D0)
#define MIHOYOSDKJSON_JSONNODE_ENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1180)
#define MIHOYOSDKJSON_JSONNODE_ENUMERATOR_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x10C0)
#define MIHOYOSDKJSON_JSONNODE_ENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB810)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONNode_Enumerator_TypeDefinitionIndex = 46047;

	struct alignas(8) JSONNode_Enumerator
	{
		::MiHoYoSDKJSON::JSONNode_Enumerator_Type type; // 0x10
		::System::Byte _padding0[0x4];
		::System::Object* m_Object; // 0x18
		::System::Byte _padding1[0x20];
		::System::Object* m_Array; // 0x40
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_ENUMERATOR_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_ENUMERATOR_CTOR_1_OFFSET))(this, a1);
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
