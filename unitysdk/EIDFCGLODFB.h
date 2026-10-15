#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NADDHEILBBN.h"
#include "unitysdk/System/Object.h"
class EIDFCGLODFB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EIDFCGLODFB_ADBDJBGDPFC_OFFSET UNITYSDK_OFFSET(0x1E2A6AF0)
#define EIDFCGLODFB_BPKCPOOFHGL_OFFSET UNITYSDK_OFFSET(0x1E2A6B10)
#define EIDFCGLODFB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2A6F60)
#define EIDFCGLODFB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A7230)
#define EIDFCGLODFB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2A6A70)
#define EIDFCGLODFB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A6A30)
#define EIDFCGLODFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A6A20)
#define EIDFCGLODFB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2A6C00)
#define EIDFCGLODFB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2A6B70)
#define EIDFCGLODFB_FCAIJANDDDP_OFFSET UNITYSDK_OFFSET(0x1E2A6B40)
#define EIDFCGLODFB_FHEIFCBDCFB_OFFSET UNITYSDK_OFFSET(0x1E2A6B60)
#define EIDFCGLODFB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2A6CF0)
#define EIDFCGLODFB_JGLKJJBBBIF_OFFSET UNITYSDK_OFFSET(0x1E2A6B50)
#define EIDFCGLODFB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2A69B0)
#define EIDFCGLODFB_LLFIGPEBCNK_OFFSET UNITYSDK_OFFSET(0x1E2A6B20)
#define EIDFCGLODFB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2A7180)
#define EIDFCGLODFB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2A7130)
#define EIDFCGLODFB_OACFOGMIEBB_OFFSET UNITYSDK_OFFSET(0x1E2A6B00)
#define EIDFCGLODFB_OCACDPCLIBF_OFFSET UNITYSDK_OFFSET(0x1E2A6B30)
#define EIDFCGLODFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2A6A10)
#define EIDFCGLODFB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2A6D20)
#define EIDFCGLODFB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2A6D80)

	class EIDFCGLODFB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NADDHEILBBN GHBLADBOAIL; // 0x18
		::System::UInt32 EHCFPHJABDL; // 0x1C
		::System::Boolean NODDKHDPJJN; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 AFFBGDFNCBG; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EIDFCGLODFB")->GetStaticField(0x250A0);
		}

		// static const ::System::Object CJCMODHDMGH; // 0x0
		// static const ::System::Object IKFJOKHFFIM; // 0x0
		// static const ::System::Object OICKCNEBADE; // 0x0
		// static const ::System::Object FEGJODHHKKJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDFCGLODFB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EIDFCGLODFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIDFCGLODFB*))((::PBYTE)hIl2Cpp + EIDFCGLODFB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIDFCGLODFB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EIDFCGLODFB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDFCGLODFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EIDFCGLODFB* Clone()
		{
			return ((::EIDFCGLODFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDFCGLODFB_CLONE_OFFSET))(this);
		}

		::NADDHEILBBN ADBDJBGDPFC()
		{
			return ((::NADDHEILBBN(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDFCGLODFB_ADBDJBGDPFC_OFFSET))(this);
		}

		::System::Void OACFOGMIEBB(::NADDHEILBBN a1)
		{
			return ((::System::Void(*)(::PVOID, ::NADDHEILBBN))((::PBYTE)hIl2Cpp + EIDFCGLODFB_OACFOGMIEBB_OFFSET))(this, a1);
		}

		::System::Boolean BPKCPOOFHGL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDFCGLODFB_BPKCPOOFHGL_OFFSET))(this);
		}

		::System::Void LLFIGPEBCNK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EIDFCGLODFB_LLFIGPEBCNK_OFFSET))(this, a1);
		}

		::System::UInt32 OCACDPCLIBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDFCGLODFB_OCACDPCLIBF_OFFSET))(this);
		}

		::System::Void FCAIJANDDDP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EIDFCGLODFB_FCAIJANDDDP_OFFSET))(this, a1);
		}

		::System::UInt32 JGLKJJBBBIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDFCGLODFB_JGLKJJBBBIF_OFFSET))(this);
		}

		::System::Void FHEIFCBDCFB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EIDFCGLODFB_FHEIFCBDCFB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EIDFCGLODFB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EIDFCGLODFB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EIDFCGLODFB*))((::PBYTE)hIl2Cpp + EIDFCGLODFB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDFCGLODFB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDFCGLODFB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EIDFCGLODFB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDFCGLODFB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EIDFCGLODFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIDFCGLODFB*))((::PBYTE)hIl2Cpp + EIDFCGLODFB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EIDFCGLODFB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
