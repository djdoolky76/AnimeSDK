#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAGGFIOGHGE;
class JMBNHAFHIHM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JMBNHAFHIHM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E789980)
#define JMBNHAFHIHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E789C80)
#define JMBNHAFHIHM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E789500)
#define JMBNHAFHIHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E789450)
#define JMBNHAFHIHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E789400)
#define JMBNHAFHIHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7896E0)
#define JMBNHAFHIHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E789560)
#define JMBNHAFHIHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E789800)
#define JMBNHAFHIHM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E789390)
#define JMBNHAFHIHM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E789AC0)
#define JMBNHAFHIHM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E789A20)
#define JMBNHAFHIHM_MIKIBALLCKG_OFFSET UNITYSDK_OFFSET(0x1E789550)
#define JMBNHAFHIHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7893F0)
#define JMBNHAFHIHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E789870)
#define JMBNHAFHIHM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7898D0)

inline static constexpr unsigned int JMBNHAFHIHM_TypeDefinitionIndex = 31747;

	class JMBNHAFHIHM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::DAGGFIOGHGE*>* HHODEPAFMKM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JMBNHAFHIHM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JMBNHAFHIHM*>**)UnitySDK::FromName("", "JMBNHAFHIHM")->GetStaticField(0x6BF80);
		}

		static ::Google::Protobuf::FieldCodec_1<::DAGGFIOGHGE*>** StaticGet_HMLCPOGHMJG()
		{
			return (::Google::Protobuf::FieldCodec_1<::DAGGFIOGHGE*>**)UnitySDK::FromName("", "JMBNHAFHIHM")->GetStaticField(0x6BF88);
		}

		// static const ::System::Object KAFDADLIOED; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMBNHAFHIHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JMBNHAFHIHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMBNHAFHIHM*))((::PBYTE)hIl2Cpp + JMBNHAFHIHM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMBNHAFHIHM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JMBNHAFHIHM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JMBNHAFHIHM*>*(*)())((::PBYTE)hIl2Cpp + JMBNHAFHIHM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMBNHAFHIHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JMBNHAFHIHM* Clone()
		{
			return ((::JMBNHAFHIHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMBNHAFHIHM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DAGGFIOGHGE*>* MIKIBALLCKG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DAGGFIOGHGE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMBNHAFHIHM_MIKIBALLCKG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JMBNHAFHIHM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JMBNHAFHIHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JMBNHAFHIHM*))((::PBYTE)hIl2Cpp + JMBNHAFHIHM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMBNHAFHIHM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMBNHAFHIHM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JMBNHAFHIHM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMBNHAFHIHM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JMBNHAFHIHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMBNHAFHIHM*))((::PBYTE)hIl2Cpp + JMBNHAFHIHM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JMBNHAFHIHM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
