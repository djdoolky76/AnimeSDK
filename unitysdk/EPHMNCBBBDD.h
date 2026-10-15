#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define EPHMNCBBBDD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x155D4C40)
#define EPHMNCBBBDD_CTOR_2_OFFSET UNITYSDK_OFFSET(0x155D4CB0)
#define EPHMNCBBBDD_CTOR_3_OFFSET UNITYSDK_OFFSET(0x155D4D10)
#define EPHMNCBBBDD_CTOR_4_OFFSET UNITYSDK_OFFSET(0x155D4D80)
#define EPHMNCBBBDD_CTOR_OFFSET UNITYSDK_OFFSET(0x155D4BE0)
#define EPHMNCBBBDD_GET_MSGTEXT_OFFSET UNITYSDK_OFFSET(0x155D4BC0)
#define EPHMNCBBBDD_GET_URL_OFFSET UNITYSDK_OFFSET(0x155D4BA0)
#define EPHMNCBBBDD_SET_MSGTEXT_OFFSET UNITYSDK_OFFSET(0x155D4BD0)
#define EPHMNCBBBDD_SET_URL_OFFSET UNITYSDK_OFFSET(0x155D4BB0)

inline static constexpr unsigned int EPHMNCBBBDD_TypeDefinitionIndex = 69386;

	class EPHMNCBBBDD : public ::System::Exception
	{
	public:
		::System::String* _MsgText_k__BackingField; // 0x88
		::System::String* _URL_k__BackingField; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHMNCBBBDD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EPHMNCBBBDD_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPHMNCBBBDD_CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + EPHMNCBBBDD_CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_4(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + EPHMNCBBBDD_CTOR_4_OFFSET))(this, a1, a2);
		}

		::System::String* get_URL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHMNCBBBDD_GET_URL_OFFSET))(this);
		}

		::System::Void set_URL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPHMNCBBBDD_SET_URL_OFFSET))(this, a1);
		}

		::System::String* get_MsgText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHMNCBBBDD_GET_MSGTEXT_OFFSET))(this);
		}

		::System::Void set_MsgText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPHMNCBBBDD_SET_MSGTEXT_OFFSET))(this, a1);
		}

	};
