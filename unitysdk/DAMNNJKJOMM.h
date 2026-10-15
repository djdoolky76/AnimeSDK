#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAMNNJKJOMM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DAMNNJKJOMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1546E0)
#define DAMNNJKJOMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E154A70)
#define DAMNNJKJOMM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1540D0)
#define DAMNNJKJOMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E153FE0)
#define DAMNNJKJOMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E153F50)
#define DAMNNJKJOMM_EOJGEEKBOGJ_OFFSET UNITYSDK_OFFSET(0x1E154140)
#define DAMNNJKJOMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1541E0)
#define DAMNNJKJOMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E154180)
#define DAMNNJKJOMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E154310)
#define DAMNNJKJOMM_GPLEKEFCPHE_OFFSET UNITYSDK_OFFSET(0x1E154160)
#define DAMNNJKJOMM_IOIIPNACPIP_OFFSET UNITYSDK_OFFSET(0x1E154130)
#define DAMNNJKJOMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E153EE0)
#define DAMNNJKJOMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E154920)
#define DAMNNJKJOMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1548B0)
#define DAMNNJKJOMM_NLKGHALCKCH_OFFSET UNITYSDK_OFFSET(0x1E154170)
#define DAMNNJKJOMM_NPJFIPKBOKM_OFFSET UNITYSDK_OFFSET(0x1E154150)
#define DAMNNJKJOMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E153F40)
#define DAMNNJKJOMM_POHDNDCCDKP_OFFSET UNITYSDK_OFFSET(0x1E154120)
#define DAMNNJKJOMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1544E0)
#define DAMNNJKJOMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E154540)

	class DAMNNJKJOMM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GCCEIGKLCKI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LOHBLJFANGC; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 IHBKIFNFAFH; // 0x28
		::System::UInt32 NAADCOEGPJG; // 0x2C
		static ::Google::Protobuf::FieldCodec** StaticGet_CGIOBBLHPGI()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DAMNNJKJOMM")->GetStaticField(0x24D10);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DAMNNJKJOMM")->GetStaticField(0x24D18);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_MMNOKGPENDG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DAMNNJKJOMM")->GetStaticField(0x24D20);
		}

		// static const ::System::Object PAIANENCECB; // 0x0
		// static const ::System::Object CDKKGCKPIGE; // 0x0
		// static const ::System::Object OHBJLPCHEIB; // 0x0
		// static const ::System::Object HLEDBDEIJHG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMNNJKJOMM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DAMNNJKJOMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAMNNJKJOMM*))((::PBYTE)hIl2Cpp + DAMNNJKJOMM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAMNNJKJOMM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DAMNNJKJOMM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMNNJKJOMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DAMNNJKJOMM* Clone()
		{
			return ((::DAMNNJKJOMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMNNJKJOMM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* POHDNDCCDKP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMNNJKJOMM_POHDNDCCDKP_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IOIIPNACPIP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMNNJKJOMM_IOIIPNACPIP_OFFSET))(this);
		}

		::System::UInt32 EOJGEEKBOGJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMNNJKJOMM_EOJGEEKBOGJ_OFFSET))(this);
		}

		::System::Void NPJFIPKBOKM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DAMNNJKJOMM_NPJFIPKBOKM_OFFSET))(this, a1);
		}

		::System::UInt32 GPLEKEFCPHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMNNJKJOMM_GPLEKEFCPHE_OFFSET))(this);
		}

		::System::Void NLKGHALCKCH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DAMNNJKJOMM_NLKGHALCKCH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DAMNNJKJOMM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DAMNNJKJOMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DAMNNJKJOMM*))((::PBYTE)hIl2Cpp + DAMNNJKJOMM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMNNJKJOMM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMNNJKJOMM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DAMNNJKJOMM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMNNJKJOMM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DAMNNJKJOMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAMNNJKJOMM*))((::PBYTE)hIl2Cpp + DAMNNJKJOMM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DAMNNJKJOMM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
