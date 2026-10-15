#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANCENNCMLDH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ANCENNCMLDH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4FB4F0)
#define ANCENNCMLDH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4FB870)
#define ANCENNCMLDH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4FB0D0)
#define ANCENNCMLDH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4FB090)
#define ANCENNCMLDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4FB080)
#define ANCENNCMLDH_DKHEMJGCFIA_OFFSET UNITYSDK_OFFSET(0x1E4FB140)
#define ANCENNCMLDH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4FB260)
#define ANCENNCMLDH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4FB180)
#define ANCENNCMLDH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4FB170)
#define ANCENNCMLDH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4FB330)
#define ANCENNCMLDH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4FB040)
#define ANCENNCMLDH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4FB6D0)
#define ANCENNCMLDH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4FB680)
#define ANCENNCMLDH_NECKAHHFCLI_OFFSET UNITYSDK_OFFSET(0x1E4FB130)
#define ANCENNCMLDH_NPCOIAEPGPA_OFFSET UNITYSDK_OFFSET(0x1E4FB120)
#define ANCENNCMLDH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4FB160)
#define ANCENNCMLDH_OLPCNEADPCP_OFFSET UNITYSDK_OFFSET(0x1E4FB150)
#define ANCENNCMLDH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4FB070)
#define ANCENNCMLDH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4FB360)
#define ANCENNCMLDH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4FB3C0)

inline static constexpr unsigned int ANCENNCMLDH_TypeDefinitionIndex = 31083;

	class ANCENNCMLDH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 IJDGOPFHKMG; // 0x1C
		::System::UInt32 JENHMINODOE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::ANCENNCMLDH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ANCENNCMLDH*>**)UnitySDK::FromName("", "ANCENNCMLDH")->GetStaticField(0x46130);
		}

		// static const ::System::Object PMFNLNMINAP; // 0x0
		// static const ::System::Object EBMJNLIEPFI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCENNCMLDH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ANCENNCMLDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANCENNCMLDH*))((::PBYTE)hIl2Cpp + ANCENNCMLDH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANCENNCMLDH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ANCENNCMLDH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ANCENNCMLDH*>*(*)())((::PBYTE)hIl2Cpp + ANCENNCMLDH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCENNCMLDH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ANCENNCMLDH* Clone()
		{
			return ((::ANCENNCMLDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCENNCMLDH_CLONE_OFFSET))(this);
		}

		::System::UInt32 NPCOIAEPGPA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCENNCMLDH_NPCOIAEPGPA_OFFSET))(this);
		}

		::System::Void NECKAHHFCLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ANCENNCMLDH_NECKAHHFCLI_OFFSET))(this, a1);
		}

		::System::UInt32 DKHEMJGCFIA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCENNCMLDH_DKHEMJGCFIA_OFFSET))(this);
		}

		::System::Void OLPCNEADPCP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ANCENNCMLDH_OLPCNEADPCP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCENNCMLDH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ANCENNCMLDH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANCENNCMLDH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ANCENNCMLDH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ANCENNCMLDH*))((::PBYTE)hIl2Cpp + ANCENNCMLDH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCENNCMLDH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCENNCMLDH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ANCENNCMLDH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCENNCMLDH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ANCENNCMLDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANCENNCMLDH*))((::PBYTE)hIl2Cpp + ANCENNCMLDH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ANCENNCMLDH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
