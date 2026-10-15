#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDMLMJECLCD;
class LDLCMMOPKNG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GDMLMJECLCD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E421C40)
#define GDMLMJECLCD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E421F30)
#define GDMLMJECLCD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4216F0)
#define GDMLMJECLCD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E421680)
#define GDMLMJECLCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E421670)
#define GDMLMJECLCD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E421930)
#define GDMLMJECLCD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4217B0)
#define GDMLMJECLCD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4217A0)
#define GDMLMJECLCD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E421AB0)
#define GDMLMJECLCD_GPCIDCAANHB_OFFSET UNITYSDK_OFFSET(0x1E421770)
#define GDMLMJECLCD_JDLIMFLEDNJ_OFFSET UNITYSDK_OFFSET(0x1E421780)
#define GDMLMJECLCD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E421630)
#define GDMLMJECLCD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E421D90)
#define GDMLMJECLCD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E421D10)
#define GDMLMJECLCD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E421790)
#define GDMLMJECLCD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E421660)
#define GDMLMJECLCD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E421B00)
#define GDMLMJECLCD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E421B60)

inline static constexpr unsigned int GDMLMJECLCD_TypeDefinitionIndex = 28151;

	class GDMLMJECLCD : public ::System::Object
	{
	public:
		::LDLCMMOPKNG* ODEBGOBLILD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GDMLMJECLCD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GDMLMJECLCD*>**)UnitySDK::FromName("", "GDMLMJECLCD")->GetStaticField(0x10490);
		}

		// static const ::System::Object IFAMDLCBOAE; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMLMJECLCD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GDMLMJECLCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDMLMJECLCD*))((::PBYTE)hIl2Cpp + GDMLMJECLCD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDMLMJECLCD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GDMLMJECLCD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GDMLMJECLCD*>*(*)())((::PBYTE)hIl2Cpp + GDMLMJECLCD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMLMJECLCD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GDMLMJECLCD* Clone()
		{
			return ((::GDMLMJECLCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMLMJECLCD_CLONE_OFFSET))(this);
		}

		::LDLCMMOPKNG* GPCIDCAANHB()
		{
			return ((::LDLCMMOPKNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMLMJECLCD_GPCIDCAANHB_OFFSET))(this);
		}

		::System::Void JDLIMFLEDNJ(::LDLCMMOPKNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDLCMMOPKNG*))((::PBYTE)hIl2Cpp + GDMLMJECLCD_JDLIMFLEDNJ_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMLMJECLCD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDMLMJECLCD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GDMLMJECLCD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GDMLMJECLCD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GDMLMJECLCD*))((::PBYTE)hIl2Cpp + GDMLMJECLCD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMLMJECLCD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMLMJECLCD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GDMLMJECLCD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMLMJECLCD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GDMLMJECLCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDMLMJECLCD*))((::PBYTE)hIl2Cpp + GDMLMJECLCD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GDMLMJECLCD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
