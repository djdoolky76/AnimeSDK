#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PODAILFIECJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PODAILFIECJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF9A6F0)
#define PODAILFIECJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF9A950)
#define PODAILFIECJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF9A2F0)
#define PODAILFIECJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF9A260)
#define PODAILFIECJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF9A210)
#define PODAILFIECJ_ECPOJEKLOOF_OFFSET UNITYSDK_OFFSET(0x1DF9A320)
#define PODAILFIECJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF9A420)
#define PODAILFIECJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF9A330)
#define PODAILFIECJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF9A510)
#define PODAILFIECJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF9A1D0)
#define PODAILFIECJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF9A7B0)
#define PODAILFIECJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF9A760)
#define PODAILFIECJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF9A200)
#define PODAILFIECJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF9A610)
#define PODAILFIECJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF9A670)

inline static constexpr unsigned int PODAILFIECJ_TypeDefinitionIndex = 30560;

	class PODAILFIECJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FELDHIDGGJH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PODAILFIECJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PODAILFIECJ*>**)UnitySDK::FromName("", "PODAILFIECJ")->GetStaticField(0x44710);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LHJCNNOMNIK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PODAILFIECJ")->GetStaticField(0x44718);
		}

		// static const ::System::Object NDFABIFPHPG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PODAILFIECJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PODAILFIECJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PODAILFIECJ*))((::PBYTE)hIl2Cpp + PODAILFIECJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PODAILFIECJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PODAILFIECJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PODAILFIECJ*>*(*)())((::PBYTE)hIl2Cpp + PODAILFIECJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PODAILFIECJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PODAILFIECJ* Clone()
		{
			return ((::PODAILFIECJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PODAILFIECJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ECPOJEKLOOF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PODAILFIECJ_ECPOJEKLOOF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PODAILFIECJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PODAILFIECJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PODAILFIECJ*))((::PBYTE)hIl2Cpp + PODAILFIECJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PODAILFIECJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PODAILFIECJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PODAILFIECJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PODAILFIECJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PODAILFIECJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PODAILFIECJ*))((::PBYTE)hIl2Cpp + PODAILFIECJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PODAILFIECJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
