#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BODGPACJIDJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BODGPACJIDJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FF6DFE0)
#define BODGPACJIDJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF6E200)
#define BODGPACJIDJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1FF6DBD0)
#define BODGPACJIDJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF6DBA0)
#define BODGPACJIDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6DB90)
#define BODGPACJIDJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FF6DD60)
#define BODGPACJIDJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FF6DC60)
#define BODGPACJIDJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FF6DED0)
#define BODGPACJIDJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FF6DB20)
#define BODGPACJIDJ_MCKPJPNDFMH_OFFSET UNITYSDK_OFFSET(0x1FF6DC40)
#define BODGPACJIDJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FF6E0A0)
#define BODGPACJIDJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FF6E070)
#define BODGPACJIDJ_NEJOEPHNIGN_OFFSET UNITYSDK_OFFSET(0x1FF6DC50)
#define BODGPACJIDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FF6DB80)
#define BODGPACJIDJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FF6DF00)
#define BODGPACJIDJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FF6DF60)

inline static constexpr unsigned int BODGPACJIDJ_TypeDefinitionIndex = 29790;

	class BODGPACJIDJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KLDNGBCHLJP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BODGPACJIDJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BODGPACJIDJ*>**)UnitySDK::FromName("", "BODGPACJIDJ")->GetStaticField(0x5CC40);
		}

		// static const ::System::Object PDLKAEKNIFE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODGPACJIDJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BODGPACJIDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BODGPACJIDJ*))((::PBYTE)hIl2Cpp + BODGPACJIDJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BODGPACJIDJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BODGPACJIDJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BODGPACJIDJ*>*(*)())((::PBYTE)hIl2Cpp + BODGPACJIDJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BODGPACJIDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BODGPACJIDJ* Clone()
		{
			return ((::BODGPACJIDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BODGPACJIDJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 MCKPJPNDFMH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BODGPACJIDJ_MCKPJPNDFMH_OFFSET))(this);
		}

		::System::Void NEJOEPHNIGN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BODGPACJIDJ_NEJOEPHNIGN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BODGPACJIDJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BODGPACJIDJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BODGPACJIDJ*))((::PBYTE)hIl2Cpp + BODGPACJIDJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BODGPACJIDJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BODGPACJIDJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BODGPACJIDJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BODGPACJIDJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BODGPACJIDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BODGPACJIDJ*))((::PBYTE)hIl2Cpp + BODGPACJIDJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BODGPACJIDJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
