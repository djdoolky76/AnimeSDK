#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABNBDDCDBCA_AOFMNFIMNCK.h"
#include "unitysdk/System/Object.h"
class ABNBDDCDBCA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ABNBDDCDBCA_BKHDBPHNNLH_OFFSET UNITYSDK_OFFSET(0x1DDA2050)
#define ABNBDDCDBCA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDA28A0)
#define ABNBDDCDBCA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDA2EE0)
#define ABNBDDCDBCA_CEHKBFMPEAO_OFFSET UNITYSDK_OFFSET(0x1DDA1FA0)
#define ABNBDDCDBCA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDA2100)
#define ABNBDDCDBCA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDA1E40)
#define ABNBDDCDBCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDA1E30)
#define ABNBDDCDBCA_EDNHCAFGMNG_OFFSET UNITYSDK_OFFSET(0x1DDA2020)
#define ABNBDDCDBCA_ENJNOMANLCN_OFFSET UNITYSDK_OFFSET(0x1DDA2160)
#define ABNBDDCDBCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDA21F0)
#define ABNBDDCDBCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDA2190)
#define ABNBDDCDBCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDA2520)
#define ABNBDDCDBCA_GHCGBBHOAKB_OFFSET UNITYSDK_OFFSET(0x1DDA2150)
#define ABNBDDCDBCA_GIDJOFIIKAE_OFFSET UNITYSDK_OFFSET(0x1DDA20D0)
#define ABNBDDCDBCA_ICPNOIONFFO_OFFSET UNITYSDK_OFFSET(0x1DDA2170)
#define ABNBDDCDBCA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDA1DC0)
#define ABNBDDCDBCA_LMDPCGCPNOL_OFFSET UNITYSDK_OFFSET(0x1DDA2180)
#define ABNBDDCDBCA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDA2D00)
#define ABNBDDCDBCA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDA2B90)
#define ABNBDDCDBCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDA1E20)
#define ABNBDDCDBCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDA2660)
#define ABNBDDCDBCA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDA26C0)

inline static constexpr unsigned int ABNBDDCDBCA_TypeDefinitionIndex = 25904;

	class ABNBDDCDBCA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Object* KGKNPPHMGKC; // 0x18
		::ABNBDDCDBCA_AOFMNFIMNCK OLBJLCGPCKM; // 0x20
		::System::UInt32 AEKECGJLGEF; // 0x24
		static ::Google::Protobuf::MessageParser_1<::ABNBDDCDBCA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ABNBDDCDBCA*>**)UnitySDK::FromName("", "ABNBDDCDBCA")->GetStaticField(0x255B0);
		}

		// static const ::System::Object AINHNOCEBJG; // 0x0
		// static const ::System::Object FNHENNCPKAA; // 0x0
		// static const ::System::Object FMDKMAKPJOB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBDDCDBCA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ABNBDDCDBCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABNBDDCDBCA*))((::PBYTE)hIl2Cpp + ABNBDDCDBCA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABNBDDCDBCA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ABNBDDCDBCA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ABNBDDCDBCA*>*(*)())((::PBYTE)hIl2Cpp + ABNBDDCDBCA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBDDCDBCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ABNBDDCDBCA* Clone()
		{
			return ((::ABNBDDCDBCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBDDCDBCA_CLONE_OFFSET))(this);
		}

		::System::UInt32 GHCGBBHOAKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBDDCDBCA_GHCGBBHOAKB_OFFSET))(this);
		}

		::System::Void ENJNOMANLCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABNBDDCDBCA_ENJNOMANLCN_OFFSET))(this, a1);
		}

		::System::UInt32 CEHKBFMPEAO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBDDCDBCA_CEHKBFMPEAO_OFFSET))(this);
		}

		::System::Void EDNHCAFGMNG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABNBDDCDBCA_EDNHCAFGMNG_OFFSET))(this, a1);
		}

		::System::UInt64 BKHDBPHNNLH()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBDDCDBCA_BKHDBPHNNLH_OFFSET))(this);
		}

		::System::Void GIDJOFIIKAE(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ABNBDDCDBCA_GIDJOFIIKAE_OFFSET))(this, a1);
		}

		::ABNBDDCDBCA_AOFMNFIMNCK ICPNOIONFFO()
		{
			return ((::ABNBDDCDBCA_AOFMNFIMNCK(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBDDCDBCA_ICPNOIONFFO_OFFSET))(this);
		}

		::System::Void LMDPCGCPNOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBDDCDBCA_LMDPCGCPNOL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABNBDDCDBCA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ABNBDDCDBCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABNBDDCDBCA*))((::PBYTE)hIl2Cpp + ABNBDDCDBCA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBDDCDBCA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBDDCDBCA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ABNBDDCDBCA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBDDCDBCA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ABNBDDCDBCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABNBDDCDBCA*))((::PBYTE)hIl2Cpp + ABNBDDCDBCA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ABNBDDCDBCA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
