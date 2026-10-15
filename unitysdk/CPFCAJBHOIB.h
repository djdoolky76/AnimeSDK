#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPFCAJBHOIB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CPFCAJBHOIB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E13C3A0)
#define CPFCAJBHOIB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E13C600)
#define CPFCAJBHOIB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E13BFA0)
#define CPFCAJBHOIB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E13BF10)
#define CPFCAJBHOIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E13BEC0)
#define CPFCAJBHOIB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E13C0D0)
#define CPFCAJBHOIB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E13BFE0)
#define CPFCAJBHOIB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E13C1C0)
#define CPFCAJBHOIB_GMMLIHFEGLG_OFFSET UNITYSDK_OFFSET(0x1E13BFD0)
#define CPFCAJBHOIB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E13BE80)
#define CPFCAJBHOIB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E13C460)
#define CPFCAJBHOIB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E13C410)
#define CPFCAJBHOIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E13BEB0)
#define CPFCAJBHOIB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E13C2C0)
#define CPFCAJBHOIB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E13C320)

	class CPFCAJBHOIB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GGJDBKKIBCB; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_DEKPFCKHFIE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CPFCAJBHOIB")->GetStaticField(0x221E0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CPFCAJBHOIB")->GetStaticField(0x221E8);
		}

		// static const ::System::Object FKOABFGMHJI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFCAJBHOIB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CPFCAJBHOIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPFCAJBHOIB*))((::PBYTE)hIl2Cpp + CPFCAJBHOIB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPFCAJBHOIB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CPFCAJBHOIB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFCAJBHOIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CPFCAJBHOIB* Clone()
		{
			return ((::CPFCAJBHOIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFCAJBHOIB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GMMLIHFEGLG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFCAJBHOIB_GMMLIHFEGLG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPFCAJBHOIB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CPFCAJBHOIB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPFCAJBHOIB*))((::PBYTE)hIl2Cpp + CPFCAJBHOIB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFCAJBHOIB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFCAJBHOIB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CPFCAJBHOIB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFCAJBHOIB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CPFCAJBHOIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPFCAJBHOIB*))((::PBYTE)hIl2Cpp + CPFCAJBHOIB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CPFCAJBHOIB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
