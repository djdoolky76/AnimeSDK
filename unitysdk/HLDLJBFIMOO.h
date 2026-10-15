#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLDLJBFIMOO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HLDLJBFIMOO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E58DB00)
#define HLDLJBFIMOO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E58DD20)
#define HLDLJBFIMOO_CDHEPOFDMPP_OFFSET UNITYSDK_OFFSET(0x1E58D770)
#define HLDLJBFIMOO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E58D6F0)
#define HLDLJBFIMOO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E58D6C0)
#define HLDLJBFIMOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E58D6B0)
#define HLDLJBFIMOO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E58D880)
#define HLDLJBFIMOO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E58D780)
#define HLDLJBFIMOO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E58D9F0)
#define HLDLJBFIMOO_JHBKBFPJGPB_OFFSET UNITYSDK_OFFSET(0x1E58D760)
#define HLDLJBFIMOO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E58D640)
#define HLDLJBFIMOO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E58DBC0)
#define HLDLJBFIMOO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E58DB90)
#define HLDLJBFIMOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E58D6A0)
#define HLDLJBFIMOO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E58DA20)
#define HLDLJBFIMOO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E58DA80)

inline static constexpr unsigned int HLDLJBFIMOO_TypeDefinitionIndex = 31706;

	class HLDLJBFIMOO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OGCMNCBOEJG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HLDLJBFIMOO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HLDLJBFIMOO*>**)UnitySDK::FromName("", "HLDLJBFIMOO")->GetStaticField(0x37A40);
		}

		// static const ::System::Object HDGKLMKGNND; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HLDLJBFIMOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLDLJBFIMOO*))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLDLJBFIMOO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HLDLJBFIMOO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HLDLJBFIMOO*>*(*)())((::PBYTE)hIl2Cpp + HLDLJBFIMOO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HLDLJBFIMOO* Clone()
		{
			return ((::HLDLJBFIMOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_CLONE_OFFSET))(this);
		}

		::System::UInt32 JHBKBFPJGPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_JHBKBFPJGPB_OFFSET))(this);
		}

		::System::Void CDHEPOFDMPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_CDHEPOFDMPP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HLDLJBFIMOO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HLDLJBFIMOO*))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HLDLJBFIMOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLDLJBFIMOO*))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
