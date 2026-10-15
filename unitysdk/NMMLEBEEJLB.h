#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMMLEBEEJLB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NMMLEBEEJLB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB7A2B0)
#define NMMLEBEEJLB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB7A4D0)
#define NMMLEBEEJLB_CJHJGLHAKCB_OFFSET UNITYSDK_OFFSET(0x1EB79F20)
#define NMMLEBEEJLB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB79EA0)
#define NMMLEBEEJLB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB79E70)
#define NMMLEBEEJLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB79E60)
#define NMMLEBEEJLB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB7A030)
#define NMMLEBEEJLB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB79F30)
#define NMMLEBEEJLB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB7A1A0)
#define NMMLEBEEJLB_GODJBJHLPMO_OFFSET UNITYSDK_OFFSET(0x1EB79F10)
#define NMMLEBEEJLB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB79DF0)
#define NMMLEBEEJLB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB7A370)
#define NMMLEBEEJLB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB7A340)
#define NMMLEBEEJLB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB79E50)
#define NMMLEBEEJLB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB7A1D0)
#define NMMLEBEEJLB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB7A230)

	class NMMLEBEEJLB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KODPJBHAAEB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NMMLEBEEJLB")->GetStaticField(0x6C670);
		}

		// static const ::System::Object BPFMHHCCHBD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NMMLEBEEJLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMMLEBEEJLB*))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMMLEBEEJLB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NMMLEBEEJLB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NMMLEBEEJLB* Clone()
		{
			return ((::NMMLEBEEJLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_CLONE_OFFSET))(this);
		}

		::System::UInt32 GODJBJHLPMO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_GODJBJHLPMO_OFFSET))(this);
		}

		::System::Void CJHJGLHAKCB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_CJHJGLHAKCB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NMMLEBEEJLB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NMMLEBEEJLB*))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NMMLEBEEJLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMMLEBEEJLB*))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
