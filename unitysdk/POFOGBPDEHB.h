#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POFOGBPDEHB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define POFOGBPDEHB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF9D110)
#define POFOGBPDEHB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF9D3E0)
#define POFOGBPDEHB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF9CD60)
#define POFOGBPDEHB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF9CD30)
#define POFOGBPDEHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF9CD20)
#define POFOGBPDEHB_DKHEMJGCFIA_OFFSET UNITYSDK_OFFSET(0x1DF9CDD0)
#define POFOGBPDEHB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF9CED0)
#define POFOGBPDEHB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF9CDF0)
#define POFOGBPDEHB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF9CFA0)
#define POFOGBPDEHB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF9CCE0)
#define POFOGBPDEHB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF9D260)
#define POFOGBPDEHB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF9D220)
#define POFOGBPDEHB_NECKAHHFCLI_OFFSET UNITYSDK_OFFSET(0x1DF9CDC0)
#define POFOGBPDEHB_NPCOIAEPGPA_OFFSET UNITYSDK_OFFSET(0x1DF9CDB0)
#define POFOGBPDEHB_OLPCNEADPCP_OFFSET UNITYSDK_OFFSET(0x1DF9CDE0)
#define POFOGBPDEHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF9CD10)
#define POFOGBPDEHB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF9CFD0)
#define POFOGBPDEHB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF9D030)

inline static constexpr unsigned int POFOGBPDEHB_TypeDefinitionIndex = 31081;

	class POFOGBPDEHB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IJDGOPFHKMG; // 0x18
		::System::UInt32 JENHMINODOE; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::POFOGBPDEHB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::POFOGBPDEHB*>**)UnitySDK::FromName("", "POFOGBPDEHB")->GetStaticField(0x44C50);
		}

		// static const ::System::Object PMFNLNMINAP; // 0x0
		// static const ::System::Object EBMJNLIEPFI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFOGBPDEHB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::POFOGBPDEHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POFOGBPDEHB*))((::PBYTE)hIl2Cpp + POFOGBPDEHB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POFOGBPDEHB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::POFOGBPDEHB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::POFOGBPDEHB*>*(*)())((::PBYTE)hIl2Cpp + POFOGBPDEHB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + POFOGBPDEHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::POFOGBPDEHB* Clone()
		{
			return ((::POFOGBPDEHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + POFOGBPDEHB_CLONE_OFFSET))(this);
		}

		::System::UInt32 NPCOIAEPGPA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POFOGBPDEHB_NPCOIAEPGPA_OFFSET))(this);
		}

		::System::Void NECKAHHFCLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POFOGBPDEHB_NECKAHHFCLI_OFFSET))(this, a1);
		}

		::System::UInt32 DKHEMJGCFIA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POFOGBPDEHB_DKHEMJGCFIA_OFFSET))(this);
		}

		::System::Void OLPCNEADPCP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POFOGBPDEHB_OLPCNEADPCP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + POFOGBPDEHB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::POFOGBPDEHB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::POFOGBPDEHB*))((::PBYTE)hIl2Cpp + POFOGBPDEHB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POFOGBPDEHB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POFOGBPDEHB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + POFOGBPDEHB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POFOGBPDEHB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::POFOGBPDEHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POFOGBPDEHB*))((::PBYTE)hIl2Cpp + POFOGBPDEHB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + POFOGBPDEHB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
