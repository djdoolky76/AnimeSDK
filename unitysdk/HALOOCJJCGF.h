#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENHOPAHGCMA;
class HALOOCJJCGF;
class OENDLKLJHPF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HALOOCJJCGF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E508220)
#define HALOOCJJCGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5086C0)
#define HALOOCJJCGF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E507A50)
#define HALOOCJJCGF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E507980)
#define HALOOCJJCGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E507970)
#define HALOOCJJCGF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E507DC0)
#define HALOOCJJCGF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E507B90)
#define HALOOCJJCGF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E507B60)
#define HALOOCJJCGF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E507FF0)
#define HALOOCJJCGF_IGBBKPENBMC_OFFSET UNITYSDK_OFFSET(0x1E507B80)
#define HALOOCJJCGF_IJFEDLKDDBE_OFFSET UNITYSDK_OFFSET(0x1E507B40)
#define HALOOCJJCGF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E507930)
#define HALOOCJJCGF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E508490)
#define HALOOCJJCGF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E508330)
#define HALOOCJJCGF_NANIBACJAIP_OFFSET UNITYSDK_OFFSET(0x1E507B70)
#define HALOOCJJCGF_NEHCKMJHBIP_OFFSET UNITYSDK_OFFSET(0x1E507B30)
#define HALOOCJJCGF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E507B50)
#define HALOOCJJCGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E507960)
#define HALOOCJJCGF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E508080)
#define HALOOCJJCGF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5080E0)

	class HALOOCJJCGF : public ::System::Object
	{
	public:
		::OENDLKLJHPF* PHBNBOCMCEB; // 0x10
		::ENHOPAHGCMA* PKBJKBGPIEL; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HALOOCJJCGF")->GetStaticField(0x2D0E0);
		}

		// static const ::System::Object DLELDGKBCOC; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object GOHNIEONGJO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HALOOCJJCGF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HALOOCJJCGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HALOOCJJCGF*))((::PBYTE)hIl2Cpp + HALOOCJJCGF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HALOOCJJCGF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HALOOCJJCGF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HALOOCJJCGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HALOOCJJCGF* Clone()
		{
			return ((::HALOOCJJCGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HALOOCJJCGF_CLONE_OFFSET))(this);
		}

		::ENHOPAHGCMA* NEHCKMJHBIP()
		{
			return ((::ENHOPAHGCMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HALOOCJJCGF_NEHCKMJHBIP_OFFSET))(this);
		}

		::System::Void IJFEDLKDDBE(::ENHOPAHGCMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENHOPAHGCMA*))((::PBYTE)hIl2Cpp + HALOOCJJCGF_IJFEDLKDDBE_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HALOOCJJCGF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HALOOCJJCGF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::OENDLKLJHPF* NANIBACJAIP()
		{
			return ((::OENDLKLJHPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HALOOCJJCGF_NANIBACJAIP_OFFSET))(this);
		}

		::System::Void IGBBKPENBMC(::OENDLKLJHPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OENDLKLJHPF*))((::PBYTE)hIl2Cpp + HALOOCJJCGF_IGBBKPENBMC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HALOOCJJCGF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HALOOCJJCGF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HALOOCJJCGF*))((::PBYTE)hIl2Cpp + HALOOCJJCGF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HALOOCJJCGF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HALOOCJJCGF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HALOOCJJCGF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HALOOCJJCGF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HALOOCJJCGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HALOOCJJCGF*))((::PBYTE)hIl2Cpp + HALOOCJJCGF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HALOOCJJCGF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
