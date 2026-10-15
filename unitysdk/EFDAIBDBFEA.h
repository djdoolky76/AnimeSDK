#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFDAIBDBFEA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EFDAIBDBFEA_ABLLACJACMC_OFFSET UNITYSDK_OFFSET(0x1E28D030)
#define EFDAIBDBFEA_AGFMEMAFGLD_OFFSET UNITYSDK_OFFSET(0x1E28D010)
#define EFDAIBDBFEA_ALIDAFMCJGG_OFFSET UNITYSDK_OFFSET(0x1E28CFF0)
#define EFDAIBDBFEA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E28D3E0)
#define EFDAIBDBFEA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E28D6E0)
#define EFDAIBDBFEA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E28CF50)
#define EFDAIBDBFEA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E28CF20)
#define EFDAIBDBFEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E28CF10)
#define EFDAIBDBFEA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E28D0D0)
#define EFDAIBDBFEA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E28D040)
#define EFDAIBDBFEA_FEMNPLHAHKC_OFFSET UNITYSDK_OFFSET(0x1E28D020)
#define EFDAIBDBFEA_FOAFNPGDLLK_OFFSET UNITYSDK_OFFSET(0x1E28CFD0)
#define EFDAIBDBFEA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E28D1B0)
#define EFDAIBDBFEA_GGIPNHGMPCN_OFFSET UNITYSDK_OFFSET(0x1E28CFE0)
#define EFDAIBDBFEA_HKBEDBLOGNG_OFFSET UNITYSDK_OFFSET(0x1E28D000)
#define EFDAIBDBFEA_JFNJCIIHEFA_OFFSET UNITYSDK_OFFSET(0x1E28CFC0)
#define EFDAIBDBFEA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E28CEA0)
#define EFDAIBDBFEA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E28D640)
#define EFDAIBDBFEA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E28D5F0)
#define EFDAIBDBFEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E28CF00)
#define EFDAIBDBFEA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E28D1F0)
#define EFDAIBDBFEA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E28D250)

inline static constexpr unsigned int EFDAIBDBFEA_TypeDefinitionIndex = 32648;

	class EFDAIBDBFEA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MFHBBHFIIBO; // 0x18
		::System::UInt32 FJBLKPNOKAF; // 0x1C
		::System::UInt32 GNKLGGAGGGB; // 0x20
		::System::UInt32 MDHELICKNPE; // 0x24
		static ::Google::Protobuf::MessageParser_1<::EFDAIBDBFEA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EFDAIBDBFEA*>**)UnitySDK::FromName("", "EFDAIBDBFEA")->GetStaticField(0x154C0);
		}

		// static const ::System::Object PFPJMEJFKFH; // 0x0
		// static const ::System::Object HLKDEGJOKIO; // 0x0
		// static const ::System::Object AMHDJJHLOKD; // 0x0
		// static const ::System::Object ABELECPLDAA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDAIBDBFEA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EFDAIBDBFEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFDAIBDBFEA*))((::PBYTE)hIl2Cpp + EFDAIBDBFEA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFDAIBDBFEA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EFDAIBDBFEA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EFDAIBDBFEA*>*(*)())((::PBYTE)hIl2Cpp + EFDAIBDBFEA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDAIBDBFEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EFDAIBDBFEA* Clone()
		{
			return ((::EFDAIBDBFEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDAIBDBFEA_CLONE_OFFSET))(this);
		}

		::System::UInt32 JFNJCIIHEFA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDAIBDBFEA_JFNJCIIHEFA_OFFSET))(this);
		}

		::System::Void FOAFNPGDLLK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EFDAIBDBFEA_FOAFNPGDLLK_OFFSET))(this, a1);
		}

		::System::UInt32 GGIPNHGMPCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDAIBDBFEA_GGIPNHGMPCN_OFFSET))(this);
		}

		::System::Void ALIDAFMCJGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EFDAIBDBFEA_ALIDAFMCJGG_OFFSET))(this, a1);
		}

		::System::UInt32 HKBEDBLOGNG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDAIBDBFEA_HKBEDBLOGNG_OFFSET))(this);
		}

		::System::Void AGFMEMAFGLD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EFDAIBDBFEA_AGFMEMAFGLD_OFFSET))(this, a1);
		}

		::System::UInt32 FEMNPLHAHKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDAIBDBFEA_FEMNPLHAHKC_OFFSET))(this);
		}

		::System::Void ABLLACJACMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EFDAIBDBFEA_ABLLACJACMC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFDAIBDBFEA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EFDAIBDBFEA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EFDAIBDBFEA*))((::PBYTE)hIl2Cpp + EFDAIBDBFEA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDAIBDBFEA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDAIBDBFEA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EFDAIBDBFEA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDAIBDBFEA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EFDAIBDBFEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFDAIBDBFEA*))((::PBYTE)hIl2Cpp + EFDAIBDBFEA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EFDAIBDBFEA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
