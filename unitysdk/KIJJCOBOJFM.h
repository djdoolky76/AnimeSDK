#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIJJCOBOJFM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KIJJCOBOJFM_BNOOIDMNEPD_OFFSET UNITYSDK_OFFSET(0x1E85DD50)
#define KIJJCOBOJFM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E85E0C0)
#define KIJJCOBOJFM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E85E2E0)
#define KIJJCOBOJFM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E85DD10)
#define KIJJCOBOJFM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E85DCE0)
#define KIJJCOBOJFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E85DCD0)
#define KIJJCOBOJFM_EBPPDPFECME_OFFSET UNITYSDK_OFFSET(0x1E85DD60)
#define KIJJCOBOJFM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E85DE40)
#define KIJJCOBOJFM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E85DD70)
#define KIJJCOBOJFM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E85DFB0)
#define KIJJCOBOJFM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E85DC90)
#define KIJJCOBOJFM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E85E180)
#define KIJJCOBOJFM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E85E150)
#define KIJJCOBOJFM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E85DCC0)
#define KIJJCOBOJFM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E85DFE0)
#define KIJJCOBOJFM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E85E040)

	class KIJJCOBOJFM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KMMMIEFBCII; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KIJJCOBOJFM")->GetStaticField(0x1A6F0);
		}

		// static const ::System::Object ABJMPJGCOLJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJJCOBOJFM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KIJJCOBOJFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIJJCOBOJFM*))((::PBYTE)hIl2Cpp + KIJJCOBOJFM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIJJCOBOJFM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KIJJCOBOJFM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJJCOBOJFM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KIJJCOBOJFM* Clone()
		{
			return ((::KIJJCOBOJFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJJCOBOJFM_CLONE_OFFSET))(this);
		}

		::System::UInt32 BNOOIDMNEPD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJJCOBOJFM_BNOOIDMNEPD_OFFSET))(this);
		}

		::System::Void EBPPDPFECME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIJJCOBOJFM_EBPPDPFECME_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIJJCOBOJFM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KIJJCOBOJFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KIJJCOBOJFM*))((::PBYTE)hIl2Cpp + KIJJCOBOJFM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJJCOBOJFM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJJCOBOJFM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KIJJCOBOJFM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJJCOBOJFM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KIJJCOBOJFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIJJCOBOJFM*))((::PBYTE)hIl2Cpp + KIJJCOBOJFM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KIJJCOBOJFM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
