#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NKNIPLOMJMM_GCGCHNDIAJM.h"
#include "unitysdk/System/Object.h"
class NKNIPLOMJMM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NKNIPLOMJMM_BBIDGLKIHDE_OFFSET UNITYSDK_OFFSET(0x1EB5BBE0)
#define NKNIPLOMJMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB5C310)
#define NKNIPLOMJMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB5C820)
#define NKNIPLOMJMM_CLLIBMIFPNA_OFFSET UNITYSDK_OFFSET(0x1EB5BC40)
#define NKNIPLOMJMM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB5BC10)
#define NKNIPLOMJMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB5B940)
#define NKNIPLOMJMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB5B930)
#define NKNIPLOMJMM_EMPCONOHHGH_OFFSET UNITYSDK_OFFSET(0x1EB5BB60)
#define NKNIPLOMJMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB5BCD0)
#define NKNIPLOMJMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB5BCA0)
#define NKNIPLOMJMM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB5BC70)
#define NKNIPLOMJMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB5BF20)
#define NKNIPLOMJMM_GNCMNBHMIPE_OFFSET UNITYSDK_OFFSET(0x1EB5BC90)
#define NKNIPLOMJMM_JBBMHOFGHGA_OFFSET UNITYSDK_OFFSET(0x1EB5BC50)
#define NKNIPLOMJMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB5B8F0)
#define NKNIPLOMJMM_KECEFHGCBGH_OFFSET UNITYSDK_OFFSET(0x1EB5BAB0)
#define NKNIPLOMJMM_KFLDFIGDABN_OFFSET UNITYSDK_OFFSET(0x1EB5BC80)
#define NKNIPLOMJMM_KIJINHPMFJC_OFFSET UNITYSDK_OFFSET(0x1EB5BB30)
#define NKNIPLOMJMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB5C710)
#define NKNIPLOMJMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB5C5A0)
#define NKNIPLOMJMM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB5BC60)
#define NKNIPLOMJMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB5B920)
#define NKNIPLOMJMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB5BFE0)
#define NKNIPLOMJMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB5C040)

inline static constexpr unsigned int NKNIPLOMJMM_TypeDefinitionIndex = 27580;

	class NKNIPLOMJMM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Object* JEFEMOPFJOP; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::Boolean AIGHAPALCNE; // 0x24
		::System::Byte _padding0[0x3];
		::NKNIPLOMJMM_GCGCHNDIAJM NPIBMNININN; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NKNIPLOMJMM")->GetStaticField(0x662B0);
		}

		// static const ::System::Object HBDALMDHLKJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IIKDJEJFAOG; // 0x0
		// static const ::System::Object DGKENOLAFMK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNIPLOMJMM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NKNIPLOMJMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKNIPLOMJMM*))((::PBYTE)hIl2Cpp + NKNIPLOMJMM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKNIPLOMJMM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NKNIPLOMJMM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNIPLOMJMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NKNIPLOMJMM* Clone()
		{
			return ((::NKNIPLOMJMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNIPLOMJMM_CLONE_OFFSET))(this);
		}

		::System::Boolean CLLIBMIFPNA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNIPLOMJMM_CLLIBMIFPNA_OFFSET))(this);
		}

		::System::Void JBBMHOFGHGA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKNIPLOMJMM_JBBMHOFGHGA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNIPLOMJMM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NKNIPLOMJMM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 KECEFHGCBGH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNIPLOMJMM_KECEFHGCBGH_OFFSET))(this);
		}

		::System::Void KIJINHPMFJC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NKNIPLOMJMM_KIJINHPMFJC_OFFSET))(this, a1);
		}

		::System::UInt32 EMPCONOHHGH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNIPLOMJMM_EMPCONOHHGH_OFFSET))(this);
		}

		::System::Void BBIDGLKIHDE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NKNIPLOMJMM_BBIDGLKIHDE_OFFSET))(this, a1);
		}

		::NKNIPLOMJMM_GCGCHNDIAJM KFLDFIGDABN()
		{
			return ((::NKNIPLOMJMM_GCGCHNDIAJM(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNIPLOMJMM_KFLDFIGDABN_OFFSET))(this);
		}

		::System::Void GNCMNBHMIPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNIPLOMJMM_GNCMNBHMIPE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NKNIPLOMJMM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NKNIPLOMJMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKNIPLOMJMM*))((::PBYTE)hIl2Cpp + NKNIPLOMJMM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNIPLOMJMM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNIPLOMJMM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NKNIPLOMJMM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNIPLOMJMM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NKNIPLOMJMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKNIPLOMJMM*))((::PBYTE)hIl2Cpp + NKNIPLOMJMM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NKNIPLOMJMM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
