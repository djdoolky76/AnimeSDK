#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJLFDFFBOHM.h"
#include "unitysdk/System/Object.h"
class AFJAOKMCFEB;
class LCCJKNEADPL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AFJAOKMCFEB_BHCGNNPIAJG_OFFSET UNITYSDK_OFFSET(0x1E1183F0)
#define AFJAOKMCFEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1188B0)
#define AFJAOKMCFEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E118BE0)
#define AFJAOKMCFEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E118350)
#define AFJAOKMCFEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1182E0)
#define AFJAOKMCFEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1182D0)
#define AFJAOKMCFEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E118590)
#define AFJAOKMCFEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E118410)
#define AFJAOKMCFEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E118710)
#define AFJAOKMCFEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E118290)
#define AFJAOKMCFEB_KNJEAKADGHO_OFFSET UNITYSDK_OFFSET(0x1E1183E0)
#define AFJAOKMCFEB_MCDGPMDABFE_OFFSET UNITYSDK_OFFSET(0x1E1183D0)
#define AFJAOKMCFEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E118A40)
#define AFJAOKMCFEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1189C0)
#define AFJAOKMCFEB_OLFFAPLBHMG_OFFSET UNITYSDK_OFFSET(0x1E118400)
#define AFJAOKMCFEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1182C0)
#define AFJAOKMCFEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E118760)
#define AFJAOKMCFEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1187C0)

inline static constexpr unsigned int AFJAOKMCFEB_TypeDefinitionIndex = 26525;

	class AFJAOKMCFEB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::LCCJKNEADPL* MOPOGJGJICC; // 0x18
		::CJLFDFFBOHM LLNJDFDFMDM; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AFJAOKMCFEB")->GetStaticField(0x2E760);
		}

		// static const ::System::Object EDKMCLPFFOE; // 0x0
		// static const ::System::Object OFAPNMPMGIA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJAOKMCFEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AFJAOKMCFEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFJAOKMCFEB*))((::PBYTE)hIl2Cpp + AFJAOKMCFEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFJAOKMCFEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AFJAOKMCFEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJAOKMCFEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AFJAOKMCFEB* Clone()
		{
			return ((::AFJAOKMCFEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJAOKMCFEB_CLONE_OFFSET))(this);
		}

		::LCCJKNEADPL* MCDGPMDABFE()
		{
			return ((::LCCJKNEADPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJAOKMCFEB_MCDGPMDABFE_OFFSET))(this);
		}

		::System::Void KNJEAKADGHO(::LCCJKNEADPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCCJKNEADPL*))((::PBYTE)hIl2Cpp + AFJAOKMCFEB_KNJEAKADGHO_OFFSET))(this, a1);
		}

		::CJLFDFFBOHM BHCGNNPIAJG()
		{
			return ((::CJLFDFFBOHM(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJAOKMCFEB_BHCGNNPIAJG_OFFSET))(this);
		}

		::System::Void OLFFAPLBHMG(::CJLFDFFBOHM a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJLFDFFBOHM))((::PBYTE)hIl2Cpp + AFJAOKMCFEB_OLFFAPLBHMG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFJAOKMCFEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AFJAOKMCFEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AFJAOKMCFEB*))((::PBYTE)hIl2Cpp + AFJAOKMCFEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJAOKMCFEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJAOKMCFEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AFJAOKMCFEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJAOKMCFEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AFJAOKMCFEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFJAOKMCFEB*))((::PBYTE)hIl2Cpp + AFJAOKMCFEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AFJAOKMCFEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
