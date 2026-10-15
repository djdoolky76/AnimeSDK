#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDLCCMGHJAD;
class NNDKLIBALLC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HDLCCMGHJAD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5518A0)
#define HDLCCMGHJAD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E551BA0)
#define HDLCCMGHJAD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E551480)
#define HDLCCMGHJAD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5513D0)
#define HDLCCMGHJAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E551380)
#define HDLCCMGHJAD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E551600)
#define HDLCCMGHJAD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5514C0)
#define HDLCCMGHJAD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E551720)
#define HDLCCMGHJAD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E551340)
#define HDLCCMGHJAD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5519E0)
#define HDLCCMGHJAD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E551940)
#define HDLCCMGHJAD_OGEJENKCCCC_OFFSET UNITYSDK_OFFSET(0x1E5514B0)
#define HDLCCMGHJAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E551370)
#define HDLCCMGHJAD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E551790)
#define HDLCCMGHJAD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5517F0)

inline static constexpr unsigned int HDLCCMGHJAD_TypeDefinitionIndex = 31145;

	class HDLCCMGHJAD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::NNDKLIBALLC*>* NJLIDDBENAE; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_NFOGMGFHFCM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HDLCCMGHJAD")->GetStaticField(0x321A0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HDLCCMGHJAD")->GetStaticField(0x321A8);
		}

		// static const ::System::Object DHHDFBEEHKA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLCCMGHJAD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HDLCCMGHJAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDLCCMGHJAD*))((::PBYTE)hIl2Cpp + HDLCCMGHJAD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDLCCMGHJAD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HDLCCMGHJAD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLCCMGHJAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HDLCCMGHJAD* Clone()
		{
			return ((::HDLCCMGHJAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLCCMGHJAD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NNDKLIBALLC*>* OGEJENKCCCC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NNDKLIBALLC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLCCMGHJAD_OGEJENKCCCC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDLCCMGHJAD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HDLCCMGHJAD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HDLCCMGHJAD*))((::PBYTE)hIl2Cpp + HDLCCMGHJAD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLCCMGHJAD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLCCMGHJAD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HDLCCMGHJAD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLCCMGHJAD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HDLCCMGHJAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDLCCMGHJAD*))((::PBYTE)hIl2Cpp + HDLCCMGHJAD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HDLCCMGHJAD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
