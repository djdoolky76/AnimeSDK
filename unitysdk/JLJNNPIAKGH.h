#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLJNNPIAKGH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JLJNNPIAKGH_BHDNBMMEEIM_OFFSET UNITYSDK_OFFSET(0x1E77D0B0)
#define JLJNNPIAKGH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E77D400)
#define JLJNNPIAKGH_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0x1E77D0C0)
#define JLJNNPIAKGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E77D6D0)
#define JLJNNPIAKGH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E77D050)
#define JLJNNPIAKGH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E77D020)
#define JLJNNPIAKGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E77D010)
#define JLJNNPIAKGH_DLBMEBEGNGL_OFFSET UNITYSDK_OFFSET(0x1E77D0D0)
#define JLJNNPIAKGH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E77D1C0)
#define JLJNNPIAKGH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E77D0E0)
#define JLJNNPIAKGH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E77D290)
#define JLJNNPIAKGH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E77CFD0)
#define JLJNNPIAKGH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E77D550)
#define JLJNNPIAKGH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E77D510)
#define JLJNNPIAKGH_MJBPJCPIMAB_OFFSET UNITYSDK_OFFSET(0x1E77D0A0)
#define JLJNNPIAKGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E77D000)
#define JLJNNPIAKGH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E77D2C0)
#define JLJNNPIAKGH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E77D320)

inline static constexpr unsigned int JLJNNPIAKGH_TypeDefinitionIndex = 32956;

	class JLJNNPIAKGH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NBFPOGFBMFE; // 0x18
		::System::UInt32 KMHMCPNEGOH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JLJNNPIAKGH")->GetStaticField(0x697F0);
		}

		// static const ::System::Object MGMJFMGLCGD; // 0x0
		// static const ::System::Object GKBPDIPOFGE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJNNPIAKGH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JLJNNPIAKGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLJNNPIAKGH*))((::PBYTE)hIl2Cpp + JLJNNPIAKGH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLJNNPIAKGH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JLJNNPIAKGH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJNNPIAKGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JLJNNPIAKGH* Clone()
		{
			return ((::JLJNNPIAKGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJNNPIAKGH_CLONE_OFFSET))(this);
		}

		::System::UInt32 MJBPJCPIMAB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJNNPIAKGH_MJBPJCPIMAB_OFFSET))(this);
		}

		::System::Void BHDNBMMEEIM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLJNNPIAKGH_BHDNBMMEEIM_OFFSET))(this, a1);
		}

		::System::UInt32 CBOFFPEFEPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJNNPIAKGH_CBOFFPEFEPP_OFFSET))(this);
		}

		::System::Void DLBMEBEGNGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLJNNPIAKGH_DLBMEBEGNGL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLJNNPIAKGH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JLJNNPIAKGH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLJNNPIAKGH*))((::PBYTE)hIl2Cpp + JLJNNPIAKGH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJNNPIAKGH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJNNPIAKGH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JLJNNPIAKGH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJNNPIAKGH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JLJNNPIAKGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLJNNPIAKGH*))((::PBYTE)hIl2Cpp + JLJNNPIAKGH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JLJNNPIAKGH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
