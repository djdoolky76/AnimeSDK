#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBEFGELEMLB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KBEFGELEMLB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7ED0B0)
#define KBEFGELEMLB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7ED410)
#define KBEFGELEMLB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7ECC10)
#define KBEFGELEMLB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7ECBD0)
#define KBEFGELEMLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7ECBC0)
#define KBEFGELEMLB_EEMCJKDKIOP_OFFSET UNITYSDK_OFFSET(0x1E7ECC90)
#define KBEFGELEMLB_EIOGEBGMJEI_OFFSET UNITYSDK_OFFSET(0x1E7ECCB0)
#define KBEFGELEMLB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7ECDB0)
#define KBEFGELEMLB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7ECCC0)
#define KBEFGELEMLB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7ECC70)
#define KBEFGELEMLB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7ECE90)
#define KBEFGELEMLB_GFNBDKJJOCC_OFFSET UNITYSDK_OFFSET(0x1E7ECCA0)
#define KBEFGELEMLB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7ECB80)
#define KBEFGELEMLB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7ED270)
#define KBEFGELEMLB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7ED220)
#define KBEFGELEMLB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7ECC60)
#define KBEFGELEMLB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7ECBB0)
#define KBEFGELEMLB_PODBMCPAPGC_OFFSET UNITYSDK_OFFSET(0x1E7ECC80)
#define KBEFGELEMLB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7ECEE0)
#define KBEFGELEMLB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7ECF40)

inline static constexpr unsigned int KBEFGELEMLB_TypeDefinitionIndex = 32054;

	class KBEFGELEMLB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::Boolean KANHAPIFLOM; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Int64 IPBKMFIBBIB; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KBEFGELEMLB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KBEFGELEMLB*>**)UnitySDK::FromName("", "KBEFGELEMLB")->GetStaticField(0xEDF0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JJALDILEIIF; // 0x0
		// static const ::System::Object OPKAOFANLJI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEFGELEMLB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KBEFGELEMLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBEFGELEMLB*))((::PBYTE)hIl2Cpp + KBEFGELEMLB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBEFGELEMLB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KBEFGELEMLB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KBEFGELEMLB*>*(*)())((::PBYTE)hIl2Cpp + KBEFGELEMLB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEFGELEMLB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KBEFGELEMLB* Clone()
		{
			return ((::KBEFGELEMLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEFGELEMLB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEFGELEMLB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KBEFGELEMLB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Int64 PODBMCPAPGC()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEFGELEMLB_PODBMCPAPGC_OFFSET))(this);
		}

		::System::Void EEMCJKDKIOP(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + KBEFGELEMLB_EEMCJKDKIOP_OFFSET))(this, a1);
		}

		::System::Boolean GFNBDKJJOCC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEFGELEMLB_GFNBDKJJOCC_OFFSET))(this);
		}

		::System::Void EIOGEBGMJEI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KBEFGELEMLB_EIOGEBGMJEI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBEFGELEMLB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KBEFGELEMLB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KBEFGELEMLB*))((::PBYTE)hIl2Cpp + KBEFGELEMLB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEFGELEMLB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEFGELEMLB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KBEFGELEMLB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEFGELEMLB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KBEFGELEMLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBEFGELEMLB*))((::PBYTE)hIl2Cpp + KBEFGELEMLB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KBEFGELEMLB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
