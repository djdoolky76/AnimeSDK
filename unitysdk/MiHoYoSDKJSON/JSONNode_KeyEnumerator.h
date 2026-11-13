#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode_Enumerator.h"
namespace System { class Object; }
namespace System { class String; }

#define MIHOYOSDKJSON_JSONNODE_KEYENUMERATOR_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3E5F930)
#define MIHOYOSDKJSON_JSONNODE_KEYENUMERATOR_CTOR_2_OFFSET UNITYSDK_OFFSET(0x7DEFD0)
#define MIHOYOSDKJSON_JSONNODE_KEYENUMERATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x3E5F8F0)
#define MIHOYOSDKJSON_JSONNODE_KEYENUMERATOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x7ED190)
#define MIHOYOSDKJSON_JSONNODE_KEYENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3E8AE40)
#define MIHOYOSDKJSON_JSONNODE_KEYENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3EF8570)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONNode_KeyEnumerator_TypeDefinitionIndex = 47079;

	struct alignas(4) JSONNode_KeyEnumerator
	{
		::MiHoYoSDKJSON::JSONNode_Enumerator m_Enumerator; // 0x10
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_KEYENUMERATOR_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_KEYENUMERATOR_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::MiHoYoSDKJSON::JSONNode_Enumerator a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYoSDKJSON::JSONNode_Enumerator))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_KEYENUMERATOR_CTOR_2_OFFSET))(this, a1);
		}

		::System::String* get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_KEYENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_KEYENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		/*
		::MiHoYoSDKJSON::JSONNode_KeyEnumerator GetEnumerator()
		{
			return ((::MiHoYoSDKJSON::JSONNode_KeyEnumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_KEYENUMERATOR_GETENUMERATOR_OFFSET))(this);
		}
		*/

	};
}
