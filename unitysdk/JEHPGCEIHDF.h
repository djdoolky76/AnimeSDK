#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEHPGCEIHDF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JEHPGCEIHDF_AGEKDECKNGG_OFFSET UNITYSDK_OFFSET(0x1E71B460)
#define JEHPGCEIHDF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E71BB10)
#define JEHPGCEIHDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E71BFB0)
#define JEHPGCEIHDF_CFBOFCFIIGN_OFFSET UNITYSDK_OFFSET(0x1E71B530)
#define JEHPGCEIHDF_CHGHEAPFJNJ_OFFSET UNITYSDK_OFFSET(0x1E71B4B0)
#define JEHPGCEIHDF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E71B3C0)
#define JEHPGCEIHDF_CMLEECEPMKF_OFFSET UNITYSDK_OFFSET(0x1E71B4E0)
#define JEHPGCEIHDF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E71B360)
#define JEHPGCEIHDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E71B340)
#define JEHPGCEIHDF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E71B640)
#define JEHPGCEIHDF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E71B590)
#define JEHPGCEIHDF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E71B6E0)
#define JEHPGCEIHDF_GFFLMNPLHJG_OFFSET UNITYSDK_OFFSET(0x1E71B480)
#define JEHPGCEIHDF_IDNFENJBNPP_OFFSET UNITYSDK_OFFSET(0x1E71B450)
#define JEHPGCEIHDF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E71B2D0)
#define JEHPGCEIHDF_KPPEBLNNKGL_OFFSET UNITYSDK_OFFSET(0x1E71B4A0)
#define JEHPGCEIHDF_LKGDLCHAMMP_OFFSET UNITYSDK_OFFSET(0x1E71B4D0)
#define JEHPGCEIHDF_LMHIIJPBFPJ_OFFSET UNITYSDK_OFFSET(0x1E71B490)
#define JEHPGCEIHDF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E71BE70)
#define JEHPGCEIHDF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E71BDF0)
#define JEHPGCEIHDF_NGDLJINJKJP_OFFSET UNITYSDK_OFFSET(0x1E71B470)
#define JEHPGCEIHDF_OFIGEFKGHOM_OFFSET UNITYSDK_OFFSET(0x1E71B540)
#define JEHPGCEIHDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E71B330)
#define JEHPGCEIHDF_PLEKFEEAHOD_OFFSET UNITYSDK_OFFSET(0x1E71B4C0)
#define JEHPGCEIHDF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E71B840)
#define JEHPGCEIHDF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E71B8A0)

inline static constexpr unsigned int JEHPGCEIHDF_TypeDefinitionIndex = 25110;

	class JEHPGCEIHDF : public ::System::Object
	{
	public:
		::System::String* LBMMJNLJEJP; // 0x10
		::System::String* EAPDJLMPDAN; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 CGCDBPPFNIC; // 0x28
		::System::UInt32 GOHOKFAPDCI; // 0x2C
		::System::UInt64 DEJFOEHNFJA; // 0x30
		::System::UInt32 ABGGFEAJHAH; // 0x38
		static ::Google::Protobuf::MessageParser_1<::JEHPGCEIHDF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JEHPGCEIHDF*>**)UnitySDK::FromName("", "JEHPGCEIHDF")->GetStaticField(0x5ED30);
		}

		// static const ::System::Object EIDJNEEOOCF; // 0x0
		// static const ::System::Object ODKEBLADOMK; // 0x0
		// static const ::System::Object PDFOJNFGMJF; // 0x0
		// static const ::System::Object HNCINKBJDIN; // 0x0
		// static const ::System::Object PIACAEELECM; // 0x0
		// static const ::System::Object MPPLPBMLLEJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHPGCEIHDF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JEHPGCEIHDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEHPGCEIHDF*))((::PBYTE)hIl2Cpp + JEHPGCEIHDF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEHPGCEIHDF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JEHPGCEIHDF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JEHPGCEIHDF*>*(*)())((::PBYTE)hIl2Cpp + JEHPGCEIHDF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHPGCEIHDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JEHPGCEIHDF* Clone()
		{
			return ((::JEHPGCEIHDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHPGCEIHDF_CLONE_OFFSET))(this);
		}

		::System::UInt64 IDNFENJBNPP()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHPGCEIHDF_IDNFENJBNPP_OFFSET))(this);
		}

		::System::Void AGEKDECKNGG(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + JEHPGCEIHDF_AGEKDECKNGG_OFFSET))(this, a1);
		}

		::System::UInt32 NGDLJINJKJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHPGCEIHDF_NGDLJINJKJP_OFFSET))(this);
		}

		::System::Void GFFLMNPLHJG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEHPGCEIHDF_GFFLMNPLHJG_OFFSET))(this, a1);
		}

		::System::UInt32 LMHIIJPBFPJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHPGCEIHDF_LMHIIJPBFPJ_OFFSET))(this);
		}

		::System::Void KPPEBLNNKGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEHPGCEIHDF_KPPEBLNNKGL_OFFSET))(this, a1);
		}

		::System::UInt32 CHGHEAPFJNJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHPGCEIHDF_CHGHEAPFJNJ_OFFSET))(this);
		}

		::System::Void PLEKFEEAHOD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEHPGCEIHDF_PLEKFEEAHOD_OFFSET))(this, a1);
		}

		::System::String* LKGDLCHAMMP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHPGCEIHDF_LKGDLCHAMMP_OFFSET))(this);
		}

		::System::Void CMLEECEPMKF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JEHPGCEIHDF_CMLEECEPMKF_OFFSET))(this, a1);
		}

		::System::String* CFBOFCFIIGN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHPGCEIHDF_CFBOFCFIIGN_OFFSET))(this);
		}

		::System::Void OFIGEFKGHOM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JEHPGCEIHDF_OFIGEFKGHOM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEHPGCEIHDF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JEHPGCEIHDF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JEHPGCEIHDF*))((::PBYTE)hIl2Cpp + JEHPGCEIHDF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHPGCEIHDF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHPGCEIHDF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JEHPGCEIHDF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHPGCEIHDF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JEHPGCEIHDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEHPGCEIHDF*))((::PBYTE)hIl2Cpp + JEHPGCEIHDF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JEHPGCEIHDF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
