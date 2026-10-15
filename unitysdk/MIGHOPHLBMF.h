#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MIGHOPHLBMF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MIGHOPHLBMF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA3BD90)
#define MIGHOPHLBMF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA3BFC0)
#define MIGHOPHLBMF_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA3B860)
#define MIGHOPHLBMF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA3B820)
#define MIGHOPHLBMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA3B810)
#define MIGHOPHLBMF_DNPBHEMIBPK_OFFSET UNITYSDK_OFFSET(0x1EA3B8F0)
#define MIGHOPHLBMF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA3BA00)
#define MIGHOPHLBMF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA3B960)
#define MIGHOPHLBMF_FOPLDCBOMFM_OFFSET UNITYSDK_OFFSET(0x1EA3B950)
#define MIGHOPHLBMF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA3BB00)
#define MIGHOPHLBMF_HGFGPILJEOP_OFFSET UNITYSDK_OFFSET(0x1EA3B920)
#define MIGHOPHLBMF_IMFBLHADADC_OFFSET UNITYSDK_OFFSET(0x1EA3B8E0)
#define MIGHOPHLBMF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA3B7A0)
#define MIGHOPHLBMF_KAHLNDAIFDL_OFFSET UNITYSDK_OFFSET(0x1EA3B930)
#define MIGHOPHLBMF_LHOPHLMOHMJ_OFFSET UNITYSDK_OFFSET(0x1EA3B910)
#define MIGHOPHLBMF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA3BF10)
#define MIGHOPHLBMF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA3BEC0)
#define MIGHOPHLBMF_NNBHOEMFHIF_OFFSET UNITYSDK_OFFSET(0x1EA3B940)
#define MIGHOPHLBMF_OGGIEJLNGHO_OFFSET UNITYSDK_OFFSET(0x1EA3B900)
#define MIGHOPHLBMF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA3B800)
#define MIGHOPHLBMF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA3BB30)
#define MIGHOPHLBMF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA3BB90)

	class MIGHOPHLBMF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean IOPOELIKMIE; // 0x18
		::System::Boolean BBJIDLMAPDF; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 PANHBLLDMGI; // 0x1C
		::System::UInt32 GFMHFBDKDOE; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MIGHOPHLBMF")->GetStaticField(0x52B30);
		}

		// static const ::System::Object EMPDMPHKKGB; // 0x0
		// static const ::System::Object EKJIPCEFPOG; // 0x0
		// static const ::System::Object CCMPAAHICMH; // 0x0
		// static const ::System::Object CPDECFMCKEM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHOPHLBMF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MIGHOPHLBMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MIGHOPHLBMF*))((::PBYTE)hIl2Cpp + MIGHOPHLBMF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIGHOPHLBMF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MIGHOPHLBMF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHOPHLBMF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MIGHOPHLBMF* Clone()
		{
			return ((::MIGHOPHLBMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHOPHLBMF_CLONE_OFFSET))(this);
		}

		::System::UInt32 IMFBLHADADC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHOPHLBMF_IMFBLHADADC_OFFSET))(this);
		}

		::System::Void DNPBHEMIBPK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIGHOPHLBMF_DNPBHEMIBPK_OFFSET))(this, a1);
		}

		::System::Boolean OGGIEJLNGHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHOPHLBMF_OGGIEJLNGHO_OFFSET))(this);
		}

		::System::Void LHOPHLMOHMJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIGHOPHLBMF_LHOPHLMOHMJ_OFFSET))(this, a1);
		}

		::System::Boolean HGFGPILJEOP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHOPHLBMF_HGFGPILJEOP_OFFSET))(this);
		}

		::System::Void KAHLNDAIFDL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIGHOPHLBMF_KAHLNDAIFDL_OFFSET))(this, a1);
		}

		::System::UInt32 NNBHOEMFHIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHOPHLBMF_NNBHOEMFHIF_OFFSET))(this);
		}

		::System::Void FOPLDCBOMFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIGHOPHLBMF_FOPLDCBOMFM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIGHOPHLBMF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MIGHOPHLBMF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MIGHOPHLBMF*))((::PBYTE)hIl2Cpp + MIGHOPHLBMF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHOPHLBMF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHOPHLBMF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIGHOPHLBMF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHOPHLBMF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MIGHOPHLBMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MIGHOPHLBMF*))((::PBYTE)hIl2Cpp + MIGHOPHLBMF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIGHOPHLBMF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
