#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEAFKDMJNLO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BEAFKDMJNLO_ADHDFEOFJNM_OFFSET UNITYSDK_OFFSET(0x1E9208A0)
#define BEAFKDMJNLO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E920CF0)
#define BEAFKDMJNLO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E920FD0)
#define BEAFKDMJNLO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E920860)
#define BEAFKDMJNLO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9207D0)
#define BEAFKDMJNLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E920780)
#define BEAFKDMJNLO_DKJOHAMHMBD_OFFSET UNITYSDK_OFFSET(0x1E9208B0)
#define BEAFKDMJNLO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9209C0)
#define BEAFKDMJNLO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9208C0)
#define BEAFKDMJNLO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E920AB0)
#define BEAFKDMJNLO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E920740)
#define BEAFKDMJNLO_LKGJAFJLNMM_OFFSET UNITYSDK_OFFSET(0x1E920890)
#define BEAFKDMJNLO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E920E20)
#define BEAFKDMJNLO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E920DD0)
#define BEAFKDMJNLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E920770)
#define BEAFKDMJNLO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E920BB0)
#define BEAFKDMJNLO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E920C10)

inline static constexpr unsigned int BEAFKDMJNLO_TypeDefinitionIndex = 27375;

	class BEAFKDMJNLO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JFDCOLNGGJC; // 0x18
		::System::UInt32 HKMEMBIPHAN; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BEAFKDMJNLO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BEAFKDMJNLO*>**)UnitySDK::FromName("", "BEAFKDMJNLO")->GetStaticField(0x3F400);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DIFNGFODAED()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "BEAFKDMJNLO")->GetStaticField(0x3F408);
		}

		// static const ::System::Object BKCLJIHIJIJ; // 0x0
		// static const ::System::Object NDFHHFGKMAI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAFKDMJNLO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BEAFKDMJNLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEAFKDMJNLO*))((::PBYTE)hIl2Cpp + BEAFKDMJNLO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEAFKDMJNLO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BEAFKDMJNLO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BEAFKDMJNLO*>*(*)())((::PBYTE)hIl2Cpp + BEAFKDMJNLO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAFKDMJNLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BEAFKDMJNLO* Clone()
		{
			return ((::BEAFKDMJNLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAFKDMJNLO_CLONE_OFFSET))(this);
		}

		::System::UInt32 LKGJAFJLNMM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAFKDMJNLO_LKGJAFJLNMM_OFFSET))(this);
		}

		::System::Void ADHDFEOFJNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BEAFKDMJNLO_ADHDFEOFJNM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DKJOHAMHMBD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAFKDMJNLO_DKJOHAMHMBD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BEAFKDMJNLO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BEAFKDMJNLO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BEAFKDMJNLO*))((::PBYTE)hIl2Cpp + BEAFKDMJNLO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAFKDMJNLO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAFKDMJNLO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BEAFKDMJNLO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAFKDMJNLO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BEAFKDMJNLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEAFKDMJNLO*))((::PBYTE)hIl2Cpp + BEAFKDMJNLO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BEAFKDMJNLO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
