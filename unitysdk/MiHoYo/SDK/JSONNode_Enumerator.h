#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/JSONNode_Enumerator_Type.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
namespace MiHoYo::SDK { class JSONNode; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_JSONNODE_ENUMERATOR_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1120)
#define MIHOYO_SDK_JSONNODE_ENUMERATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x10D0)
#define MIHOYO_SDK_JSONNODE_ENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3C12F10)
#define MIHOYO_SDK_JSONNODE_ENUMERATOR_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x10C0)
#define MIHOYO_SDK_JSONNODE_ENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C12F70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONNode_Enumerator_TypeDefinitionIndex = 8125;

	struct alignas(8) JSONNode_Enumerator
	{
		::MiHoYo::SDK::JSONNode_Enumerator_Type type; // 0x10
		::System::Byte _padding0[0x4];
		::System::Object* m_Object; // 0x18
		::System::Byte _padding1[0x20];
		::System::Object* m_Array; // 0x40
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_ENUMERATOR_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_ENUMERATOR_CTOR_1_OFFSET))(this, a1);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_ENUMERATOR_GET_ISVALID_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYo::SDK::JSONNode*> get_Current()
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYo::SDK::JSONNode*>(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_ENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_ENUMERATOR_MOVENEXT_OFFSET))(this);
		}

	};
}
