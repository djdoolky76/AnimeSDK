#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIMNPPNNHEL;
class KGJGEEEKNNC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KGJGEEEKNNC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E838900)
#define KGJGEEEKNNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E838C60)
#define KGJGEEEKNNC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E838260)
#define KGJGEEEKNNC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8381D0)
#define KGJGEEEKNNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8381C0)
#define KGJGEEEKNNC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8384F0)
#define KGJGEEEKNNC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E838350)
#define KGJGEEEKNNC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8387C0)
#define KGJGEEEKNNC_IPFPANLBKEB_OFFSET UNITYSDK_OFFSET(0x1E838340)
#define KGJGEEEKNNC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E838150)
#define KGJGEEEKNNC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E838A60)
#define KGJGEEEKNNC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E838960)
#define KGJGEEEKNNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8381B0)
#define KGJGEEEKNNC_PEHCICGNBJB_OFFSET UNITYSDK_OFFSET(0x1E838330)
#define KGJGEEEKNNC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E838810)
#define KGJGEEEKNNC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E838870)

	class KGJGEEEKNNC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JIMNPPNNHEL* MBAGHCMCLPH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KGJGEEEKNNC")->GetStaticField(0x15F60);
		}

		// static const ::System::Object IFHOMJGAEKA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGJGEEEKNNC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KGJGEEEKNNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGJGEEEKNNC*))((::PBYTE)hIl2Cpp + KGJGEEEKNNC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGJGEEEKNNC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KGJGEEEKNNC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGJGEEEKNNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KGJGEEEKNNC* Clone()
		{
			return ((::KGJGEEEKNNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGJGEEEKNNC_CLONE_OFFSET))(this);
		}

		::JIMNPPNNHEL* PEHCICGNBJB()
		{
			return ((::JIMNPPNNHEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGJGEEEKNNC_PEHCICGNBJB_OFFSET))(this);
		}

		::System::Void IPFPANLBKEB(::JIMNPPNNHEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIMNPPNNHEL*))((::PBYTE)hIl2Cpp + KGJGEEEKNNC_IPFPANLBKEB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGJGEEEKNNC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KGJGEEEKNNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KGJGEEEKNNC*))((::PBYTE)hIl2Cpp + KGJGEEEKNNC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGJGEEEKNNC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGJGEEEKNNC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KGJGEEEKNNC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGJGEEEKNNC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KGJGEEEKNNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGJGEEEKNNC*))((::PBYTE)hIl2Cpp + KGJGEEEKNNC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KGJGEEEKNNC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
