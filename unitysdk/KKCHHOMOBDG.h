#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOPODGPDKMO.h"
#include "unitysdk/System/Object.h"
class KKCHHOMOBDG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KKCHHOMOBDG_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E848CD0)
#define KKCHHOMOBDG_AHIPHGGFFFD_OFFSET UNITYSDK_OFFSET(0x1E848D20)
#define KKCHHOMOBDG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8490C0)
#define KKCHHOMOBDG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E849400)
#define KKCHHOMOBDG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E848C70)
#define KKCHHOMOBDG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E848C40)
#define KKCHHOMOBDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E848C30)
#define KKCHHOMOBDG_EGNMMOBDGEH_OFFSET UNITYSDK_OFFSET(0x1E848D30)
#define KKCHHOMOBDG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E848D90)
#define KKCHHOMOBDG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E848D40)
#define KKCHHOMOBDG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E848D10)
#define KKCHHOMOBDG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E848E70)
#define KKCHHOMOBDG_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E848CC0)
#define KKCHHOMOBDG_IANLAJHINMC_OFFSET UNITYSDK_OFFSET(0x1E848CF0)
#define KKCHHOMOBDG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E848BF0)
#define KKCHHOMOBDG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E849360)
#define KKCHHOMOBDG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E849310)
#define KKCHHOMOBDG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E848D00)
#define KKCHHOMOBDG_OPDJCLIDOCA_OFFSET UNITYSDK_OFFSET(0x1E848CE0)
#define KKCHHOMOBDG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E848C20)
#define KKCHHOMOBDG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E848EB0)
#define KKCHHOMOBDG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E848F10)

inline static constexpr unsigned int KKCHHOMOBDG_TypeDefinitionIndex = 32278;

	class KKCHHOMOBDG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::EOPODGPDKMO ECAFPCEHCCL; // 0x1C
		::System::UInt32 OEPOBIODAJH; // 0x20
		::System::UInt32 IBEBBFIHLLP; // 0x24
		static ::Google::Protobuf::MessageParser_1<::KKCHHOMOBDG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KKCHHOMOBDG*>**)UnitySDK::FromName("", "KKCHHOMOBDG")->GetStaticField(0x1BB40);
		}

		// static const ::System::Object AODKNNMBGAD; // 0x0
		// static const ::System::Object BPLJLIMECGH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object OCNAFOBAIOO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCHHOMOBDG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KKCHHOMOBDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKCHHOMOBDG*))((::PBYTE)hIl2Cpp + KKCHHOMOBDG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKCHHOMOBDG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KKCHHOMOBDG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KKCHHOMOBDG*>*(*)())((::PBYTE)hIl2Cpp + KKCHHOMOBDG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCHHOMOBDG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KKCHHOMOBDG* Clone()
		{
			return ((::KKCHHOMOBDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCHHOMOBDG_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCHHOMOBDG_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KKCHHOMOBDG_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::UInt32 OPDJCLIDOCA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCHHOMOBDG_OPDJCLIDOCA_OFFSET))(this);
		}

		::System::Void IANLAJHINMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KKCHHOMOBDG_IANLAJHINMC_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCHHOMOBDG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KKCHHOMOBDG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::EOPODGPDKMO AHIPHGGFFFD()
		{
			return ((::EOPODGPDKMO(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCHHOMOBDG_AHIPHGGFFFD_OFFSET))(this);
		}

		::System::Void EGNMMOBDGEH(::EOPODGPDKMO a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOPODGPDKMO))((::PBYTE)hIl2Cpp + KKCHHOMOBDG_EGNMMOBDGEH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KKCHHOMOBDG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KKCHHOMOBDG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KKCHHOMOBDG*))((::PBYTE)hIl2Cpp + KKCHHOMOBDG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCHHOMOBDG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCHHOMOBDG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KKCHHOMOBDG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCHHOMOBDG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KKCHHOMOBDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKCHHOMOBDG*))((::PBYTE)hIl2Cpp + KKCHHOMOBDG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KKCHHOMOBDG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
