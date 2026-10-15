#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALMGFDOPLGA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ALMGFDOPLGA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E512AC0)
#define ALMGFDOPLGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E512CE0)
#define ALMGFDOPLGA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E512710)
#define ALMGFDOPLGA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5126E0)
#define ALMGFDOPLGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5126D0)
#define ALMGFDOPLGA_DECLCLGGOGD_OFFSET UNITYSDK_OFFSET(0x1E512760)
#define ALMGFDOPLGA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E512840)
#define ALMGFDOPLGA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E512770)
#define ALMGFDOPLGA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5129B0)
#define ALMGFDOPLGA_HOFJNIJMEGJ_OFFSET UNITYSDK_OFFSET(0x1E512750)
#define ALMGFDOPLGA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E512690)
#define ALMGFDOPLGA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E512B80)
#define ALMGFDOPLGA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E512B50)
#define ALMGFDOPLGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5126C0)
#define ALMGFDOPLGA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5129E0)
#define ALMGFDOPLGA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E512A40)

	class ALMGFDOPLGA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OEHAKOKDOAA; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ALMGFDOPLGA")->GetStaticField(0x39DF0);
		}

		// static const ::System::Object HBFMDPBHHHE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMGFDOPLGA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ALMGFDOPLGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMGFDOPLGA*))((::PBYTE)hIl2Cpp + ALMGFDOPLGA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALMGFDOPLGA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ALMGFDOPLGA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMGFDOPLGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ALMGFDOPLGA* Clone()
		{
			return ((::ALMGFDOPLGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMGFDOPLGA_CLONE_OFFSET))(this);
		}

		::System::UInt32 HOFJNIJMEGJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMGFDOPLGA_HOFJNIJMEGJ_OFFSET))(this);
		}

		::System::Void DECLCLGGOGD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALMGFDOPLGA_DECLCLGGOGD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALMGFDOPLGA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ALMGFDOPLGA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALMGFDOPLGA*))((::PBYTE)hIl2Cpp + ALMGFDOPLGA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMGFDOPLGA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMGFDOPLGA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ALMGFDOPLGA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMGFDOPLGA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ALMGFDOPLGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMGFDOPLGA*))((::PBYTE)hIl2Cpp + ALMGFDOPLGA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ALMGFDOPLGA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
