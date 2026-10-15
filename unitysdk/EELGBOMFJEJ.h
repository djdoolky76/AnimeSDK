#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EELGBOMFJEJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EELGBOMFJEJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E25AE70)
#define EELGBOMFJEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E25B0F0)
#define EELGBOMFJEJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E25A9B0)
#define EELGBOMFJEJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E25A920)
#define EELGBOMFJEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E25A8D0)
#define EELGBOMFJEJ_DKJOHAMHMBD_OFFSET UNITYSDK_OFFSET(0x1E25AA00)
#define EELGBOMFJEJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E25AB10)
#define EELGBOMFJEJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E25AA10)
#define EELGBOMFJEJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E25AC10)
#define EELGBOMFJEJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E25A890)
#define EELGBOMFJEJ_KGGGJOOFIPB_OFFSET UNITYSDK_OFFSET(0x1E25A9F0)
#define EELGBOMFJEJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E25AF30)
#define EELGBOMFJEJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E25AEE0)
#define EELGBOMFJEJ_OJFLCFCBJJI_OFFSET UNITYSDK_OFFSET(0x1E25A9E0)
#define EELGBOMFJEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E25A8C0)
#define EELGBOMFJEJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E25AD10)
#define EELGBOMFJEJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E25AD70)

inline static constexpr unsigned int EELGBOMFJEJ_TypeDefinitionIndex = 26306;

	class EELGBOMFJEJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JFDCOLNGGJC; // 0x18
		::System::Boolean LJJNFNNJDIE; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DIFNGFODAED()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "EELGBOMFJEJ")->GetStaticField(0x460E0);
		}

		static ::Google::Protobuf::MessageParser_1<::EELGBOMFJEJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EELGBOMFJEJ*>**)UnitySDK::FromName("", "EELGBOMFJEJ")->GetStaticField(0x460E8);
		}

		// static const ::System::Object IPODPIPIFLL; // 0x0
		// static const ::System::Object NDFHHFGKMAI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EELGBOMFJEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EELGBOMFJEJ*))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EELGBOMFJEJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EELGBOMFJEJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EELGBOMFJEJ*>*(*)())((::PBYTE)hIl2Cpp + EELGBOMFJEJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EELGBOMFJEJ* Clone()
		{
			return ((::EELGBOMFJEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_CLONE_OFFSET))(this);
		}

		::System::Boolean OJFLCFCBJJI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_OJFLCFCBJJI_OFFSET))(this);
		}

		::System::Void KGGGJOOFIPB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_KGGGJOOFIPB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DKJOHAMHMBD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_DKJOHAMHMBD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EELGBOMFJEJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EELGBOMFJEJ*))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EELGBOMFJEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EELGBOMFJEJ*))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
