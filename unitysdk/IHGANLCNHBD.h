#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHGANLCNHBD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IHGANLCNHBD_BNMLDIAJJNH_OFFSET UNITYSDK_OFFSET(0x1E65C760)
#define IHGANLCNHBD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E65CAD0)
#define IHGANLCNHBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E65CE70)
#define IHGANLCNHBD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E65C6E0)
#define IHGANLCNHBD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E65C6A0)
#define IHGANLCNHBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E65C690)
#define IHGANLCNHBD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E65C840)
#define IHGANLCNHBD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E65C7C0)
#define IHGANLCNHBD_FCHEMONJFGI_OFFSET UNITYSDK_OFFSET(0x1E65C7A0)
#define IHGANLCNHBD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E65C910)
#define IHGANLCNHBD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E65C620)
#define IHGANLCNHBD_MALAHHBDPFD_OFFSET UNITYSDK_OFFSET(0x1E65C790)
#define IHGANLCNHBD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E65CCB0)
#define IHGANLCNHBD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E65CC60)
#define IHGANLCNHBD_NBLLLFIFBLL_OFFSET UNITYSDK_OFFSET(0x1E65C7B0)
#define IHGANLCNHBD_OIDHANEGANF_OFFSET UNITYSDK_OFFSET(0x1E65C770)
#define IHGANLCNHBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E65C680)
#define IHGANLCNHBD_PPPJMICNJIF_OFFSET UNITYSDK_OFFSET(0x1E65C780)
#define IHGANLCNHBD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E65C940)
#define IHGANLCNHBD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E65C9A0)

	class IHGANLCNHBD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KDAKFCFLBGE; // 0x18
		::System::UInt32 BGGMKOBGPDA; // 0x1C
		::System::UInt32 NKFENJAJNMA; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IHGANLCNHBD")->GetStaticField(0x4CFC0);
		}

		// static const ::System::Object LMEJGPJCKLM; // 0x0
		// static const ::System::Object JCOLEJJLEHL; // 0x0
		// static const ::System::Object NLAHKDAONBF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGANLCNHBD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IHGANLCNHBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHGANLCNHBD*))((::PBYTE)hIl2Cpp + IHGANLCNHBD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHGANLCNHBD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IHGANLCNHBD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGANLCNHBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IHGANLCNHBD* Clone()
		{
			return ((::IHGANLCNHBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGANLCNHBD_CLONE_OFFSET))(this);
		}

		::System::UInt32 BNMLDIAJJNH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGANLCNHBD_BNMLDIAJJNH_OFFSET))(this);
		}

		::System::Void OIDHANEGANF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IHGANLCNHBD_OIDHANEGANF_OFFSET))(this, a1);
		}

		::System::UInt32 PPPJMICNJIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGANLCNHBD_PPPJMICNJIF_OFFSET))(this);
		}

		::System::Void MALAHHBDPFD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IHGANLCNHBD_MALAHHBDPFD_OFFSET))(this, a1);
		}

		::System::UInt32 FCHEMONJFGI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGANLCNHBD_FCHEMONJFGI_OFFSET))(this);
		}

		::System::Void NBLLLFIFBLL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IHGANLCNHBD_NBLLLFIFBLL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IHGANLCNHBD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IHGANLCNHBD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IHGANLCNHBD*))((::PBYTE)hIl2Cpp + IHGANLCNHBD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGANLCNHBD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGANLCNHBD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IHGANLCNHBD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGANLCNHBD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IHGANLCNHBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHGANLCNHBD*))((::PBYTE)hIl2Cpp + IHGANLCNHBD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IHGANLCNHBD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
