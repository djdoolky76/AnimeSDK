#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBONEFMPKKO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HBONEFMPKKO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x200B12A0)
#define HBONEFMPKKO_CCTOR_OFFSET UNITYSDK_OFFSET(0x200B1570)
#define HBONEFMPKKO_CLONE_OFFSET UNITYSDK_OFFSET(0x200B0EA0)
#define HBONEFMPKKO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x200B0E70)
#define HBONEFMPKKO_CTOR_OFFSET UNITYSDK_OFFSET(0x200B0E60)
#define HBONEFMPKKO_DIMJCMKNKCF_OFFSET UNITYSDK_OFFSET(0x200B0F40)
#define HBONEFMPKKO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x200B1060)
#define HBONEFMPKKO_EQUALS_OFFSET UNITYSDK_OFFSET(0x200B0F50)
#define HBONEFMPKKO_FJNIJBIIFGO_OFFSET UNITYSDK_OFFSET(0x200B0F10)
#define HBONEFMPKKO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x200B1130)
#define HBONEFMPKKO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x200B0DF0)
#define HBONEFMPKKO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x200B13F0)
#define HBONEFMPKKO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x200B13B0)
#define HBONEFMPKKO_NGCIBAOKDNB_OFFSET UNITYSDK_OFFSET(0x200B0F20)
#define HBONEFMPKKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x200B0E50)
#define HBONEFMPKKO_PJCHNNBNKJH_OFFSET UNITYSDK_OFFSET(0x200B0F30)
#define HBONEFMPKKO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x200B1160)
#define HBONEFMPKKO_WRITETO_OFFSET UNITYSDK_OFFSET(0x200B11C0)

inline static constexpr unsigned int HBONEFMPKKO_TypeDefinitionIndex = 32686;

	class HBONEFMPKKO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NDFIDCNNGMJ; // 0x18
		::System::UInt32 MDGPBFBDKBB; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::HBONEFMPKKO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HBONEFMPKKO*>**)UnitySDK::FromName("", "HBONEFMPKKO")->GetStaticField(0x215A0);
		}

		// static const ::System::Object KLJANMLJHEF; // 0x0
		// static const ::System::Object OEGGGHCBMPO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBONEFMPKKO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HBONEFMPKKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBONEFMPKKO*))((::PBYTE)hIl2Cpp + HBONEFMPKKO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBONEFMPKKO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HBONEFMPKKO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HBONEFMPKKO*>*(*)())((::PBYTE)hIl2Cpp + HBONEFMPKKO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBONEFMPKKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HBONEFMPKKO* Clone()
		{
			return ((::HBONEFMPKKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBONEFMPKKO_CLONE_OFFSET))(this);
		}

		::System::UInt32 FJNIJBIIFGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBONEFMPKKO_FJNIJBIIFGO_OFFSET))(this);
		}

		::System::Void NGCIBAOKDNB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBONEFMPKKO_NGCIBAOKDNB_OFFSET))(this, a1);
		}

		::System::UInt32 PJCHNNBNKJH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBONEFMPKKO_PJCHNNBNKJH_OFFSET))(this);
		}

		::System::Void DIMJCMKNKCF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBONEFMPKKO_DIMJCMKNKCF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBONEFMPKKO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HBONEFMPKKO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBONEFMPKKO*))((::PBYTE)hIl2Cpp + HBONEFMPKKO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBONEFMPKKO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBONEFMPKKO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HBONEFMPKKO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBONEFMPKKO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HBONEFMPKKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBONEFMPKKO*))((::PBYTE)hIl2Cpp + HBONEFMPKKO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HBONEFMPKKO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
