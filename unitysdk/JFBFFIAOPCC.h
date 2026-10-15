#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFBFFIAOPCC;
class MEKPDDBLCGK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JFBFFIAOPCC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6F59D0)
#define JFBFFIAOPCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6F5CB0)
#define JFBFFIAOPCC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6F55B0)
#define JFBFFIAOPCC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6F5520)
#define JFBFFIAOPCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6F54E0)
#define JFBFFIAOPCC_DNEJELCGCPK_OFFSET UNITYSDK_OFFSET(0x1E6F55E0)
#define JFBFFIAOPCC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6F5730)
#define JFBFFIAOPCC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6F55F0)
#define JFBFFIAOPCC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6F5850)
#define JFBFFIAOPCC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6F54A0)
#define JFBFFIAOPCC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6F5B10)
#define JFBFFIAOPCC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6F5A70)
#define JFBFFIAOPCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6F54D0)
#define JFBFFIAOPCC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6F58C0)
#define JFBFFIAOPCC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6F5920)

inline static constexpr unsigned int JFBFFIAOPCC_TypeDefinitionIndex = 26882;

	class JFBFFIAOPCC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::MEKPDDBLCGK*>* PCCGOLNPKIO; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::MEKPDDBLCGK*>** StaticGet_FKIAAKCNNFI()
		{
			return (::Google::Protobuf::FieldCodec_1<::MEKPDDBLCGK*>**)UnitySDK::FromName("", "JFBFFIAOPCC")->GetStaticField(0x5CB70);
		}

		static ::Google::Protobuf::MessageParser_1<::JFBFFIAOPCC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JFBFFIAOPCC*>**)UnitySDK::FromName("", "JFBFFIAOPCC")->GetStaticField(0x5CB78);
		}

		// static const ::System::Object EEIPMNOELIH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBFFIAOPCC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JFBFFIAOPCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFBFFIAOPCC*))((::PBYTE)hIl2Cpp + JFBFFIAOPCC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFBFFIAOPCC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JFBFFIAOPCC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JFBFFIAOPCC*>*(*)())((::PBYTE)hIl2Cpp + JFBFFIAOPCC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBFFIAOPCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JFBFFIAOPCC* Clone()
		{
			return ((::JFBFFIAOPCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBFFIAOPCC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MEKPDDBLCGK*>* DNEJELCGCPK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MEKPDDBLCGK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBFFIAOPCC_DNEJELCGCPK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFBFFIAOPCC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JFBFFIAOPCC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JFBFFIAOPCC*))((::PBYTE)hIl2Cpp + JFBFFIAOPCC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBFFIAOPCC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBFFIAOPCC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JFBFFIAOPCC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBFFIAOPCC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JFBFFIAOPCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFBFFIAOPCC*))((::PBYTE)hIl2Cpp + JFBFFIAOPCC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JFBFFIAOPCC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
