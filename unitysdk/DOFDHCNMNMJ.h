#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFBCEOICLAB;
class DOFDHCNMNMJ;
class EJCCCIGMHOM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DOFDHCNMNMJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E200600)
#define DOFDHCNMNMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E200BB0)
#define DOFDHCNMNMJ_CHJDPHDGMBD_OFFSET UNITYSDK_OFFSET(0x1E1FFF90)
#define DOFDHCNMNMJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1FFE60)
#define DOFDHCNMNMJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1FFD80)
#define DOFDHCNMNMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1FFD70)
#define DOFDHCNMNMJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2001E0)
#define DOFDHCNMNMJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1FFFB0)
#define DOFDHCNMNMJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1FFF60)
#define DOFDHCNMNMJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E200410)
#define DOFDHCNMNMJ_GPCIDCAANHB_OFFSET UNITYSDK_OFFSET(0x1E1FFF70)
#define DOFDHCNMNMJ_JDLIMFLEDNJ_OFFSET UNITYSDK_OFFSET(0x1E1FFF80)
#define DOFDHCNMNMJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1FFD30)
#define DOFDHCNMNMJ_KFEEOKFJILG_OFFSET UNITYSDK_OFFSET(0x1E1FFFA0)
#define DOFDHCNMNMJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2008D0)
#define DOFDHCNMNMJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E200700)
#define DOFDHCNMNMJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1FFF50)
#define DOFDHCNMNMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1FFD60)
#define DOFDHCNMNMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E200460)
#define DOFDHCNMNMJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2004C0)

inline static constexpr unsigned int DOFDHCNMNMJ_TypeDefinitionIndex = 28378;

	class DOFDHCNMNMJ : public ::System::Object
	{
	public:
		::EJCCCIGMHOM* OKBMHHFOEMO; // 0x10
		::BFBCEOICLAB* ODEBGOBLILD; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DOFDHCNMNMJ")->GetStaticField(0x41CC0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IFAMDLCBOAE; // 0x0
		// static const ::System::Object PHPIFEOCONP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFDHCNMNMJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DOFDHCNMNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOFDHCNMNMJ*))((::PBYTE)hIl2Cpp + DOFDHCNMNMJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOFDHCNMNMJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DOFDHCNMNMJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFDHCNMNMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DOFDHCNMNMJ* Clone()
		{
			return ((::DOFDHCNMNMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFDHCNMNMJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFDHCNMNMJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOFDHCNMNMJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::BFBCEOICLAB* GPCIDCAANHB()
		{
			return ((::BFBCEOICLAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFDHCNMNMJ_GPCIDCAANHB_OFFSET))(this);
		}

		::System::Void JDLIMFLEDNJ(::BFBCEOICLAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFBCEOICLAB*))((::PBYTE)hIl2Cpp + DOFDHCNMNMJ_JDLIMFLEDNJ_OFFSET))(this, a1);
		}

		::EJCCCIGMHOM* CHJDPHDGMBD()
		{
			return ((::EJCCCIGMHOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFDHCNMNMJ_CHJDPHDGMBD_OFFSET))(this);
		}

		::System::Void KFEEOKFJILG(::EJCCCIGMHOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJCCCIGMHOM*))((::PBYTE)hIl2Cpp + DOFDHCNMNMJ_KFEEOKFJILG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DOFDHCNMNMJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DOFDHCNMNMJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DOFDHCNMNMJ*))((::PBYTE)hIl2Cpp + DOFDHCNMNMJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFDHCNMNMJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFDHCNMNMJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DOFDHCNMNMJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFDHCNMNMJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DOFDHCNMNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOFDHCNMNMJ*))((::PBYTE)hIl2Cpp + DOFDHCNMNMJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DOFDHCNMNMJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
