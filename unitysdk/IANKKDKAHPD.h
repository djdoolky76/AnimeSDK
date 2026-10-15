#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLEKOLHCNIE;
class IANKKDKAHPD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IANKKDKAHPD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E60A2E0)
#define IANKKDKAHPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E60A5C0)
#define IANKKDKAHPD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E609EC0)
#define IANKKDKAHPD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E609E30)
#define IANKKDKAHPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E609DF0)
#define IANKKDKAHPD_ENPOAKILNGK_OFFSET UNITYSDK_OFFSET(0x1E609EF0)
#define IANKKDKAHPD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E60A040)
#define IANKKDKAHPD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E609F00)
#define IANKKDKAHPD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E60A160)
#define IANKKDKAHPD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E609DB0)
#define IANKKDKAHPD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E60A420)
#define IANKKDKAHPD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E60A380)
#define IANKKDKAHPD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E609DE0)
#define IANKKDKAHPD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E60A1D0)
#define IANKKDKAHPD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E60A230)

inline static constexpr unsigned int IANKKDKAHPD_TypeDefinitionIndex = 33728;

	class IANKKDKAHPD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::DLEKOLHCNIE*>* GOBDOOKJLMH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::DLEKOLHCNIE*>** StaticGet_GCDHOPLJPAD()
		{
			return (::Google::Protobuf::FieldCodec_1<::DLEKOLHCNIE*>**)UnitySDK::FromName("", "IANKKDKAHPD")->GetStaticField(0x3FD80);
		}

		static ::Google::Protobuf::MessageParser_1<::IANKKDKAHPD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IANKKDKAHPD*>**)UnitySDK::FromName("", "IANKKDKAHPD")->GetStaticField(0x3FD88);
		}

		// static const ::System::Object GIHIAIABDDK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IANKKDKAHPD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IANKKDKAHPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IANKKDKAHPD*))((::PBYTE)hIl2Cpp + IANKKDKAHPD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IANKKDKAHPD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IANKKDKAHPD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IANKKDKAHPD*>*(*)())((::PBYTE)hIl2Cpp + IANKKDKAHPD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IANKKDKAHPD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IANKKDKAHPD* Clone()
		{
			return ((::IANKKDKAHPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IANKKDKAHPD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DLEKOLHCNIE*>* ENPOAKILNGK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DLEKOLHCNIE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IANKKDKAHPD_ENPOAKILNGK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IANKKDKAHPD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IANKKDKAHPD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IANKKDKAHPD*))((::PBYTE)hIl2Cpp + IANKKDKAHPD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IANKKDKAHPD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IANKKDKAHPD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IANKKDKAHPD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IANKKDKAHPD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IANKKDKAHPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IANKKDKAHPD*))((::PBYTE)hIl2Cpp + IANKKDKAHPD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IANKKDKAHPD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
