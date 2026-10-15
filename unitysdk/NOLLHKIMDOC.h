#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOLLHKIMDOC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NOLLHKIMDOC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB8E4B0)
#define NOLLHKIMDOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB8E7F0)
#define NOLLHKIMDOC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB8DFA0)
#define NOLLHKIMDOC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB8DF00)
#define NOLLHKIMDOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8DEB0)
#define NOLLHKIMDOC_ENCJICIHGAK_OFFSET UNITYSDK_OFFSET(0x1EB8E000)
#define NOLLHKIMDOC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB8E0E0)
#define NOLLHKIMDOC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB8E040)
#define NOLLHKIMDOC_GCMNKFNNBNK_OFFSET UNITYSDK_OFFSET(0x1EB8E010)
#define NOLLHKIMDOC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB8E1E0)
#define NOLLHKIMDOC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB8DE40)
#define NOLLHKIMDOC_KFCEMJICANJ_OFFSET UNITYSDK_OFFSET(0x1EB8E030)
#define NOLLHKIMDOC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB8E700)
#define NOLLHKIMDOC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB8E6A0)
#define NOLLHKIMDOC_NKGBDEIIFAE_OFFSET UNITYSDK_OFFSET(0x1EB8DFF0)
#define NOLLHKIMDOC_ONCHLDHOOIL_OFFSET UNITYSDK_OFFSET(0x1EB8E020)
#define NOLLHKIMDOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB8DEA0)
#define NOLLHKIMDOC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB8E2F0)
#define NOLLHKIMDOC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB8E350)

	class NOLLHKIMDOC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JGGKLJPLJMN; // 0x18
		::System::UInt32 LIOPHPMMNOK; // 0x20
		::System::Byte _padding0[0x4];
		::System::Int64 AONFEONDPDL; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NOLLHKIMDOC")->GetStaticField(0xCC30);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_CIEANMLDLFJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NOLLHKIMDOC")->GetStaticField(0xCC38);
		}

		// static const ::System::Object IHEGCJKIKKB; // 0x0
		// static const ::System::Object MDCMPEMFAFF; // 0x0
		// static const ::System::Object LJCGANMNCDN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLLHKIMDOC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NOLLHKIMDOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOLLHKIMDOC*))((::PBYTE)hIl2Cpp + NOLLHKIMDOC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOLLHKIMDOC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NOLLHKIMDOC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLLHKIMDOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NOLLHKIMDOC* Clone()
		{
			return ((::NOLLHKIMDOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLLHKIMDOC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NKGBDEIIFAE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLLHKIMDOC_NKGBDEIIFAE_OFFSET))(this);
		}

		::System::Int64 ENCJICIHGAK()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLLHKIMDOC_ENCJICIHGAK_OFFSET))(this);
		}

		::System::Void GCMNKFNNBNK(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + NOLLHKIMDOC_GCMNKFNNBNK_OFFSET))(this, a1);
		}

		::System::UInt32 ONCHLDHOOIL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLLHKIMDOC_ONCHLDHOOIL_OFFSET))(this);
		}

		::System::Void KFCEMJICANJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NOLLHKIMDOC_KFCEMJICANJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NOLLHKIMDOC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NOLLHKIMDOC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NOLLHKIMDOC*))((::PBYTE)hIl2Cpp + NOLLHKIMDOC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLLHKIMDOC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLLHKIMDOC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NOLLHKIMDOC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLLHKIMDOC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NOLLHKIMDOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOLLHKIMDOC*))((::PBYTE)hIl2Cpp + NOLLHKIMDOC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NOLLHKIMDOC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
