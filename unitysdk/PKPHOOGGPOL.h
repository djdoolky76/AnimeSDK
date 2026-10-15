#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOPODAHBPFH;
class PKPHOOGGPOL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PKPHOOGGPOL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF98120)
#define PKPHOOGGPOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF98420)
#define PKPHOOGGPOL_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF97CA0)
#define PKPHOOGGPOL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF97BF0)
#define PKPHOOGGPOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF97BA0)
#define PKPHOOGGPOL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF97E80)
#define PKPHOOGGPOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF97D00)
#define PKPHOOGGPOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF97FA0)
#define PKPHOOGGPOL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF97B30)
#define PKPHOOGGPOL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF98260)
#define PKPHOOGGPOL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF981C0)
#define PKPHOOGGPOL_NMDHPAJPKOB_OFFSET UNITYSDK_OFFSET(0x1DF97CF0)
#define PKPHOOGGPOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF97B90)
#define PKPHOOGGPOL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF98010)
#define PKPHOOGGPOL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF98070)

inline static constexpr unsigned int PKPHOOGGPOL_TypeDefinitionIndex = 31688;

	class PKPHOOGGPOL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::AOPODAHBPFH*>* HLGOGOCKLNI; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_KGEBDCIACDJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PKPHOOGGPOL")->GetStaticField(0x4AB10);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PKPHOOGGPOL")->GetStaticField(0x4AB18);
		}

		// static const ::System::Object JBDHCEMPLGC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPHOOGGPOL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PKPHOOGGPOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKPHOOGGPOL*))((::PBYTE)hIl2Cpp + PKPHOOGGPOL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKPHOOGGPOL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PKPHOOGGPOL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPHOOGGPOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PKPHOOGGPOL* Clone()
		{
			return ((::PKPHOOGGPOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPHOOGGPOL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AOPODAHBPFH*>* NMDHPAJPKOB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AOPODAHBPFH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPHOOGGPOL_NMDHPAJPKOB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKPHOOGGPOL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PKPHOOGGPOL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PKPHOOGGPOL*))((::PBYTE)hIl2Cpp + PKPHOOGGPOL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPHOOGGPOL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPHOOGGPOL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PKPHOOGGPOL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPHOOGGPOL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PKPHOOGGPOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKPHOOGGPOL*))((::PBYTE)hIl2Cpp + PKPHOOGGPOL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PKPHOOGGPOL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
