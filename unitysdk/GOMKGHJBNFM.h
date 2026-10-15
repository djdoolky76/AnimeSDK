#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOMKGHJBNFM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GOMKGHJBNFM_AKCGHIOECFE_OFFSET UNITYSDK_OFFSET(0x1E4F2980)
#define GOMKGHJBNFM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4F2CB0)
#define GOMKGHJBNFM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F2F80)
#define GOMKGHJBNFM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4F2900)
#define GOMKGHJBNFM_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E4F2950)
#define GOMKGHJBNFM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4F28D0)
#define GOMKGHJBNFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F28C0)
#define GOMKGHJBNFM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4F2A70)
#define GOMKGHJBNFM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4F2990)
#define GOMKGHJBNFM_FBMICLGHCBD_OFFSET UNITYSDK_OFFSET(0x1E4F2970)
#define GOMKGHJBNFM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4F2B40)
#define GOMKGHJBNFM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4F2880)
#define GOMKGHJBNFM_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E4F2960)
#define GOMKGHJBNFM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4F2E00)
#define GOMKGHJBNFM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4F2DC0)
#define GOMKGHJBNFM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4F28B0)
#define GOMKGHJBNFM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4F2B70)
#define GOMKGHJBNFM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4F2BD0)

	class GOMKGHJBNFM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KHNMADKENHN; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GOMKGHJBNFM")->GetStaticField(0x2B480);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object CMDHAFJBKJF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMKGHJBNFM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GOMKGHJBNFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOMKGHJBNFM*))((::PBYTE)hIl2Cpp + GOMKGHJBNFM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOMKGHJBNFM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GOMKGHJBNFM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMKGHJBNFM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GOMKGHJBNFM* Clone()
		{
			return ((::GOMKGHJBNFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMKGHJBNFM_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMKGHJBNFM_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOMKGHJBNFM_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 FBMICLGHCBD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMKGHJBNFM_FBMICLGHCBD_OFFSET))(this);
		}

		::System::Void AKCGHIOECFE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOMKGHJBNFM_AKCGHIOECFE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOMKGHJBNFM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GOMKGHJBNFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GOMKGHJBNFM*))((::PBYTE)hIl2Cpp + GOMKGHJBNFM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMKGHJBNFM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMKGHJBNFM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOMKGHJBNFM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMKGHJBNFM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GOMKGHJBNFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOMKGHJBNFM*))((::PBYTE)hIl2Cpp + GOMKGHJBNFM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOMKGHJBNFM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
