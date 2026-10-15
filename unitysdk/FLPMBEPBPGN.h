#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLPMBEPBPGN;
class LMKECAPDMAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FLPMBEPBPGN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3DDC20)
#define FLPMBEPBPGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3DDF20)
#define FLPMBEPBPGN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3DD7A0)
#define FLPMBEPBPGN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3DD6F0)
#define FLPMBEPBPGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DD6A0)
#define FLPMBEPBPGN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3DD980)
#define FLPMBEPBPGN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3DD800)
#define FLPMBEPBPGN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3DDAA0)
#define FLPMBEPBPGN_IPLJHFBNIEJ_OFFSET UNITYSDK_OFFSET(0x1E3DD7F0)
#define FLPMBEPBPGN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3DD630)
#define FLPMBEPBPGN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3DDD60)
#define FLPMBEPBPGN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3DDCC0)
#define FLPMBEPBPGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3DD690)
#define FLPMBEPBPGN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3DDB10)
#define FLPMBEPBPGN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3DDB70)

	class FLPMBEPBPGN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::LMKECAPDMAC*>* BLIHAOKCNJM; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FLPMBEPBPGN")->GetStaticField(0x648D0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_FPNMMDHGFBH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "FLPMBEPBPGN")->GetStaticField(0x648D8);
		}

		// static const ::System::Object DGIOFPBGOMF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPMBEPBPGN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FLPMBEPBPGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLPMBEPBPGN*))((::PBYTE)hIl2Cpp + FLPMBEPBPGN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLPMBEPBPGN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FLPMBEPBPGN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPMBEPBPGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FLPMBEPBPGN* Clone()
		{
			return ((::FLPMBEPBPGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPMBEPBPGN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LMKECAPDMAC*>* IPLJHFBNIEJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LMKECAPDMAC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPMBEPBPGN_IPLJHFBNIEJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLPMBEPBPGN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FLPMBEPBPGN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FLPMBEPBPGN*))((::PBYTE)hIl2Cpp + FLPMBEPBPGN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPMBEPBPGN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPMBEPBPGN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FLPMBEPBPGN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPMBEPBPGN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FLPMBEPBPGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLPMBEPBPGN*))((::PBYTE)hIl2Cpp + FLPMBEPBPGN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FLPMBEPBPGN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
