#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNFCJPEGJFL;
class LDLCMMOPKNG;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BNFCJPEGJFL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E031C30)
#define BNFCJPEGJFL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E031FD0)
#define BNFCJPEGJFL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0314B0)
#define BNFCJPEGJFL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E031400)
#define BNFCJPEGJFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0313F0)
#define BNFCJPEGJFL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E031800)
#define BNFCJPEGJFL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0315D0)
#define BNFCJPEGJFL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E0315A0)
#define BNFCJPEGJFL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E031A30)
#define BNFCJPEGJFL_GPCIDCAANHB_OFFSET UNITYSDK_OFFSET(0x1E031570)
#define BNFCJPEGJFL_HAJMFMBBHPO_OFFSET UNITYSDK_OFFSET(0x1E0315B0)
#define BNFCJPEGJFL_JDLIMFLEDNJ_OFFSET UNITYSDK_OFFSET(0x1E031580)
#define BNFCJPEGJFL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0313B0)
#define BNFCJPEGJFL_KAGANILCAKB_OFFSET UNITYSDK_OFFSET(0x1E0315C0)
#define BNFCJPEGJFL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E031E00)
#define BNFCJPEGJFL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E031D40)
#define BNFCJPEGJFL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E031590)
#define BNFCJPEGJFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0313E0)
#define BNFCJPEGJFL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E031A90)
#define BNFCJPEGJFL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E031AF0)

	class BNFCJPEGJFL : public ::System::Object
	{
	public:
		::LDLCMMOPKNG* ODEBGOBLILD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::NNPGLCGNICI* MICKHJJBFIM; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BNFCJPEGJFL")->GetStaticField(0x52120);
		}

		// static const ::System::Object IFAMDLCBOAE; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object PODCILAGFIH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BNFCJPEGJFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNFCJPEGJFL*))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNFCJPEGJFL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BNFCJPEGJFL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BNFCJPEGJFL* Clone()
		{
			return ((::BNFCJPEGJFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_CLONE_OFFSET))(this);
		}

		::LDLCMMOPKNG* GPCIDCAANHB()
		{
			return ((::LDLCMMOPKNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_GPCIDCAANHB_OFFSET))(this);
		}

		::System::Void JDLIMFLEDNJ(::LDLCMMOPKNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDLCMMOPKNG*))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_JDLIMFLEDNJ_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::NNPGLCGNICI* HAJMFMBBHPO()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_HAJMFMBBHPO_OFFSET))(this);
		}

		::System::Void KAGANILCAKB(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_KAGANILCAKB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BNFCJPEGJFL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BNFCJPEGJFL*))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BNFCJPEGJFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNFCJPEGJFL*))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
