#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIDJPBLNDLH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NIDJPBLNDLH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAF9640)
#define NIDJPBLNDLH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF9860)
#define NIDJPBLNDLH_CDHEPOFDMPP_OFFSET UNITYSDK_OFFSET(0x1EAF92B0)
#define NIDJPBLNDLH_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAF9230)
#define NIDJPBLNDLH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAF9200)
#define NIDJPBLNDLH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF91F0)
#define NIDJPBLNDLH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAF93C0)
#define NIDJPBLNDLH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAF92C0)
#define NIDJPBLNDLH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAF9530)
#define NIDJPBLNDLH_JHBKBFPJGPB_OFFSET UNITYSDK_OFFSET(0x1EAF92A0)
#define NIDJPBLNDLH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAF9180)
#define NIDJPBLNDLH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAF9700)
#define NIDJPBLNDLH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAF96D0)
#define NIDJPBLNDLH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAF91E0)
#define NIDJPBLNDLH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAF9560)
#define NIDJPBLNDLH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAF95C0)

inline static constexpr unsigned int NIDJPBLNDLH_TypeDefinitionIndex = 29535;

	class NIDJPBLNDLH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OGCMNCBOEJG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NIDJPBLNDLH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NIDJPBLNDLH*>**)UnitySDK::FromName("", "NIDJPBLNDLH")->GetStaticField(0x650E0);
		}

		// static const ::System::Object HDGKLMKGNND; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDJPBLNDLH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NIDJPBLNDLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIDJPBLNDLH*))((::PBYTE)hIl2Cpp + NIDJPBLNDLH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIDJPBLNDLH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NIDJPBLNDLH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NIDJPBLNDLH*>*(*)())((::PBYTE)hIl2Cpp + NIDJPBLNDLH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDJPBLNDLH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NIDJPBLNDLH* Clone()
		{
			return ((::NIDJPBLNDLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDJPBLNDLH_CLONE_OFFSET))(this);
		}

		::System::UInt32 JHBKBFPJGPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDJPBLNDLH_JHBKBFPJGPB_OFFSET))(this);
		}

		::System::Void CDHEPOFDMPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NIDJPBLNDLH_CDHEPOFDMPP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NIDJPBLNDLH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NIDJPBLNDLH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NIDJPBLNDLH*))((::PBYTE)hIl2Cpp + NIDJPBLNDLH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDJPBLNDLH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDJPBLNDLH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NIDJPBLNDLH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDJPBLNDLH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NIDJPBLNDLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIDJPBLNDLH*))((::PBYTE)hIl2Cpp + NIDJPBLNDLH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NIDJPBLNDLH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
