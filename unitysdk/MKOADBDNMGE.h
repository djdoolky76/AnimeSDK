#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAGBNGJFCMG;
class MKOADBDNMGE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MKOADBDNMGE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA5D5B0)
#define MKOADBDNMGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA5DA10)
#define MKOADBDNMGE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA5CF70)
#define MKOADBDNMGE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA5CEC0)
#define MKOADBDNMGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5CEB0)
#define MKOADBDNMGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA5D220)
#define MKOADBDNMGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA5D090)
#define MKOADBDNMGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA5D3B0)
#define MKOADBDNMGE_GPAFPIFJEAF_OFFSET UNITYSDK_OFFSET(0x1EA5D060)
#define MKOADBDNMGE_HLACEGGLEGF_OFFSET UNITYSDK_OFFSET(0x1EA5D050)
#define MKOADBDNMGE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA5CE70)
#define MKOADBDNMGE_LJJCFPLJGON_OFFSET UNITYSDK_OFFSET(0x1EA5D040)
#define MKOADBDNMGE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA5D860)
#define MKOADBDNMGE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA5D760)
#define MKOADBDNMGE_OCHAGHEMHCC_OFFSET UNITYSDK_OFFSET(0x1EA5D030)
#define MKOADBDNMGE_OIFCKGODKON_OFFSET UNITYSDK_OFFSET(0x1EA5D080)
#define MKOADBDNMGE_OPFINOFMACO_OFFSET UNITYSDK_OFFSET(0x1EA5D070)
#define MKOADBDNMGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA5CEA0)
#define MKOADBDNMGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA5D410)
#define MKOADBDNMGE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA5D470)

inline static constexpr unsigned int MKOADBDNMGE_TypeDefinitionIndex = 34055;

	class MKOADBDNMGE : public ::System::Object
	{
	public:
		::DAGBNGJFCMG* KJEBMPLAIIN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt64 JEHBHEOHGLN; // 0x20
		::System::UInt32 MIJMCFOKJCH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MKOADBDNMGE")->GetStaticField(0x57550);
		}

		// static const ::System::Object DMNFDEEECBB; // 0x0
		// static const ::System::Object GEMDHFJFBHD; // 0x0
		// static const ::System::Object ELMGEBCLLFP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOADBDNMGE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MKOADBDNMGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKOADBDNMGE*))((::PBYTE)hIl2Cpp + MKOADBDNMGE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKOADBDNMGE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MKOADBDNMGE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOADBDNMGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MKOADBDNMGE* Clone()
		{
			return ((::MKOADBDNMGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOADBDNMGE_CLONE_OFFSET))(this);
		}

		::DAGBNGJFCMG* OCHAGHEMHCC()
		{
			return ((::DAGBNGJFCMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOADBDNMGE_OCHAGHEMHCC_OFFSET))(this);
		}

		::System::Void LJJCFPLJGON(::DAGBNGJFCMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAGBNGJFCMG*))((::PBYTE)hIl2Cpp + MKOADBDNMGE_LJJCFPLJGON_OFFSET))(this, a1);
		}

		::System::UInt64 HLACEGGLEGF()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOADBDNMGE_HLACEGGLEGF_OFFSET))(this);
		}

		::System::Void GPAFPIFJEAF(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MKOADBDNMGE_GPAFPIFJEAF_OFFSET))(this, a1);
		}

		::System::UInt32 OPFINOFMACO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOADBDNMGE_OPFINOFMACO_OFFSET))(this);
		}

		::System::Void OIFCKGODKON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKOADBDNMGE_OIFCKGODKON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MKOADBDNMGE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MKOADBDNMGE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MKOADBDNMGE*))((::PBYTE)hIl2Cpp + MKOADBDNMGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOADBDNMGE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOADBDNMGE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MKOADBDNMGE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOADBDNMGE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MKOADBDNMGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKOADBDNMGE*))((::PBYTE)hIl2Cpp + MKOADBDNMGE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MKOADBDNMGE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
