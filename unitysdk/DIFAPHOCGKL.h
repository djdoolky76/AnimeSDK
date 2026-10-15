#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIFAPHOCGKL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DIFAPHOCGKL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1BC710)
#define DIFAPHOCGKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1BC9E0)
#define DIFAPHOCGKL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1BC360)
#define DIFAPHOCGKL_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E1BC3D0)
#define DIFAPHOCGKL_COKGJAJDFBN_OFFSET UNITYSDK_OFFSET(0x1E1BC3B0)
#define DIFAPHOCGKL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1BC330)
#define DIFAPHOCGKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BC320)
#define DIFAPHOCGKL_DCIDHPGBHJF_OFFSET UNITYSDK_OFFSET(0x1E1BC3C0)
#define DIFAPHOCGKL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1BC4D0)
#define DIFAPHOCGKL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1BC3F0)
#define DIFAPHOCGKL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1BC5A0)
#define DIFAPHOCGKL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1BC2E0)
#define DIFAPHOCGKL_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E1BC3E0)
#define DIFAPHOCGKL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1BC860)
#define DIFAPHOCGKL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1BC820)
#define DIFAPHOCGKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1BC310)
#define DIFAPHOCGKL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1BC5D0)
#define DIFAPHOCGKL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1BC630)

	class DIFAPHOCGKL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		::System::UInt32 PDNLLKHCOBO; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DIFAPHOCGKL")->GetStaticField(0x35EA0);
		}

		// static const ::System::Object MEDEPMKJNBB; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFAPHOCGKL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DIFAPHOCGKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIFAPHOCGKL*))((::PBYTE)hIl2Cpp + DIFAPHOCGKL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIFAPHOCGKL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DIFAPHOCGKL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFAPHOCGKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DIFAPHOCGKL* Clone()
		{
			return ((::DIFAPHOCGKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFAPHOCGKL_CLONE_OFFSET))(this);
		}

		::System::UInt32 COKGJAJDFBN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFAPHOCGKL_COKGJAJDFBN_OFFSET))(this);
		}

		::System::Void DCIDHPGBHJF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIFAPHOCGKL_DCIDHPGBHJF_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFAPHOCGKL_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIFAPHOCGKL_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DIFAPHOCGKL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DIFAPHOCGKL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DIFAPHOCGKL*))((::PBYTE)hIl2Cpp + DIFAPHOCGKL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFAPHOCGKL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFAPHOCGKL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DIFAPHOCGKL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFAPHOCGKL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DIFAPHOCGKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIFAPHOCGKL*))((::PBYTE)hIl2Cpp + DIFAPHOCGKL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DIFAPHOCGKL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
