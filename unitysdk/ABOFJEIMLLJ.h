#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABOFJEIMLLJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ABOFJEIMLLJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDD1940)
#define ABOFJEIMLLJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD1C10)
#define ABOFJEIMLLJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDD1540)
#define ABOFJEIMLLJ_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1DDD15D0)
#define ABOFJEIMLLJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDD1510)
#define ABOFJEIMLLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD1500)
#define ABOFJEIMLLJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDD1700)
#define ABOFJEIMLLJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDD15F0)
#define ABOFJEIMLLJ_FOPLDCBOMFM_OFFSET UNITYSDK_OFFSET(0x1DDD15C0)
#define ABOFJEIMLLJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDD17D0)
#define ABOFJEIMLLJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDD1490)
#define ABOFJEIMLLJ_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1DDD15E0)
#define ABOFJEIMLLJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDD1A90)
#define ABOFJEIMLLJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDD1A50)
#define ABOFJEIMLLJ_NNBHOEMFHIF_OFFSET UNITYSDK_OFFSET(0x1DDD15B0)
#define ABOFJEIMLLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDD14F0)
#define ABOFJEIMLLJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDD1800)
#define ABOFJEIMLLJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDD1860)

	class ABOFJEIMLLJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		::System::UInt32 GFMHFBDKDOE; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ABOFJEIMLLJ")->GetStaticField(0x118F0);
		}

		// static const ::System::Object CPDECFMCKEM; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ABOFJEIMLLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABOFJEIMLLJ*))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ABOFJEIMLLJ* Clone()
		{
			return ((::ABOFJEIMLLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 NNBHOEMFHIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_NNBHOEMFHIF_OFFSET))(this);
		}

		::System::Void FOPLDCBOMFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_FOPLDCBOMFM_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ABOFJEIMLLJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABOFJEIMLLJ*))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ABOFJEIMLLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABOFJEIMLLJ*))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
