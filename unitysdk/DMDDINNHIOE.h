#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHLEKKNDBBE.h"
#include "unitysdk/System/Object.h"
class DMDDINNHIOE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DMDDINNHIOE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1BD280)
#define DMDDINNHIOE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1BD520)
#define DMDDINNHIOE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1BCE30)
#define DMDDINNHIOE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1BCD40)
#define DMDDINNHIOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BCCC0)
#define DMDDINNHIOE_EBJBACCEBED_OFFSET UNITYSDK_OFFSET(0x1E1BCE70)
#define DMDDINNHIOE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1BCEB0)
#define DMDDINNHIOE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1BCE80)
#define DMDDINNHIOE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1BD000)
#define DMDDINNHIOE_HAFHDJEKMKH_OFFSET UNITYSDK_OFFSET(0x1E1BCE60)
#define DMDDINNHIOE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1BCC80)
#define DMDDINNHIOE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1BD410)
#define DMDDINNHIOE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1BD360)
#define DMDDINNHIOE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1BCCB0)
#define DMDDINNHIOE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1BD140)
#define DMDDINNHIOE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1BD1A0)

inline static constexpr unsigned int DMDDINNHIOE_TypeDefinitionIndex = 30192;

	class DMDDINNHIOE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MLAMAIECMNO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::FHLEKKNDBBE>* GNDEMCPPPFH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DMDDINNHIOE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DMDDINNHIOE*>**)UnitySDK::FromName("", "DMDDINNHIOE")->GetStaticField(0x35E50);
		}

		static ::Google::Protobuf::FieldCodec_1<::FHLEKKNDBBE>** StaticGet_BPIOIMJKEEH()
		{
			return (::Google::Protobuf::FieldCodec_1<::FHLEKKNDBBE>**)UnitySDK::FromName("", "DMDDINNHIOE")->GetStaticField(0x35E58);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HCGFOHIGGAH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "DMDDINNHIOE")->GetStaticField(0x35E60);
		}

		// static const ::System::Object NIMFFEFPEOF; // 0x0
		// static const ::System::Object JIPMBLKFILM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDDINNHIOE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DMDDINNHIOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMDDINNHIOE*))((::PBYTE)hIl2Cpp + DMDDINNHIOE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMDDINNHIOE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DMDDINNHIOE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DMDDINNHIOE*>*(*)())((::PBYTE)hIl2Cpp + DMDDINNHIOE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDDINNHIOE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DMDDINNHIOE* Clone()
		{
			return ((::DMDDINNHIOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDDINNHIOE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HAFHDJEKMKH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDDINNHIOE_HAFHDJEKMKH_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FHLEKKNDBBE>* EBJBACCEBED()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FHLEKKNDBBE>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDDINNHIOE_EBJBACCEBED_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DMDDINNHIOE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DMDDINNHIOE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DMDDINNHIOE*))((::PBYTE)hIl2Cpp + DMDDINNHIOE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDDINNHIOE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDDINNHIOE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DMDDINNHIOE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDDINNHIOE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DMDDINNHIOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMDDINNHIOE*))((::PBYTE)hIl2Cpp + DMDDINNHIOE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DMDDINNHIOE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
