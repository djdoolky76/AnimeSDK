#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBBJNPGLLHM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CBBJNPGLLHM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20356210)
#define CBBJNPGLLHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x20356430)
#define CBBJNPGLLHM_CLONE_OFFSET UNITYSDK_OFFSET(0x20355CE0)
#define CBBJNPGLLHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20355BF0)
#define CBBJNPGLLHM_CTOR_OFFSET UNITYSDK_OFFSET(0x20355B60)
#define CBBJNPGLLHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20355E40)
#define CBBJNPGLLHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x20355D30)
#define CBBJNPGLLHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20355F50)
#define CBBJNPGLLHM_HCMFLNFBDHK_OFFSET UNITYSDK_OFFSET(0x20355D10)
#define CBBJNPGLLHM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20355B20)
#define CBBJNPGLLHM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20356300)
#define CBBJNPGLLHM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x203562A0)
#define CBBJNPGLLHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20355B50)
#define CBBJNPGLLHM_PHLLAAANDFD_OFFSET UNITYSDK_OFFSET(0x20355D20)
#define CBBJNPGLLHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20356110)
#define CBBJNPGLLHM_WRITETO_OFFSET UNITYSDK_OFFSET(0x20356170)

inline static constexpr unsigned int CBBJNPGLLHM_TypeDefinitionIndex = 35361;

	class CBBJNPGLLHM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GNEBJIMGNNE; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NMFCCHGCHBH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CBBJNPGLLHM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CBBJNPGLLHM*>**)UnitySDK::FromName("", "CBBJNPGLLHM")->GetStaticField(0x5FCA0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EHDCAEMKCHK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CBBJNPGLLHM")->GetStaticField(0x5FCA8);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NFAJBPBCLIC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CBBJNPGLLHM")->GetStaticField(0x5FCB0);
		}

		// static const ::System::Object FEFCGHKNOGH; // 0x0
		// static const ::System::Object KLFCLAICFGH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CBBJNPGLLHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBBJNPGLLHM*))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBBJNPGLLHM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CBBJNPGLLHM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CBBJNPGLLHM*>*(*)())((::PBYTE)hIl2Cpp + CBBJNPGLLHM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CBBJNPGLLHM* Clone()
		{
			return ((::CBBJNPGLLHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HCMFLNFBDHK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_HCMFLNFBDHK_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PHLLAAANDFD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_PHLLAAANDFD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CBBJNPGLLHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CBBJNPGLLHM*))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CBBJNPGLLHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBBJNPGLLHM*))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
