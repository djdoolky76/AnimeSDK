#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBHHENEONHO;
class CAGKEDMHEOI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BBHHENEONHO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E798C00)
#define BBHHENEONHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E798FC0)
#define BBHHENEONHO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E798460)
#define BBHHENEONHO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7983B0)
#define BBHHENEONHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7983A0)
#define BBHHENEONHO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7986B0)
#define BBHHENEONHO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E798550)
#define BBHHENEONHO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E798860)
#define BBHHENEONHO_HFMNIPOGMOO_OFFSET UNITYSDK_OFFSET(0x1E7984C0)
#define BBHHENEONHO_ILBJPBNBHNO_OFFSET UNITYSDK_OFFSET(0x1E798540)
#define BBHHENEONHO_JDAEDKOIBLJ_OFFSET UNITYSDK_OFFSET(0x1E7984B0)
#define BBHHENEONHO_JIKKBBFIAIB_OFFSET UNITYSDK_OFFSET(0x1E7984F0)
#define BBHHENEONHO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E798330)
#define BBHHENEONHO_MBLIFLLOIIO_OFFSET UNITYSDK_OFFSET(0x1E7984E0)
#define BBHHENEONHO_MCOODDIIOIH_OFFSET UNITYSDK_OFFSET(0x1E798510)
#define BBHHENEONHO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E798E90)
#define BBHHENEONHO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E798D90)
#define BBHHENEONHO_MPJNGKCGFDG_OFFSET UNITYSDK_OFFSET(0x1E7984D0)
#define BBHHENEONHO_OJLEEFOPKPO_OFFSET UNITYSDK_OFFSET(0x1E798530)
#define BBHHENEONHO_OOKBOGGJJPI_OFFSET UNITYSDK_OFFSET(0x1E798500)
#define BBHHENEONHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E798390)
#define BBHHENEONHO_PMODGCHEFJC_OFFSET UNITYSDK_OFFSET(0x1E798520)
#define BBHHENEONHO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E798970)
#define BBHHENEONHO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7989D0)

inline static constexpr unsigned int BBHHENEONHO_TypeDefinitionIndex = 33319;

	class BBHHENEONHO : public ::System::Object
	{
	public:
		::CAGKEDMHEOI* HCBFHBJOIBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::CAGKEDMHEOI* IPBMAGNJAML; // 0x20
		::System::UInt32 AILBEGMLBID; // 0x28
		::System::UInt32 FGBHABOLIHO; // 0x2C
		::System::Boolean NMPHKPBKMPF; // 0x30
		static ::Google::Protobuf::MessageParser_1<::BBHHENEONHO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BBHHENEONHO*>**)UnitySDK::FromName("", "BBHHENEONHO")->GetStaticField(0x4E2B0);
		}

		// static const ::System::Object OOCPMEHDGFB; // 0x0
		// static const ::System::Object JBPMOHKFEBB; // 0x0
		// static const ::System::Object KMDPPOKDFBG; // 0x0
		// static const ::System::Object NGPKIDLBPIA; // 0x0
		// static const ::System::Object IEDEGHNPGIO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHHENEONHO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BBHHENEONHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBHHENEONHO*))((::PBYTE)hIl2Cpp + BBHHENEONHO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBHHENEONHO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BBHHENEONHO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BBHHENEONHO*>*(*)())((::PBYTE)hIl2Cpp + BBHHENEONHO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHHENEONHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BBHHENEONHO* Clone()
		{
			return ((::BBHHENEONHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHHENEONHO_CLONE_OFFSET))(this);
		}

		::CAGKEDMHEOI* JDAEDKOIBLJ()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHHENEONHO_JDAEDKOIBLJ_OFFSET))(this);
		}

		::System::Void HFMNIPOGMOO(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + BBHHENEONHO_HFMNIPOGMOO_OFFSET))(this, a1);
		}

		::System::Boolean MPJNGKCGFDG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHHENEONHO_MPJNGKCGFDG_OFFSET))(this);
		}

		::System::Void MBLIFLLOIIO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BBHHENEONHO_MBLIFLLOIIO_OFFSET))(this, a1);
		}

		::System::UInt32 JIKKBBFIAIB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHHENEONHO_JIKKBBFIAIB_OFFSET))(this);
		}

		::System::Void OOKBOGGJJPI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BBHHENEONHO_OOKBOGGJJPI_OFFSET))(this, a1);
		}

		::CAGKEDMHEOI* MCOODDIIOIH()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHHENEONHO_MCOODDIIOIH_OFFSET))(this);
		}

		::System::Void PMODGCHEFJC(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + BBHHENEONHO_PMODGCHEFJC_OFFSET))(this, a1);
		}

		::System::UInt32 OJLEEFOPKPO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHHENEONHO_OJLEEFOPKPO_OFFSET))(this);
		}

		::System::Void ILBJPBNBHNO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BBHHENEONHO_ILBJPBNBHNO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBHHENEONHO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BBHHENEONHO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BBHHENEONHO*))((::PBYTE)hIl2Cpp + BBHHENEONHO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHHENEONHO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHHENEONHO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BBHHENEONHO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHHENEONHO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BBHHENEONHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBHHENEONHO*))((::PBYTE)hIl2Cpp + BBHHENEONHO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BBHHENEONHO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
