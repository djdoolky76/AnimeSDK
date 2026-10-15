#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class EKLIDIDKFHC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EKLIDIDKFHC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2C55D0)
#define EKLIDIDKFHC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C5A00)
#define EKLIDIDKFHC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2C4E40)
#define EKLIDIDKFHC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2C4D90)
#define EKLIDIDKFHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C4D80)
#define EKLIDIDKFHC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2C50C0)
#define EKLIDIDKFHC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2C4F10)
#define EKLIDIDKFHC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2C5260)
#define EKLIDIDKFHC_GGHIOCJHFPD_OFFSET UNITYSDK_OFFSET(0x1E2C4E70)
#define EKLIDIDKFHC_ICOJDCCJMEM_OFFSET UNITYSDK_OFFSET(0x1E2C4ED0)
#define EKLIDIDKFHC_IEPIOLLBCKP_OFFSET UNITYSDK_OFFSET(0x1E2C4E80)
#define EKLIDIDKFHC_JCLAIBFMENP_OFFSET UNITYSDK_OFFSET(0x1E2C4EE0)
#define EKLIDIDKFHC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2C4D40)
#define EKLIDIDKFHC_KBBONNBBMHF_OFFSET UNITYSDK_OFFSET(0x1E2C4EA0)
#define EKLIDIDKFHC_LKBKNGLMAMN_OFFSET UNITYSDK_OFFSET(0x1E2C4EB0)
#define EKLIDIDKFHC_LOJDOMPBJJN_OFFSET UNITYSDK_OFFSET(0x1E2C4F00)
#define EKLIDIDKFHC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2C58D0)
#define EKLIDIDKFHC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2C57D0)
#define EKLIDIDKFHC_OCACMGALNGN_OFFSET UNITYSDK_OFFSET(0x1E2C4E90)
#define EKLIDIDKFHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2C4D70)
#define EKLIDIDKFHC_PHJCDDFPIAH_OFFSET UNITYSDK_OFFSET(0x1E2C4EF0)
#define EKLIDIDKFHC_PNJCLMCJHBE_OFFSET UNITYSDK_OFFSET(0x1E2C4EC0)
#define EKLIDIDKFHC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2C5380)
#define EKLIDIDKFHC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2C53E0)

inline static constexpr unsigned int EKLIDIDKFHC_TypeDefinitionIndex = 26414;

	class EKLIDIDKFHC : public ::System::Object
	{
	public:
		::CAGKEDMHEOI* HJIEIJDJGBB; // 0x10
		::CAGKEDMHEOI* CDPIBAAPLCN; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 HEKOAJFHMJJ; // 0x28
		::System::UInt32 HJPCMINMFBI; // 0x2C
		::System::UInt32 AMKFJFCPGJC; // 0x30
		static ::Google::Protobuf::MessageParser_1<::EKLIDIDKFHC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EKLIDIDKFHC*>**)UnitySDK::FromName("", "EKLIDIDKFHC")->GetStaticField(0x4DA40);
		}

		// static const ::System::Object JLDJICILMMM; // 0x0
		// static const ::System::Object BADCJPBCMGM; // 0x0
		// static const ::System::Object ACLGGLDCAEC; // 0x0
		// static const ::System::Object ADFLIGDHDDM; // 0x0
		// static const ::System::Object HAIOMLKEIBF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLIDIDKFHC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EKLIDIDKFHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKLIDIDKFHC*))((::PBYTE)hIl2Cpp + EKLIDIDKFHC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKLIDIDKFHC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EKLIDIDKFHC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EKLIDIDKFHC*>*(*)())((::PBYTE)hIl2Cpp + EKLIDIDKFHC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLIDIDKFHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EKLIDIDKFHC* Clone()
		{
			return ((::EKLIDIDKFHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLIDIDKFHC_CLONE_OFFSET))(this);
		}

		::CAGKEDMHEOI* GGHIOCJHFPD()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLIDIDKFHC_GGHIOCJHFPD_OFFSET))(this);
		}

		::System::Void IEPIOLLBCKP(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + EKLIDIDKFHC_IEPIOLLBCKP_OFFSET))(this, a1);
		}

		::CAGKEDMHEOI* OCACMGALNGN()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLIDIDKFHC_OCACMGALNGN_OFFSET))(this);
		}

		::System::Void KBBONNBBMHF(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + EKLIDIDKFHC_KBBONNBBMHF_OFFSET))(this, a1);
		}

		::System::UInt32 LKBKNGLMAMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLIDIDKFHC_LKBKNGLMAMN_OFFSET))(this);
		}

		::System::Void PNJCLMCJHBE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EKLIDIDKFHC_PNJCLMCJHBE_OFFSET))(this, a1);
		}

		::System::UInt32 ICOJDCCJMEM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLIDIDKFHC_ICOJDCCJMEM_OFFSET))(this);
		}

		::System::Void JCLAIBFMENP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EKLIDIDKFHC_JCLAIBFMENP_OFFSET))(this, a1);
		}

		::System::UInt32 PHJCDDFPIAH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLIDIDKFHC_PHJCDDFPIAH_OFFSET))(this);
		}

		::System::Void LOJDOMPBJJN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EKLIDIDKFHC_LOJDOMPBJJN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EKLIDIDKFHC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EKLIDIDKFHC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKLIDIDKFHC*))((::PBYTE)hIl2Cpp + EKLIDIDKFHC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLIDIDKFHC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLIDIDKFHC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EKLIDIDKFHC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLIDIDKFHC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EKLIDIDKFHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKLIDIDKFHC*))((::PBYTE)hIl2Cpp + EKLIDIDKFHC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EKLIDIDKFHC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
