#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMBBHFNJILI;
class OKCCLEEPELM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MMBBHFNJILI_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1EA8A350)
#define MMBBHFNJILI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA8A810)
#define MMBBHFNJILI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA8AB10)
#define MMBBHFNJILI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA8A2A0)
#define MMBBHFNJILI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA8A220)
#define MMBBHFNJILI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA8A210)
#define MMBBHFNJILI_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1EA8A360)
#define MMBBHFNJILI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA8A4F0)
#define MMBBHFNJILI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA8A370)
#define MMBBHFNJILI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA8A670)
#define MMBBHFNJILI_GKMAAJNGBMB_OFFSET UNITYSDK_OFFSET(0x1EA8A340)
#define MMBBHFNJILI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA8A1D0)
#define MMBBHFNJILI_KFIBOPNLELF_OFFSET UNITYSDK_OFFSET(0x1EA8A330)
#define MMBBHFNJILI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA8A980)
#define MMBBHFNJILI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA8A8E0)
#define MMBBHFNJILI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA8A200)
#define MMBBHFNJILI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA8A6D0)
#define MMBBHFNJILI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA8A730)

	class MMBBHFNJILI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::OKCCLEEPELM* EKDDDAFOADF; // 0x18
		::System::UInt32 NPFBAFODCBI; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MMBBHFNJILI")->GetStaticField(0x17F70);
		}

		// static const ::System::Object KANPKHJJCDI; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBBHFNJILI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MMBBHFNJILI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMBBHFNJILI*))((::PBYTE)hIl2Cpp + MMBBHFNJILI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMBBHFNJILI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MMBBHFNJILI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBBHFNJILI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MMBBHFNJILI* Clone()
		{
			return ((::MMBBHFNJILI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBBHFNJILI_CLONE_OFFSET))(this);
		}

		::OKCCLEEPELM* KFIBOPNLELF()
		{
			return ((::OKCCLEEPELM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBBHFNJILI_KFIBOPNLELF_OFFSET))(this);
		}

		::System::Void GKMAAJNGBMB(::OKCCLEEPELM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKCCLEEPELM*))((::PBYTE)hIl2Cpp + MMBBHFNJILI_GKMAAJNGBMB_OFFSET))(this, a1);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBBHFNJILI_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MMBBHFNJILI_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMBBHFNJILI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MMBBHFNJILI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MMBBHFNJILI*))((::PBYTE)hIl2Cpp + MMBBHFNJILI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBBHFNJILI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBBHFNJILI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MMBBHFNJILI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBBHFNJILI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MMBBHFNJILI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMBBHFNJILI*))((::PBYTE)hIl2Cpp + MMBBHFNJILI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MMBBHFNJILI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
