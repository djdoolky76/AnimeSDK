#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNGHOJJHKFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PNGHOJJHKFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFB8DD0)
#define PNGHOJJHKFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFB8E70)
#define PNGHOJJHKFN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFB8AC0)
#define PNGHOJJHKFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFB8A90)
#define PNGHOJJHKFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFB8A80)
#define PNGHOJJHKFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFB8BD0)
#define PNGHOJJHKFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFB8B00)
#define PNGHOJJHKFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFB8D30)
#define PNGHOJJHKFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFB8A40)
#define PNGHOJJHKFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFB8E20)
#define PNGHOJJHKFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFB8DF0)
#define PNGHOJJHKFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFB8A70)
#define PNGHOJJHKFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFB8D60)
#define PNGHOJJHKFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFB8DC0)

	class PNGHOJJHKFN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PNGHOJJHKFN")->GetStaticField(0x50CB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGHOJJHKFN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PNGHOJJHKFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNGHOJJHKFN*))((::PBYTE)hIl2Cpp + PNGHOJJHKFN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNGHOJJHKFN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PNGHOJJHKFN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGHOJJHKFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PNGHOJJHKFN* Clone()
		{
			return ((::PNGHOJJHKFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGHOJJHKFN_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNGHOJJHKFN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PNGHOJJHKFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNGHOJJHKFN*))((::PBYTE)hIl2Cpp + PNGHOJJHKFN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGHOJJHKFN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGHOJJHKFN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PNGHOJJHKFN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGHOJJHKFN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PNGHOJJHKFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNGHOJJHKFN*))((::PBYTE)hIl2Cpp + PNGHOJJHKFN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PNGHOJJHKFN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
