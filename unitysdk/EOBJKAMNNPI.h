#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class EOBJKAMNNPI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EOBJKAMNNPI_ADOFPCMMOAC_OFFSET UNITYSDK_OFFSET(0x1E2C9940)
#define EOBJKAMNNPI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2C9FA0)
#define EOBJKAMNNPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2CA3D0)
#define EOBJKAMNNPI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2C98B0)
#define EOBJKAMNNPI_CLPCNNEINGD_OFFSET UNITYSDK_OFFSET(0x1E2C9970)
#define EOBJKAMNNPI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2C9800)
#define EOBJKAMNNPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C97F0)
#define EOBJKAMNNPI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2C9AA0)
#define EOBJKAMNNPI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2C9980)
#define EOBJKAMNNPI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2C9C40)
#define EOBJKAMNNPI_IHBPLMDKAOH_OFFSET UNITYSDK_OFFSET(0x1E2C9960)
#define EOBJKAMNNPI_JCAPKOGNFJB_OFFSET UNITYSDK_OFFSET(0x1E2C9950)
#define EOBJKAMNNPI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2C97B0)
#define EOBJKAMNNPI_LKBKNGLMAMN_OFFSET UNITYSDK_OFFSET(0x1E2C9900)
#define EOBJKAMNNPI_LNCLACDDDGF_OFFSET UNITYSDK_OFFSET(0x1E2C98E0)
#define EOBJKAMNNPI_LOJDOMPBJJN_OFFSET UNITYSDK_OFFSET(0x1E2C9930)
#define EOBJKAMNNPI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2CA2A0)
#define EOBJKAMNNPI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2CA1A0)
#define EOBJKAMNNPI_NCKNIBHLPCC_OFFSET UNITYSDK_OFFSET(0x1E2C98F0)
#define EOBJKAMNNPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2C97E0)
#define EOBJKAMNNPI_PHJCDDFPIAH_OFFSET UNITYSDK_OFFSET(0x1E2C9920)
#define EOBJKAMNNPI_PNJCLMCJHBE_OFFSET UNITYSDK_OFFSET(0x1E2C9910)
#define EOBJKAMNNPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2C9D50)
#define EOBJKAMNNPI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2C9DB0)

inline static constexpr unsigned int EOBJKAMNNPI_TypeDefinitionIndex = 30236;

	class EOBJKAMNNPI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CAGKEDMHEOI* BFBFEFKIKEC; // 0x18
		::CAGKEDMHEOI* MFFNJBCKAPI; // 0x20
		::System::UInt32 AMKFJFCPGJC; // 0x28
		::System::UInt32 MFMHPDFMGIN; // 0x2C
		::System::UInt32 HJPCMINMFBI; // 0x30
		static ::Google::Protobuf::MessageParser_1<::EOBJKAMNNPI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EOBJKAMNNPI*>**)UnitySDK::FromName("", "EOBJKAMNNPI")->GetStaticField(0x45FE0);
		}

		// static const ::System::Object DHAFIANJAJI; // 0x0
		// static const ::System::Object ACLGGLDCAEC; // 0x0
		// static const ::System::Object HAIOMLKEIBF; // 0x0
		// static const ::System::Object BHHLDGKJNBE; // 0x0
		// static const ::System::Object PJHHJKCAPFG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBJKAMNNPI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EOBJKAMNNPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOBJKAMNNPI*))((::PBYTE)hIl2Cpp + EOBJKAMNNPI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOBJKAMNNPI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EOBJKAMNNPI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EOBJKAMNNPI*>*(*)())((::PBYTE)hIl2Cpp + EOBJKAMNNPI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBJKAMNNPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EOBJKAMNNPI* Clone()
		{
			return ((::EOBJKAMNNPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBJKAMNNPI_CLONE_OFFSET))(this);
		}

		::CAGKEDMHEOI* LNCLACDDDGF()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBJKAMNNPI_LNCLACDDDGF_OFFSET))(this);
		}

		::System::Void NCKNIBHLPCC(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + EOBJKAMNNPI_NCKNIBHLPCC_OFFSET))(this, a1);
		}

		::System::UInt32 LKBKNGLMAMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBJKAMNNPI_LKBKNGLMAMN_OFFSET))(this);
		}

		::System::Void PNJCLMCJHBE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EOBJKAMNNPI_PNJCLMCJHBE_OFFSET))(this, a1);
		}

		::System::UInt32 PHJCDDFPIAH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBJKAMNNPI_PHJCDDFPIAH_OFFSET))(this);
		}

		::System::Void LOJDOMPBJJN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EOBJKAMNNPI_LOJDOMPBJJN_OFFSET))(this, a1);
		}

		::CAGKEDMHEOI* ADOFPCMMOAC()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBJKAMNNPI_ADOFPCMMOAC_OFFSET))(this);
		}

		::System::Void JCAPKOGNFJB(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + EOBJKAMNNPI_JCAPKOGNFJB_OFFSET))(this, a1);
		}

		::System::UInt32 IHBPLMDKAOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBJKAMNNPI_IHBPLMDKAOH_OFFSET))(this);
		}

		::System::Void CLPCNNEINGD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EOBJKAMNNPI_CLPCNNEINGD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EOBJKAMNNPI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EOBJKAMNNPI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EOBJKAMNNPI*))((::PBYTE)hIl2Cpp + EOBJKAMNNPI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBJKAMNNPI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBJKAMNNPI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EOBJKAMNNPI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBJKAMNNPI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EOBJKAMNNPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOBJKAMNNPI*))((::PBYTE)hIl2Cpp + EOBJKAMNNPI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EOBJKAMNNPI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
