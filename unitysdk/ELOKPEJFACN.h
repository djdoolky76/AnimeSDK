#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELOKPEJFACN;
class POBLGKIGINE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ELOKPEJFACN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2D90F0)
#define ELOKPEJFACN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D9450)
#define ELOKPEJFACN_CIOGAGDPMJN_OFFSET UNITYSDK_OFFSET(0x1E2D8C60)
#define ELOKPEJFACN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2D8BA0)
#define ELOKPEJFACN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2D8B20)
#define ELOKPEJFACN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D8B10)
#define ELOKPEJFACN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2D8DF0)
#define ELOKPEJFACN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2D8C70)
#define ELOKPEJFACN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2D8C40)
#define ELOKPEJFACN_FENEPOCNAPP_OFFSET UNITYSDK_OFFSET(0x1E2D8C50)
#define ELOKPEJFACN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2D8F70)
#define ELOKPEJFACN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2D8AD0)
#define ELOKPEJFACN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2D9280)
#define ELOKPEJFACN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2D91C0)
#define ELOKPEJFACN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2D8C30)
#define ELOKPEJFACN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2D8B00)
#define ELOKPEJFACN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2D8FB0)
#define ELOKPEJFACN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2D9010)

inline static constexpr unsigned int ELOKPEJFACN_TypeDefinitionIndex = 34229;

	class ELOKPEJFACN : public ::System::Object
	{
	public:
		::POBLGKIGINE* ODAIMKHGFAB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ELOKPEJFACN")->GetStaticField(0x51C00);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LNNFMNLEBGM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOKPEJFACN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ELOKPEJFACN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELOKPEJFACN*))((::PBYTE)hIl2Cpp + ELOKPEJFACN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELOKPEJFACN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ELOKPEJFACN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOKPEJFACN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ELOKPEJFACN* Clone()
		{
			return ((::ELOKPEJFACN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOKPEJFACN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOKPEJFACN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ELOKPEJFACN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::POBLGKIGINE* FENEPOCNAPP()
		{
			return ((::POBLGKIGINE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOKPEJFACN_FENEPOCNAPP_OFFSET))(this);
		}

		::System::Void CIOGAGDPMJN(::POBLGKIGINE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POBLGKIGINE*))((::PBYTE)hIl2Cpp + ELOKPEJFACN_CIOGAGDPMJN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ELOKPEJFACN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ELOKPEJFACN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ELOKPEJFACN*))((::PBYTE)hIl2Cpp + ELOKPEJFACN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOKPEJFACN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOKPEJFACN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ELOKPEJFACN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOKPEJFACN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ELOKPEJFACN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELOKPEJFACN*))((::PBYTE)hIl2Cpp + ELOKPEJFACN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ELOKPEJFACN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
