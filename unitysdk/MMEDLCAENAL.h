#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMEDLCAENAL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MMEDLCAENAL_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1EA5E5C0)
#define MMEDLCAENAL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA5E930)
#define MMEDLCAENAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA5EC00)
#define MMEDLCAENAL_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA5E530)
#define MMEDLCAENAL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA5E500)
#define MMEDLCAENAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5E4F0)
#define MMEDLCAENAL_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1EA5E5D0)
#define MMEDLCAENAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA5E6F0)
#define MMEDLCAENAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA5E5E0)
#define MMEDLCAENAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA5E7C0)
#define MMEDLCAENAL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA5E480)
#define MMEDLCAENAL_KLDCODGDPIJ_OFFSET UNITYSDK_OFFSET(0x1EA5E5A0)
#define MMEDLCAENAL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA5EA80)
#define MMEDLCAENAL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA5EA40)
#define MMEDLCAENAL_NKCJKENMKCN_OFFSET UNITYSDK_OFFSET(0x1EA5E5B0)
#define MMEDLCAENAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA5E4E0)
#define MMEDLCAENAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA5E7F0)
#define MMEDLCAENAL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA5E850)

inline static constexpr unsigned int MMEDLCAENAL_TypeDefinitionIndex = 29374;

	class MMEDLCAENAL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AIPELNGAHCE; // 0x18
		::System::UInt32 NPFBAFODCBI; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::MMEDLCAENAL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MMEDLCAENAL*>**)UnitySDK::FromName("", "MMEDLCAENAL")->GetStaticField(0x572F0);
		}

		// static const ::System::Object JPCDGJNFGDI; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEDLCAENAL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MMEDLCAENAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMEDLCAENAL*))((::PBYTE)hIl2Cpp + MMEDLCAENAL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMEDLCAENAL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MMEDLCAENAL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MMEDLCAENAL*>*(*)())((::PBYTE)hIl2Cpp + MMEDLCAENAL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEDLCAENAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MMEDLCAENAL* Clone()
		{
			return ((::MMEDLCAENAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEDLCAENAL_CLONE_OFFSET))(this);
		}

		::System::UInt32 KLDCODGDPIJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEDLCAENAL_KLDCODGDPIJ_OFFSET))(this);
		}

		::System::Void NKCJKENMKCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MMEDLCAENAL_NKCJKENMKCN_OFFSET))(this, a1);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEDLCAENAL_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MMEDLCAENAL_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMEDLCAENAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MMEDLCAENAL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MMEDLCAENAL*))((::PBYTE)hIl2Cpp + MMEDLCAENAL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEDLCAENAL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEDLCAENAL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MMEDLCAENAL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEDLCAENAL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MMEDLCAENAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMEDLCAENAL*))((::PBYTE)hIl2Cpp + MMEDLCAENAL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MMEDLCAENAL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
