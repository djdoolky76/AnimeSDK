#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOPODGPDKMO.h"
#include "unitysdk/System/Object.h"
class ANJMHNEPNBP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ANJMHNEPNBP_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E662150)
#define ANJMHNEPNBP_AHIPHGGFFFD_OFFSET UNITYSDK_OFFSET(0x1E662160)
#define ANJMHNEPNBP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E662520)
#define ANJMHNEPNBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6628E0)
#define ANJMHNEPNBP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6620D0)
#define ANJMHNEPNBP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E662090)
#define ANJMHNEPNBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E662080)
#define ANJMHNEPNBP_EGNMMOBDGEH_OFFSET UNITYSDK_OFFSET(0x1E662170)
#define ANJMHNEPNBP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E662260)
#define ANJMHNEPNBP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E662180)
#define ANJMHNEPNBP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E662330)
#define ANJMHNEPNBP_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E662140)
#define ANJMHNEPNBP_IANLAJHINMC_OFFSET UNITYSDK_OFFSET(0x1E662130)
#define ANJMHNEPNBP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E662040)
#define ANJMHNEPNBP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E662740)
#define ANJMHNEPNBP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6626F0)
#define ANJMHNEPNBP_OPDJCLIDOCA_OFFSET UNITYSDK_OFFSET(0x1E662120)
#define ANJMHNEPNBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E662070)
#define ANJMHNEPNBP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E662360)
#define ANJMHNEPNBP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6623C0)

inline static constexpr unsigned int ANJMHNEPNBP_TypeDefinitionIndex = 32276;

	class ANJMHNEPNBP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IBEBBFIHLLP; // 0x18
		::System::UInt32 OEPOBIODAJH; // 0x1C
		::EOPODGPDKMO ECAFPCEHCCL; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ANJMHNEPNBP")->GetStaticField(0x3F540);
		}

		// static const ::System::Object BPLJLIMECGH; // 0x0
		// static const ::System::Object AODKNNMBGAD; // 0x0
		// static const ::System::Object OCNAFOBAIOO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJMHNEPNBP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ANJMHNEPNBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANJMHNEPNBP*))((::PBYTE)hIl2Cpp + ANJMHNEPNBP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANJMHNEPNBP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ANJMHNEPNBP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJMHNEPNBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ANJMHNEPNBP* Clone()
		{
			return ((::ANJMHNEPNBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJMHNEPNBP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OPDJCLIDOCA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJMHNEPNBP_OPDJCLIDOCA_OFFSET))(this);
		}

		::System::Void IANLAJHINMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ANJMHNEPNBP_IANLAJHINMC_OFFSET))(this, a1);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJMHNEPNBP_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ANJMHNEPNBP_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::EOPODGPDKMO AHIPHGGFFFD()
		{
			return ((::EOPODGPDKMO(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJMHNEPNBP_AHIPHGGFFFD_OFFSET))(this);
		}

		::System::Void EGNMMOBDGEH(::EOPODGPDKMO a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOPODGPDKMO))((::PBYTE)hIl2Cpp + ANJMHNEPNBP_EGNMMOBDGEH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANJMHNEPNBP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ANJMHNEPNBP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ANJMHNEPNBP*))((::PBYTE)hIl2Cpp + ANJMHNEPNBP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJMHNEPNBP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJMHNEPNBP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ANJMHNEPNBP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJMHNEPNBP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ANJMHNEPNBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANJMHNEPNBP*))((::PBYTE)hIl2Cpp + ANJMHNEPNBP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ANJMHNEPNBP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
