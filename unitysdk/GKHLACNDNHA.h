#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKHLACNDNHA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GKHLACNDNHA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4B6010)
#define GKHLACNDNHA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B6270)
#define GKHLACNDNHA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4B5C10)
#define GKHLACNDNHA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4B5B80)
#define GKHLACNDNHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B5B30)
#define GKHLACNDNHA_DCAAIJACOOH_OFFSET UNITYSDK_OFFSET(0x1E4B5C40)
#define GKHLACNDNHA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4B5D40)
#define GKHLACNDNHA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4B5C50)
#define GKHLACNDNHA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4B5E30)
#define GKHLACNDNHA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4B5AF0)
#define GKHLACNDNHA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4B60D0)
#define GKHLACNDNHA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4B6080)
#define GKHLACNDNHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4B5B20)
#define GKHLACNDNHA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4B5F30)
#define GKHLACNDNHA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4B5F90)

	class GKHLACNDNHA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ENMDCGPDKGL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_FDPOEFGBOOA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GKHLACNDNHA")->GetStaticField(0x1D910);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GKHLACNDNHA")->GetStaticField(0x1D918);
		}

		// static const ::System::Object IMMIFHODMFM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHLACNDNHA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GKHLACNDNHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKHLACNDNHA*))((::PBYTE)hIl2Cpp + GKHLACNDNHA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKHLACNDNHA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GKHLACNDNHA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHLACNDNHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GKHLACNDNHA* Clone()
		{
			return ((::GKHLACNDNHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHLACNDNHA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DCAAIJACOOH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHLACNDNHA_DCAAIJACOOH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GKHLACNDNHA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GKHLACNDNHA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKHLACNDNHA*))((::PBYTE)hIl2Cpp + GKHLACNDNHA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHLACNDNHA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHLACNDNHA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GKHLACNDNHA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHLACNDNHA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GKHLACNDNHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKHLACNDNHA*))((::PBYTE)hIl2Cpp + GKHLACNDNHA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GKHLACNDNHA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
