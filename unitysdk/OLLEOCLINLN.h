#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLLEOCLINLN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OLLEOCLINLN_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1DEA8A30)
#define OLLEOCLINLN_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1DEA8A40)
#define OLLEOCLINLN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEA8D70)
#define OLLEOCLINLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEA9040)
#define OLLEOCLINLN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEA89C0)
#define OLLEOCLINLN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEA8990)
#define OLLEOCLINLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA8980)
#define OLLEOCLINLN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEA8B30)
#define OLLEOCLINLN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEA8A50)
#define OLLEOCLINLN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DEA8A20)
#define OLLEOCLINLN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEA8C00)
#define OLLEOCLINLN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEA8940)
#define OLLEOCLINLN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEA8EC0)
#define OLLEOCLINLN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEA8E80)
#define OLLEOCLINLN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DEA8A10)
#define OLLEOCLINLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEA8970)
#define OLLEOCLINLN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEA8C30)
#define OLLEOCLINLN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEA8C90)

inline static constexpr unsigned int OLLEOCLINLN_TypeDefinitionIndex = 26348;

	class OLLEOCLINLN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OLLEOCLINLN")->GetStaticField(0x239F0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLEOCLINLN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OLLEOCLINLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLLEOCLINLN*))((::PBYTE)hIl2Cpp + OLLEOCLINLN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLLEOCLINLN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OLLEOCLINLN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLEOCLINLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OLLEOCLINLN* Clone()
		{
			return ((::OLLEOCLINLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLEOCLINLN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLEOCLINLN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLLEOCLINLN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLEOCLINLN_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLLEOCLINLN_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OLLEOCLINLN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OLLEOCLINLN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OLLEOCLINLN*))((::PBYTE)hIl2Cpp + OLLEOCLINLN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLEOCLINLN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLEOCLINLN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OLLEOCLINLN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLEOCLINLN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OLLEOCLINLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLLEOCLINLN*))((::PBYTE)hIl2Cpp + OLLEOCLINLN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OLLEOCLINLN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
