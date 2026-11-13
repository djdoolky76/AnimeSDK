#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOOLKFODKIK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MOOLKFODKIK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FF1C790)
#define MOOLKFODKIK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF1C830)
#define MOOLKFODKIK_CLONE_OFFSET UNITYSDK_OFFSET(0x1FF1C480)
#define MOOLKFODKIK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF1C450)
#define MOOLKFODKIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF1C440)
#define MOOLKFODKIK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FF1C590)
#define MOOLKFODKIK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FF1C4C0)
#define MOOLKFODKIK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FF1C6F0)
#define MOOLKFODKIK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FF1C400)
#define MOOLKFODKIK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FF1C7E0)
#define MOOLKFODKIK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FF1C7B0)
#define MOOLKFODKIK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FF1C430)
#define MOOLKFODKIK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FF1C720)
#define MOOLKFODKIK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FF1C780)

inline static constexpr unsigned int MOOLKFODKIK_TypeDefinitionIndex = 32749;

	class MOOLKFODKIK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::MOOLKFODKIK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MOOLKFODKIK*>**)UnitySDK::FromName("", "MOOLKFODKIK")->GetStaticField(0x54FF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOLKFODKIK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MOOLKFODKIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOOLKFODKIK*))((::PBYTE)hIl2Cpp + MOOLKFODKIK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOOLKFODKIK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MOOLKFODKIK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MOOLKFODKIK*>*(*)())((::PBYTE)hIl2Cpp + MOOLKFODKIK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOLKFODKIK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MOOLKFODKIK* Clone()
		{
			return ((::MOOLKFODKIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOLKFODKIK_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOOLKFODKIK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MOOLKFODKIK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MOOLKFODKIK*))((::PBYTE)hIl2Cpp + MOOLKFODKIK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOLKFODKIK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOLKFODKIK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MOOLKFODKIK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOLKFODKIK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MOOLKFODKIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOOLKFODKIK*))((::PBYTE)hIl2Cpp + MOOLKFODKIK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MOOLKFODKIK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
