#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJPCHNDAMLH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EJPCHNDAMLH_AJDAINGCOFG_OFFSET UNITYSDK_OFFSET(0x1E2BE760)
#define EJPCHNDAMLH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2BEAC0)
#define EJPCHNDAMLH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2BECE0)
#define EJPCHNDAMLH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2BE710)
#define EJPCHNDAMLH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2BE6E0)
#define EJPCHNDAMLH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2BE6D0)
#define EJPCHNDAMLH_EEDGPGOCEEC_OFFSET UNITYSDK_OFFSET(0x1E2BE750)
#define EJPCHNDAMLH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2BE840)
#define EJPCHNDAMLH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2BE770)
#define EJPCHNDAMLH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2BE9B0)
#define EJPCHNDAMLH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2BE690)
#define EJPCHNDAMLH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2BEB80)
#define EJPCHNDAMLH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2BEB50)
#define EJPCHNDAMLH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2BE6C0)
#define EJPCHNDAMLH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2BE9E0)
#define EJPCHNDAMLH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2BEA40)

inline static constexpr unsigned int EJPCHNDAMLH_TypeDefinitionIndex = 27445;

	class EJPCHNDAMLH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IGIDCGFPCEJ; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EJPCHNDAMLH")->GetStaticField(0x4C680);
		}

		// static const ::System::Object CNFKMGEHCPF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPCHNDAMLH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EJPCHNDAMLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJPCHNDAMLH*))((::PBYTE)hIl2Cpp + EJPCHNDAMLH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJPCHNDAMLH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EJPCHNDAMLH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPCHNDAMLH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EJPCHNDAMLH* Clone()
		{
			return ((::EJPCHNDAMLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPCHNDAMLH_CLONE_OFFSET))(this);
		}

		::System::UInt32 EEDGPGOCEEC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPCHNDAMLH_EEDGPGOCEEC_OFFSET))(this);
		}

		::System::Void AJDAINGCOFG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJPCHNDAMLH_AJDAINGCOFG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EJPCHNDAMLH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EJPCHNDAMLH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EJPCHNDAMLH*))((::PBYTE)hIl2Cpp + EJPCHNDAMLH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPCHNDAMLH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPCHNDAMLH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EJPCHNDAMLH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPCHNDAMLH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EJPCHNDAMLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJPCHNDAMLH*))((::PBYTE)hIl2Cpp + EJPCHNDAMLH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EJPCHNDAMLH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
