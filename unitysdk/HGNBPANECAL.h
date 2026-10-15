#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJLOENPDAHE;
class HGNBPANECAL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HGNBPANECAL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E556BD0)
#define HGNBPANECAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E556F60)
#define HGNBPANECAL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E556720)
#define HGNBPANECAL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E556690)
#define HGNBPANECAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E556650)
#define HGNBPANECAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5568D0)
#define HGNBPANECAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E556780)
#define HGNBPANECAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5569F0)
#define HGNBPANECAL_JHEFPOGNBND_OFFSET UNITYSDK_OFFSET(0x1E556750)
#define HGNBPANECAL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E556610)
#define HGNBPANECAL_JNFBHFOFHFO_OFFSET UNITYSDK_OFFSET(0x1E556770)
#define HGNBPANECAL_KLKAIAKLHMF_OFFSET UNITYSDK_OFFSET(0x1E556760)
#define HGNBPANECAL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E556DA0)
#define HGNBPANECAL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E556D00)
#define HGNBPANECAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E556640)
#define HGNBPANECAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E556A60)
#define HGNBPANECAL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E556AC0)

inline static constexpr unsigned int HGNBPANECAL_TypeDefinitionIndex = 33944;

	class HGNBPANECAL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BJLOENPDAHE*>* JLFDMJMJDND; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 AMOPIFLCGOO; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::BJLOENPDAHE*>** StaticGet_JKBHDLODNOE()
		{
			return (::Google::Protobuf::FieldCodec_1<::BJLOENPDAHE*>**)UnitySDK::FromName("", "HGNBPANECAL")->GetStaticField(0x17220);
		}

		static ::Google::Protobuf::MessageParser_1<::HGNBPANECAL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HGNBPANECAL*>**)UnitySDK::FromName("", "HGNBPANECAL")->GetStaticField(0x17228);
		}

		// static const ::System::Object CPBPPPJBFGH; // 0x0
		// static const ::System::Object KKHPBDAEOLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNBPANECAL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HGNBPANECAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGNBPANECAL*))((::PBYTE)hIl2Cpp + HGNBPANECAL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGNBPANECAL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HGNBPANECAL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HGNBPANECAL*>*(*)())((::PBYTE)hIl2Cpp + HGNBPANECAL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNBPANECAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HGNBPANECAL* Clone()
		{
			return ((::HGNBPANECAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNBPANECAL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BJLOENPDAHE*>* JHEFPOGNBND()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BJLOENPDAHE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNBPANECAL_JHEFPOGNBND_OFFSET))(this);
		}

		::System::UInt32 KLKAIAKLHMF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNBPANECAL_KLKAIAKLHMF_OFFSET))(this);
		}

		::System::Void JNFBHFOFHFO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HGNBPANECAL_JNFBHFOFHFO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HGNBPANECAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HGNBPANECAL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGNBPANECAL*))((::PBYTE)hIl2Cpp + HGNBPANECAL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNBPANECAL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNBPANECAL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HGNBPANECAL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNBPANECAL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HGNBPANECAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGNBPANECAL*))((::PBYTE)hIl2Cpp + HGNBPANECAL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HGNBPANECAL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
