#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCDNAGMDELF;
class JIGMJHLOHKG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JIGMJHLOHKG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E74D0E0)
#define JIGMJHLOHKG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E74D470)
#define JIGMJHLOHKG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E74CC60)
#define JIGMJHLOHKG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E74CBD0)
#define JIGMJHLOHKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E74CB90)
#define JIGMJHLOHKG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E74CE10)
#define JIGMJHLOHKG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E74CCC0)
#define JIGMJHLOHKG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E74CCB0)
#define JIGMJHLOHKG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E74CF30)
#define JIGMJHLOHKG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E74CB50)
#define JIGMJHLOHKG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E74D2B0)
#define JIGMJHLOHKG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E74D210)
#define JIGMJHLOHKG_MJBNBNKECFL_OFFSET UNITYSDK_OFFSET(0x1E74CC90)
#define JIGMJHLOHKG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E74CCA0)
#define JIGMJHLOHKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E74CB80)
#define JIGMJHLOHKG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E74CFA0)
#define JIGMJHLOHKG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E74D000)

inline static constexpr unsigned int JIGMJHLOHKG_TypeDefinitionIndex = 34628;

	class JIGMJHLOHKG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::JCDNAGMDELF*>* LPNJBAFKFAK; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::JCDNAGMDELF*>** StaticGet_IIHDAMEDAOF()
		{
			return (::Google::Protobuf::FieldCodec_1<::JCDNAGMDELF*>**)UnitySDK::FromName("", "JIGMJHLOHKG")->GetStaticField(0x64010);
		}

		static ::Google::Protobuf::MessageParser_1<::JIGMJHLOHKG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JIGMJHLOHKG*>**)UnitySDK::FromName("", "JIGMJHLOHKG")->GetStaticField(0x64018);
		}

		// static const ::System::Object IDJLBMDJGIE; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGMJHLOHKG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JIGMJHLOHKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIGMJHLOHKG*))((::PBYTE)hIl2Cpp + JIGMJHLOHKG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIGMJHLOHKG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JIGMJHLOHKG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JIGMJHLOHKG*>*(*)())((::PBYTE)hIl2Cpp + JIGMJHLOHKG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGMJHLOHKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JIGMJHLOHKG* Clone()
		{
			return ((::JIGMJHLOHKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGMJHLOHKG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JCDNAGMDELF*>* MJBNBNKECFL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JCDNAGMDELF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGMJHLOHKG_MJBNBNKECFL_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGMJHLOHKG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JIGMJHLOHKG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JIGMJHLOHKG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JIGMJHLOHKG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JIGMJHLOHKG*))((::PBYTE)hIl2Cpp + JIGMJHLOHKG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGMJHLOHKG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGMJHLOHKG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JIGMJHLOHKG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGMJHLOHKG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JIGMJHLOHKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIGMJHLOHKG*))((::PBYTE)hIl2Cpp + JIGMJHLOHKG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JIGMJHLOHKG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
