#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIHMFACHENB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NIHMFACHENB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB30450)
#define NIHMFACHENB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB30670)
#define NIHMFACHENB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB300A0)
#define NIHMFACHENB_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1EB300E0)
#define NIHMFACHENB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB30070)
#define NIHMFACHENB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB30060)
#define NIHMFACHENB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB301D0)
#define NIHMFACHENB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB30100)
#define NIHMFACHENB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB30340)
#define NIHMFACHENB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB30020)
#define NIHMFACHENB_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1EB300F0)
#define NIHMFACHENB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB30510)
#define NIHMFACHENB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB304E0)
#define NIHMFACHENB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB30050)
#define NIHMFACHENB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB30370)
#define NIHMFACHENB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB303D0)

inline static constexpr unsigned int NIHMFACHENB_TypeDefinitionIndex = 26254;

	class NIHMFACHENB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NIHMFACHENB")->GetStaticField(0x63DC0);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHMFACHENB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NIHMFACHENB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIHMFACHENB*))((::PBYTE)hIl2Cpp + NIHMFACHENB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIHMFACHENB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NIHMFACHENB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHMFACHENB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NIHMFACHENB* Clone()
		{
			return ((::NIHMFACHENB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHMFACHENB_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHMFACHENB_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NIHMFACHENB_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NIHMFACHENB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NIHMFACHENB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NIHMFACHENB*))((::PBYTE)hIl2Cpp + NIHMFACHENB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHMFACHENB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHMFACHENB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NIHMFACHENB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHMFACHENB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NIHMFACHENB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIHMFACHENB*))((::PBYTE)hIl2Cpp + NIHMFACHENB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NIHMFACHENB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
