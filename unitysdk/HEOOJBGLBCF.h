#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEOOJBGLBCF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HEOOJBGLBCF_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E55E180)
#define HEOOJBGLBCF_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E55E190)
#define HEOOJBGLBCF_BFDHHFIDCPH_OFFSET UNITYSDK_OFFSET(0x1E55E160)
#define HEOOJBGLBCF_BIBGDBLHCMC_OFFSET UNITYSDK_OFFSET(0x1E55E170)
#define HEOOJBGLBCF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E55E570)
#define HEOOJBGLBCF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E55E880)
#define HEOOJBGLBCF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E55E0F0)
#define HEOOJBGLBCF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E55E0B0)
#define HEOOJBGLBCF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E55E0A0)
#define HEOOJBGLBCF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E55E290)
#define HEOOJBGLBCF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E55E1A0)
#define HEOOJBGLBCF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E55E150)
#define HEOOJBGLBCF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E55E370)
#define HEOOJBGLBCF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E55E060)
#define HEOOJBGLBCF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E55E6E0)
#define HEOOJBGLBCF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E55E690)
#define HEOOJBGLBCF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E55E140)
#define HEOOJBGLBCF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E55E090)
#define HEOOJBGLBCF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E55E3A0)
#define HEOOJBGLBCF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E55E400)

inline static constexpr unsigned int HEOOJBGLBCF_TypeDefinitionIndex = 26374;

	class HEOOJBGLBCF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean JINNBFBIMII; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 LJDBCGPFFDH; // 0x1C
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HEOOJBGLBCF")->GetStaticField(0x33600);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CHFMCEKHLAE; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOOJBGLBCF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HEOOJBGLBCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEOOJBGLBCF*))((::PBYTE)hIl2Cpp + HEOOJBGLBCF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEOOJBGLBCF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HEOOJBGLBCF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOOJBGLBCF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HEOOJBGLBCF* Clone()
		{
			return ((::HEOOJBGLBCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOOJBGLBCF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOOJBGLBCF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HEOOJBGLBCF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean BFDHHFIDCPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOOJBGLBCF_BFDHHFIDCPH_OFFSET))(this);
		}

		::System::Void BIBGDBLHCMC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEOOJBGLBCF_BIBGDBLHCMC_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOOJBGLBCF_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HEOOJBGLBCF_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEOOJBGLBCF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HEOOJBGLBCF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HEOOJBGLBCF*))((::PBYTE)hIl2Cpp + HEOOJBGLBCF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOOJBGLBCF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOOJBGLBCF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HEOOJBGLBCF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOOJBGLBCF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HEOOJBGLBCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEOOJBGLBCF*))((::PBYTE)hIl2Cpp + HEOOJBGLBCF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HEOOJBGLBCF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
