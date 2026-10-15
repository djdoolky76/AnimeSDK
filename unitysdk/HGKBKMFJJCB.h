#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMEOHDKGMHK.h"
#include "unitysdk/System/Object.h"
class HGKBKMFJJCB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HGKBKMFJJCB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E57C5D0)
#define HGKBKMFJJCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E57C830)
#define HGKBKMFJJCB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E57C200)
#define HGKBKMFJJCB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E57C1D0)
#define HGKBKMFJJCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E57C1C0)
#define HGKBKMFJJCB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E57C330)
#define HGKBKMFJJCB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E57C260)
#define HGKBKMFJJCB_GELDOFPOAJE_OFFSET UNITYSDK_OFFSET(0x1E57C250)
#define HGKBKMFJJCB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E57C4A0)
#define HGKBKMFJJCB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E57C180)
#define HGKBKMFJJCB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E57C6D0)
#define HGKBKMFJJCB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E57C6A0)
#define HGKBKMFJJCB_OEOLLINMHND_OFFSET UNITYSDK_OFFSET(0x1E57C240)
#define HGKBKMFJJCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E57C1B0)
#define HGKBKMFJJCB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E57C4D0)
#define HGKBKMFJJCB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E57C530)

	class HGKBKMFJJCB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JMEOHDKGMHK BIADFCJHOGN; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HGKBKMFJJCB")->GetStaticField(0x37810);
		}

		// static const ::System::Object OPLCEPOKLEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKBKMFJJCB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HGKBKMFJJCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGKBKMFJJCB*))((::PBYTE)hIl2Cpp + HGKBKMFJJCB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGKBKMFJJCB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HGKBKMFJJCB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKBKMFJJCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HGKBKMFJJCB* Clone()
		{
			return ((::HGKBKMFJJCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKBKMFJJCB_CLONE_OFFSET))(this);
		}

		::JMEOHDKGMHK OEOLLINMHND()
		{
			return ((::JMEOHDKGMHK(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKBKMFJJCB_OEOLLINMHND_OFFSET))(this);
		}

		::System::Void GELDOFPOAJE(::JMEOHDKGMHK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMEOHDKGMHK))((::PBYTE)hIl2Cpp + HGKBKMFJJCB_GELDOFPOAJE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HGKBKMFJJCB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HGKBKMFJJCB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGKBKMFJJCB*))((::PBYTE)hIl2Cpp + HGKBKMFJJCB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKBKMFJJCB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKBKMFJJCB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HGKBKMFJJCB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKBKMFJJCB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HGKBKMFJJCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGKBKMFJJCB*))((::PBYTE)hIl2Cpp + HGKBKMFJJCB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HGKBKMFJJCB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
