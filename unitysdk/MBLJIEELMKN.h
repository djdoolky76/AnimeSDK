#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
class MBLJIEELMKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MBLJIEELMKN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9E8930)
#define MBLJIEELMKN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9E8C10)
#define MBLJIEELMKN_CFJMLHAFFIF_OFFSET UNITYSDK_OFFSET(0x1E9E8540)
#define MBLJIEELMKN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9E8510)
#define MBLJIEELMKN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9E8480)
#define MBLJIEELMKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E8440)
#define MBLJIEELMKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9E8690)
#define MBLJIEELMKN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9E8550)
#define MBLJIEELMKN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9E87B0)
#define MBLJIEELMKN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9E8400)
#define MBLJIEELMKN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9E8A70)
#define MBLJIEELMKN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9E89D0)
#define MBLJIEELMKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9E8430)
#define MBLJIEELMKN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9E8820)
#define MBLJIEELMKN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9E8880)

inline static constexpr unsigned int MBLJIEELMKN_TypeDefinitionIndex = 27203;

	class MBLJIEELMKN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* FPNDOKNMMEE; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MBLJIEELMKN")->GetStaticField(0x44E50);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_PEDAEGNCCNH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MBLJIEELMKN")->GetStaticField(0x44E58);
		}

		// static const ::System::Object IIDHNPOJLLG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLJIEELMKN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MBLJIEELMKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBLJIEELMKN*))((::PBYTE)hIl2Cpp + MBLJIEELMKN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBLJIEELMKN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MBLJIEELMKN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLJIEELMKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MBLJIEELMKN* Clone()
		{
			return ((::MBLJIEELMKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLJIEELMKN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* CFJMLHAFFIF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLJIEELMKN_CFJMLHAFFIF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MBLJIEELMKN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MBLJIEELMKN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MBLJIEELMKN*))((::PBYTE)hIl2Cpp + MBLJIEELMKN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLJIEELMKN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLJIEELMKN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MBLJIEELMKN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLJIEELMKN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MBLJIEELMKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBLJIEELMKN*))((::PBYTE)hIl2Cpp + MBLJIEELMKN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MBLJIEELMKN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
