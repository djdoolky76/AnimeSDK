#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPHCDBFPIFB;
class KCDHBIEAFDE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BPHCDBFPIFB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E019B60)
#define BPHCDBFPIFB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E019F90)
#define BPHCDBFPIFB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0195F0)
#define BPHCDBFPIFB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E019560)
#define BPHCDBFPIFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E019550)
#define BPHCDBFPIFB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E019850)
#define BPHCDBFPIFB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0196D0)
#define BPHCDBFPIFB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E0196C0)
#define BPHCDBFPIFB_FLPDELEDIBK_OFFSET UNITYSDK_OFFSET(0x1E0196A0)
#define BPHCDBFPIFB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0199D0)
#define BPHCDBFPIFB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E019510)
#define BPHCDBFPIFB_LHJEMKJFLJK_OFFSET UNITYSDK_OFFSET(0x1E019690)
#define BPHCDBFPIFB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E019D60)
#define BPHCDBFPIFB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E019C30)
#define BPHCDBFPIFB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E0196B0)
#define BPHCDBFPIFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E019540)
#define BPHCDBFPIFB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E019A20)
#define BPHCDBFPIFB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E019A80)

inline static constexpr unsigned int BPHCDBFPIFB_TypeDefinitionIndex = 32591;

	class BPHCDBFPIFB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KCDHBIEAFDE* MGBEADJIBJM; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BPHCDBFPIFB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BPHCDBFPIFB*>**)UnitySDK::FromName("", "BPHCDBFPIFB")->GetStaticField(0x5F070);
		}

		// static const ::System::Object JMEOLDPADHB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BPHCDBFPIFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPHCDBFPIFB*))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPHCDBFPIFB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BPHCDBFPIFB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BPHCDBFPIFB*>*(*)())((::PBYTE)hIl2Cpp + BPHCDBFPIFB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BPHCDBFPIFB* Clone()
		{
			return ((::BPHCDBFPIFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_CLONE_OFFSET))(this);
		}

		::KCDHBIEAFDE* LHJEMKJFLJK()
		{
			return ((::KCDHBIEAFDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_LHJEMKJFLJK_OFFSET))(this);
		}

		::System::Void FLPDELEDIBK(::KCDHBIEAFDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCDHBIEAFDE*))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_FLPDELEDIBK_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BPHCDBFPIFB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPHCDBFPIFB*))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BPHCDBFPIFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPHCDBFPIFB*))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BPHCDBFPIFB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
