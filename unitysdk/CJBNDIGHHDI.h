#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJBNDIGHHDI;
class MDLPIFCHFPJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CJBNDIGHHDI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0DAE30)
#define CJBNDIGHHDI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0DB100)
#define CJBNDIGHHDI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0DA830)
#define CJBNDIGHHDI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0DA710)
#define CJBNDIGHHDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0DA700)
#define CJBNDIGHHDI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0DAB20)
#define CJBNDIGHHDI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0DA9A0)
#define CJBNDIGHHDI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E0DA990)
#define CJBNDIGHHDI_FLLHIBEOGJD_OFFSET UNITYSDK_OFFSET(0x1E0DA970)
#define CJBNDIGHHDI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0DACA0)
#define CJBNDIGHHDI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0DA6C0)
#define CJBNDIGHHDI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0DAF70)
#define CJBNDIGHHDI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0DAF00)
#define CJBNDIGHHDI_MMOKNHFMPDA_OFFSET UNITYSDK_OFFSET(0x1E0DA960)
#define CJBNDIGHHDI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E0DA980)
#define CJBNDIGHHDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0DA6F0)
#define CJBNDIGHHDI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0DACF0)
#define CJBNDIGHHDI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0DAD50)

	class CJBNDIGHHDI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::MDLPIFCHFPJ* IDEANDBNCNN; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CJBNDIGHHDI")->GetStaticField(0x18E40);
		}

		// static const ::System::Object FMIPLNJFOAF; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBNDIGHHDI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CJBNDIGHHDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJBNDIGHHDI*))((::PBYTE)hIl2Cpp + CJBNDIGHHDI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJBNDIGHHDI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CJBNDIGHHDI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBNDIGHHDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CJBNDIGHHDI* Clone()
		{
			return ((::CJBNDIGHHDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBNDIGHHDI_CLONE_OFFSET))(this);
		}

		::MDLPIFCHFPJ* MMOKNHFMPDA()
		{
			return ((::MDLPIFCHFPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBNDIGHHDI_MMOKNHFMPDA_OFFSET))(this);
		}

		::System::Void FLLHIBEOGJD(::MDLPIFCHFPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDLPIFCHFPJ*))((::PBYTE)hIl2Cpp + CJBNDIGHHDI_FLLHIBEOGJD_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBNDIGHHDI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJBNDIGHHDI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJBNDIGHHDI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CJBNDIGHHDI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJBNDIGHHDI*))((::PBYTE)hIl2Cpp + CJBNDIGHHDI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBNDIGHHDI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBNDIGHHDI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CJBNDIGHHDI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBNDIGHHDI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CJBNDIGHHDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJBNDIGHHDI*))((::PBYTE)hIl2Cpp + CJBNDIGHHDI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CJBNDIGHHDI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
