#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFJNAPDIMKM;
class OMJGKNJKHCH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CFJNAPDIMKM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0A4F60)
#define CFJNAPDIMKM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0A5240)
#define CFJNAPDIMKM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0A4B40)
#define CFJNAPDIMKM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0A4AB0)
#define CFJNAPDIMKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A4A70)
#define CFJNAPDIMKM_EBLGGODDKAD_OFFSET UNITYSDK_OFFSET(0x1E0A4B70)
#define CFJNAPDIMKM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0A4CC0)
#define CFJNAPDIMKM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0A4B80)
#define CFJNAPDIMKM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0A4DE0)
#define CFJNAPDIMKM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0A4A30)
#define CFJNAPDIMKM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0A50A0)
#define CFJNAPDIMKM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0A5000)
#define CFJNAPDIMKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0A4A60)
#define CFJNAPDIMKM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0A4E50)
#define CFJNAPDIMKM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0A4EB0)

	class CFJNAPDIMKM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::OMJGKNJKHCH*>* NICPOOMLFMK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CFJNAPDIMKM")->GetStaticField(0x131E0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_POPGJBDHPIH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CFJNAPDIMKM")->GetStaticField(0x131E8);
		}

		// static const ::System::Object IMPGOAJADJI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFJNAPDIMKM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CFJNAPDIMKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFJNAPDIMKM*))((::PBYTE)hIl2Cpp + CFJNAPDIMKM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFJNAPDIMKM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CFJNAPDIMKM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFJNAPDIMKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CFJNAPDIMKM* Clone()
		{
			return ((::CFJNAPDIMKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFJNAPDIMKM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OMJGKNJKHCH*>* EBLGGODDKAD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OMJGKNJKHCH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFJNAPDIMKM_EBLGGODDKAD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CFJNAPDIMKM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CFJNAPDIMKM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFJNAPDIMKM*))((::PBYTE)hIl2Cpp + CFJNAPDIMKM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFJNAPDIMKM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFJNAPDIMKM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CFJNAPDIMKM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFJNAPDIMKM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CFJNAPDIMKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFJNAPDIMKM*))((::PBYTE)hIl2Cpp + CFJNAPDIMKM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CFJNAPDIMKM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
