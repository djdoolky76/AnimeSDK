#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFHGPMCHDGL;
class HIMPJFMPEPA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HFHGPMCHDGL_AABOOKNIJKN_OFFSET UNITYSDK_OFFSET(0x1E56AA70)
#define HFHGPMCHDGL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E56AEE0)
#define HFHGPMCHDGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E56B250)
#define HFHGPMCHDGL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E56A9C0)
#define HFHGPMCHDGL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E56A930)
#define HFHGPMCHDGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E56A8F0)
#define HFHGPMCHDGL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E56ABE0)
#define HFHGPMCHDGL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E56AA90)
#define HFHGPMCHDGL_FEGIMNBKFHN_OFFSET UNITYSDK_OFFSET(0x1E56AA60)
#define HFHGPMCHDGL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E56AD10)
#define HFHGPMCHDGL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E56A8B0)
#define HFHGPMCHDGL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E56B090)
#define HFHGPMCHDGL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E56AFF0)
#define HFHGPMCHDGL_OOOMGOCOLCE_OFFSET UNITYSDK_OFFSET(0x1E56AA80)
#define HFHGPMCHDGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E56A8E0)
#define HFHGPMCHDGL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E56AD80)
#define HFHGPMCHDGL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E56ADE0)

inline static constexpr unsigned int HFHGPMCHDGL_TypeDefinitionIndex = 25911;

	class HFHGPMCHDGL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::HIMPJFMPEPA*>* HJHFJJDKFAH; // 0x18
		::System::UInt32 MLCHFINKHHM; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HFHGPMCHDGL")->GetStaticField(0x34AD0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_DJMPPGMKFHO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HFHGPMCHDGL")->GetStaticField(0x34AD8);
		}

		// static const ::System::Object HBIJBPKKMNN; // 0x0
		// static const ::System::Object LLLBJFAJIMJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHGPMCHDGL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HFHGPMCHDGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFHGPMCHDGL*))((::PBYTE)hIl2Cpp + HFHGPMCHDGL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFHGPMCHDGL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HFHGPMCHDGL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHGPMCHDGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HFHGPMCHDGL* Clone()
		{
			return ((::HFHGPMCHDGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHGPMCHDGL_CLONE_OFFSET))(this);
		}

		::System::UInt32 FEGIMNBKFHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHGPMCHDGL_FEGIMNBKFHN_OFFSET))(this);
		}

		::System::Void AABOOKNIJKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HFHGPMCHDGL_AABOOKNIJKN_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HIMPJFMPEPA*>* OOOMGOCOLCE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HIMPJFMPEPA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHGPMCHDGL_OOOMGOCOLCE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFHGPMCHDGL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HFHGPMCHDGL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HFHGPMCHDGL*))((::PBYTE)hIl2Cpp + HFHGPMCHDGL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHGPMCHDGL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHGPMCHDGL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HFHGPMCHDGL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHGPMCHDGL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HFHGPMCHDGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFHGPMCHDGL*))((::PBYTE)hIl2Cpp + HFHGPMCHDGL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HFHGPMCHDGL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
