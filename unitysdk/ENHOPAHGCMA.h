#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENHOPAHGCMA;
class NPEHFAHLDNM;
namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ENHOPAHGCMA_BLILPNPEACH_OFFSET UNITYSDK_OFFSET(0x1E2EF080)
#define ENHOPAHGCMA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2EF640)
#define ENHOPAHGCMA_CBPIFHFIAPJ_OFFSET UNITYSDK_OFFSET(0x1E2EF060)
#define ENHOPAHGCMA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2EFA70)
#define ENHOPAHGCMA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2EEF90)
#define ENHOPAHGCMA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2EEEF0)
#define ENHOPAHGCMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2EEEA0)
#define ENHOPAHGCMA_EOEKBFGFIGA_OFFSET UNITYSDK_OFFSET(0x1E2EEFC0)
#define ENHOPAHGCMA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2EF0D0)
#define ENHOPAHGCMA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2EF0A0)
#define ENHOPAHGCMA_FBANCIIEIFL_OFFSET UNITYSDK_OFFSET(0x1E2EF070)
#define ENHOPAHGCMA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2EF200)
#define ENHOPAHGCMA_HHAJEFIANLP_OFFSET UNITYSDK_OFFSET(0x1E2EF050)
#define ENHOPAHGCMA_HHMADFFNEIG_OFFSET UNITYSDK_OFFSET(0x1E2EF040)
#define ENHOPAHGCMA_ILGKNAKFOIA_OFFSET UNITYSDK_OFFSET(0x1E2EF030)
#define ENHOPAHGCMA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2EEE60)
#define ENHOPAHGCMA_KIJDPPMHBME_OFFSET UNITYSDK_OFFSET(0x1E2EF090)
#define ENHOPAHGCMA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2EF960)
#define ENHOPAHGCMA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2EF8C0)
#define ENHOPAHGCMA_OENOEKAMDLL_OFFSET UNITYSDK_OFFSET(0x1E2EEFD0)
#define ENHOPAHGCMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2EEE90)
#define ENHOPAHGCMA_PCCCBGMIBNG_OFFSET UNITYSDK_OFFSET(0x1E2EF020)
#define ENHOPAHGCMA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2EF3B0)
#define ENHOPAHGCMA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2EF410)

inline static constexpr unsigned int ENHOPAHGCMA_TypeDefinitionIndex = 34329;

	class ENHOPAHGCMA : public ::System::Object
	{
	public:
		::Google::Protobuf::ByteString* DMPCNBBAELA; // 0x10
		::NPEHFAHLDNM* NJKEFHFILIF; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 JEGFHLGJGHP; // 0x28
		::System::UInt32 POCDPPBAMIF; // 0x2C
		::System::UInt32 FOBLPJCIGJE; // 0x30
		static ::Google::Protobuf::MessageParser_1<::ENHOPAHGCMA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ENHOPAHGCMA*>**)UnitySDK::FromName("", "ENHOPAHGCMA")->GetStaticField(0x30C20);
		}

		// static const ::System::Object OBJDALLLJDJ; // 0x0
		// static const ::System::Object OBIOFGKIINK; // 0x0
		// static const ::System::Object BNCHEIFFFPK; // 0x0
		// static const ::System::Object BPALIHKGOOA; // 0x0
		// static const ::System::Object NOBLDDEFEKI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHOPAHGCMA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ENHOPAHGCMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENHOPAHGCMA*))((::PBYTE)hIl2Cpp + ENHOPAHGCMA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENHOPAHGCMA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ENHOPAHGCMA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ENHOPAHGCMA*>*(*)())((::PBYTE)hIl2Cpp + ENHOPAHGCMA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHOPAHGCMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ENHOPAHGCMA* Clone()
		{
			return ((::ENHOPAHGCMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHOPAHGCMA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::ByteString* EOEKBFGFIGA()
		{
			return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHOPAHGCMA_EOEKBFGFIGA_OFFSET))(this);
		}

		::System::Void OENOEKAMDLL(::Google::Protobuf::ByteString* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + ENHOPAHGCMA_OENOEKAMDLL_OFFSET))(this, a1);
		}

		::System::UInt32 PCCCBGMIBNG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHOPAHGCMA_PCCCBGMIBNG_OFFSET))(this);
		}

		::System::Void ILGKNAKFOIA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ENHOPAHGCMA_ILGKNAKFOIA_OFFSET))(this, a1);
		}

		::NPEHFAHLDNM* HHMADFFNEIG()
		{
			return ((::NPEHFAHLDNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHOPAHGCMA_HHMADFFNEIG_OFFSET))(this);
		}

		::System::Void HHAJEFIANLP(::NPEHFAHLDNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + ENHOPAHGCMA_HHAJEFIANLP_OFFSET))(this, a1);
		}

		::System::UInt32 CBPIFHFIAPJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHOPAHGCMA_CBPIFHFIAPJ_OFFSET))(this);
		}

		::System::Void FBANCIIEIFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ENHOPAHGCMA_FBANCIIEIFL_OFFSET))(this, a1);
		}

		::System::UInt32 BLILPNPEACH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHOPAHGCMA_BLILPNPEACH_OFFSET))(this);
		}

		::System::Void KIJDPPMHBME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ENHOPAHGCMA_KIJDPPMHBME_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENHOPAHGCMA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ENHOPAHGCMA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENHOPAHGCMA*))((::PBYTE)hIl2Cpp + ENHOPAHGCMA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHOPAHGCMA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHOPAHGCMA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ENHOPAHGCMA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHOPAHGCMA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ENHOPAHGCMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENHOPAHGCMA*))((::PBYTE)hIl2Cpp + ENHOPAHGCMA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ENHOPAHGCMA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
