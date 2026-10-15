#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DECBOGPHHLN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DECBOGPHHLN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E162750)
#define DECBOGPHHLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1629B0)
#define DECBOGPHHLN_CFBHMJGEFJE_OFFSET UNITYSDK_OFFSET(0x1E162380)
#define DECBOGPHHLN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E162350)
#define DECBOGPHHLN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1622C0)
#define DECBOGPHHLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E162270)
#define DECBOGPHHLN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E162480)
#define DECBOGPHHLN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E162390)
#define DECBOGPHHLN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E162570)
#define DECBOGPHHLN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E162230)
#define DECBOGPHHLN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E162810)
#define DECBOGPHHLN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1627C0)
#define DECBOGPHHLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E162260)
#define DECBOGPHHLN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E162670)
#define DECBOGPHHLN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1626D0)

inline static constexpr unsigned int DECBOGPHHLN_TypeDefinitionIndex = 31430;

	class DECBOGPHHLN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FAJOJEOLBHL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DECBOGPHHLN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DECBOGPHHLN*>**)UnitySDK::FromName("", "DECBOGPHHLN")->GetStaticField(0x2BF90);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CMBILFBLHHA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "DECBOGPHHLN")->GetStaticField(0x2BF98);
		}

		// static const ::System::Object HLBJDPHKNOB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECBOGPHHLN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DECBOGPHHLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DECBOGPHHLN*))((::PBYTE)hIl2Cpp + DECBOGPHHLN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DECBOGPHHLN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DECBOGPHHLN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DECBOGPHHLN*>*(*)())((::PBYTE)hIl2Cpp + DECBOGPHHLN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DECBOGPHHLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DECBOGPHHLN* Clone()
		{
			return ((::DECBOGPHHLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DECBOGPHHLN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CFBHMJGEFJE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DECBOGPHHLN_CFBHMJGEFJE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DECBOGPHHLN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DECBOGPHHLN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DECBOGPHHLN*))((::PBYTE)hIl2Cpp + DECBOGPHHLN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DECBOGPHHLN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DECBOGPHHLN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DECBOGPHHLN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DECBOGPHHLN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DECBOGPHHLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DECBOGPHHLN*))((::PBYTE)hIl2Cpp + DECBOGPHHLN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DECBOGPHHLN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
