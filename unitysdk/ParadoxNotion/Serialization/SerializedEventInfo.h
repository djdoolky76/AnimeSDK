#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Reflection { class EventInfo; }
namespace System::Reflection { class MemberInfo; }

#define PARADOXNOTION_SERIALIZATION_SERIALIZEDEVENTINFO_ASMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x1E9D9550)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDEVENTINFO_ASSTRING_OFFSET UNITYSDK_OFFSET(0x1E9C75E0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDEVENTINFO_GET_TBASEINFO_OFFSET UNITYSDK_OFFSET(0x1E9D92B0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDEVENTINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E9C7370)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDEVENTINFO_SET_TBASEINFO_OFFSET UNITYSDK_OFFSET(0x1E9D92C0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDEVENTINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9D9560)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDEVENTINFO_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E9D93E0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDEVENTINFO_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E9D92D0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDEVENTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9C76A0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDEVENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D9540)

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int SerializedEventInfo_TypeDefinitionIndex = 29245;

	class SerializedEventInfo : public ::System::Object
	{
	public:
		::System::String* _baseInfo; // 0x10
		::System::Reflection::EventInfo* _event; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDEVENTINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Reflection::EventInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::EventInfo*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDEVENTINFO__CTOR_1_OFFSET))(this, info);
		}

		::System::String* get_TBaseInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDEVENTINFO_GET_TBASEINFO_OFFSET))(this);
		}

		::System::Void set_TBaseInfo(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDEVENTINFO_SET_TBASEINFO_OFFSET))(this, value);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDEVENTINFO_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDEVENTINFO_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Reflection::MemberInfo* AsMemberInfo()
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDEVENTINFO_ASMEMBERINFO_OFFSET))(this);
		}

		::System::String* AsString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDEVENTINFO_ASSTRING_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDEVENTINFO_TOSTRING_OFFSET))(this);
		}

		static ::System::Reflection::EventInfo* op_Implicit(::ParadoxNotion::Serialization::SerializedEventInfo* value)
		{
			return ((::System::Reflection::EventInfo*(*)(::ParadoxNotion::Serialization::SerializedEventInfo*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDEVENTINFO_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
