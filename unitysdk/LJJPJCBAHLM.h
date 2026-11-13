#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJJPJCBAHLM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LJJPJCBAHLM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F986F40)
#define LJJPJCBAHLM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F987210)
#define LJJPJCBAHLM_CLONE_OFFSET UNITYSDK_OFFSET(0x1F986B40)
#define LJJPJCBAHLM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F986B10)
#define LJJPJCBAHLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1F986B00)
#define LJJPJCBAHLM_DINOLMEHJOB_OFFSET UNITYSDK_OFFSET(0x1F986BE0)
#define LJJPJCBAHLM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F986D00)
#define LJJPJCBAHLM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F986BF0)
#define LJJPJCBAHLM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F986DD0)
#define LJJPJCBAHLM_GMCOLFLMGKK_OFFSET UNITYSDK_OFFSET(0x1F986BB0)
#define LJJPJCBAHLM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F986A90)
#define LJJPJCBAHLM_JPCONKBGPNL_OFFSET UNITYSDK_OFFSET(0x1F986BC0)
#define LJJPJCBAHLM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F987090)
#define LJJPJCBAHLM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F987050)
#define LJJPJCBAHLM_OKJFOBMKABF_OFFSET UNITYSDK_OFFSET(0x1F986BD0)
#define LJJPJCBAHLM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F986AF0)
#define LJJPJCBAHLM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F986E00)
#define LJJPJCBAHLM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F986E60)

inline static constexpr unsigned int LJJPJCBAHLM_TypeDefinitionIndex = 28307;

	class LJJPJCBAHLM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HOBHKFFLNGB; // 0x18
		::System::UInt32 MICDIDBPLPD; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::LJJPJCBAHLM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LJJPJCBAHLM*>**)UnitySDK::FromName("", "LJJPJCBAHLM")->GetStaticField(0x108E0);
		}

		// static const ::System::Object ELLPLDPODJE; // 0x0
		// static const ::System::Object DEGEMJAGCCM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJPJCBAHLM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LJJPJCBAHLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJJPJCBAHLM*))((::PBYTE)hIl2Cpp + LJJPJCBAHLM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJJPJCBAHLM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LJJPJCBAHLM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LJJPJCBAHLM*>*(*)())((::PBYTE)hIl2Cpp + LJJPJCBAHLM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJPJCBAHLM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LJJPJCBAHLM* Clone()
		{
			return ((::LJJPJCBAHLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJPJCBAHLM_CLONE_OFFSET))(this);
		}

		::System::UInt32 GMCOLFLMGKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJPJCBAHLM_GMCOLFLMGKK_OFFSET))(this);
		}

		::System::Void JPCONKBGPNL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LJJPJCBAHLM_JPCONKBGPNL_OFFSET))(this, a1);
		}

		::System::UInt32 OKJFOBMKABF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJPJCBAHLM_OKJFOBMKABF_OFFSET))(this);
		}

		::System::Void DINOLMEHJOB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LJJPJCBAHLM_DINOLMEHJOB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJJPJCBAHLM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LJJPJCBAHLM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LJJPJCBAHLM*))((::PBYTE)hIl2Cpp + LJJPJCBAHLM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJPJCBAHLM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJPJCBAHLM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LJJPJCBAHLM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJPJCBAHLM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LJJPJCBAHLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJJPJCBAHLM*))((::PBYTE)hIl2Cpp + LJJPJCBAHLM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LJJPJCBAHLM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
