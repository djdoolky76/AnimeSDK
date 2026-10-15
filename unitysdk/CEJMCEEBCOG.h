#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEJMCEEBCOG;
class DKOPOIIBDGJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CEJMCEEBCOG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0960C0)
#define CEJMCEEBCOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0964D0)
#define CEJMCEEBCOG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E095B20)
#define CEJMCEEBCOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E095AA0)
#define CEJMCEEBCOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E095A90)
#define CEJMCEEBCOG_ELNPEDFLBBJ_OFFSET UNITYSDK_OFFSET(0x1E095BD0)
#define CEJMCEEBCOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E095D70)
#define CEJMCEEBCOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E095BF0)
#define CEJMCEEBCOG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E095BC0)
#define CEJMCEEBCOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E095EF0)
#define CEJMCEEBCOG_GJPMBLNBIEN_OFFSET UNITYSDK_OFFSET(0x1E095BE0)
#define CEJMCEEBCOG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E095A50)
#define CEJMCEEBCOG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0962E0)
#define CEJMCEEBCOG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E096190)
#define CEJMCEEBCOG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E095BB0)
#define CEJMCEEBCOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E095A80)
#define CEJMCEEBCOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E095F80)
#define CEJMCEEBCOG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E095FE0)

inline static constexpr unsigned int CEJMCEEBCOG_TypeDefinitionIndex = 34304;

	class CEJMCEEBCOG : public ::System::Object
	{
	public:
		::DKOPOIIBDGJ* GJBOLMKNBGK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CEJMCEEBCOG")->GetStaticField(0x12340);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CPDLLPMJMCN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJMCEEBCOG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CEJMCEEBCOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEJMCEEBCOG*))((::PBYTE)hIl2Cpp + CEJMCEEBCOG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEJMCEEBCOG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CEJMCEEBCOG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJMCEEBCOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CEJMCEEBCOG* Clone()
		{
			return ((::CEJMCEEBCOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJMCEEBCOG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJMCEEBCOG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEJMCEEBCOG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::DKOPOIIBDGJ* ELNPEDFLBBJ()
		{
			return ((::DKOPOIIBDGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJMCEEBCOG_ELNPEDFLBBJ_OFFSET))(this);
		}

		::System::Void GJPMBLNBIEN(::DKOPOIIBDGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKOPOIIBDGJ*))((::PBYTE)hIl2Cpp + CEJMCEEBCOG_GJPMBLNBIEN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CEJMCEEBCOG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CEJMCEEBCOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CEJMCEEBCOG*))((::PBYTE)hIl2Cpp + CEJMCEEBCOG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJMCEEBCOG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJMCEEBCOG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CEJMCEEBCOG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJMCEEBCOG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CEJMCEEBCOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEJMCEEBCOG*))((::PBYTE)hIl2Cpp + CEJMCEEBCOG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CEJMCEEBCOG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
