#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPGGADJHCBG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DPGGADJHCBG_AKHEMBOCAGG_OFFSET UNITYSDK_OFFSET(0x1E20E6E0)
#define DPGGADJHCBG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E20EA70)
#define DPGGADJHCBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E20EC90)
#define DPGGADJHCBG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E20E660)
#define DPGGADJHCBG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E20E630)
#define DPGGADJHCBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E20E620)
#define DPGGADJHCBG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E20E7F0)
#define DPGGADJHCBG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E20E6F0)
#define DPGGADJHCBG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E20E960)
#define DPGGADJHCBG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E20E5B0)
#define DPGGADJHCBG_LAEGEPLDILM_OFFSET UNITYSDK_OFFSET(0x1E20E6D0)
#define DPGGADJHCBG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E20EB30)
#define DPGGADJHCBG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E20EB00)
#define DPGGADJHCBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E20E610)
#define DPGGADJHCBG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E20E990)
#define DPGGADJHCBG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E20E9F0)

	class DPGGADJHCBG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JKKIIFEGCBD; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DPGGADJHCBG")->GetStaticField(0x451D0);
		}

		// static const ::System::Object DEKMCNNKEME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGGADJHCBG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DPGGADJHCBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPGGADJHCBG*))((::PBYTE)hIl2Cpp + DPGGADJHCBG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPGGADJHCBG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DPGGADJHCBG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGGADJHCBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DPGGADJHCBG* Clone()
		{
			return ((::DPGGADJHCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGGADJHCBG_CLONE_OFFSET))(this);
		}

		::System::UInt32 LAEGEPLDILM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGGADJHCBG_LAEGEPLDILM_OFFSET))(this);
		}

		::System::Void AKHEMBOCAGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DPGGADJHCBG_AKHEMBOCAGG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPGGADJHCBG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DPGGADJHCBG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DPGGADJHCBG*))((::PBYTE)hIl2Cpp + DPGGADJHCBG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGGADJHCBG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGGADJHCBG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DPGGADJHCBG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGGADJHCBG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DPGGADJHCBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPGGADJHCBG*))((::PBYTE)hIl2Cpp + DPGGADJHCBG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DPGGADJHCBG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
