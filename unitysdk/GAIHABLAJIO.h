#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAIHABLAJIO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GAIHABLAJIO_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E41D3C0)
#define GAIHABLAJIO_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x1E41D3B0)
#define GAIHABLAJIO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E41D730)
#define GAIHABLAJIO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E41DA00)
#define GAIHABLAJIO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E41D330)
#define GAIHABLAJIO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E41D300)
#define GAIHABLAJIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E41D2F0)
#define GAIHABLAJIO_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E41D3D0)
#define GAIHABLAJIO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E41D4F0)
#define GAIHABLAJIO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E41D3E0)
#define GAIHABLAJIO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E41D5C0)
#define GAIHABLAJIO_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x1E41D3A0)
#define GAIHABLAJIO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E41D280)
#define GAIHABLAJIO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E41D880)
#define GAIHABLAJIO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E41D840)
#define GAIHABLAJIO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E41D2E0)
#define GAIHABLAJIO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E41D5F0)
#define GAIHABLAJIO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E41D650)

inline static constexpr unsigned int GAIHABLAJIO_TypeDefinitionIndex = 25505;

	class GAIHABLAJIO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PPNELLDGNPC; // 0x18
		::System::UInt32 NPFBAFODCBI; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GAIHABLAJIO")->GetStaticField(0xB1E0);
		}

		// static const ::System::Object GLIJLPOGDAK; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIHABLAJIO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GAIHABLAJIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAIHABLAJIO*))((::PBYTE)hIl2Cpp + GAIHABLAJIO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAIHABLAJIO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GAIHABLAJIO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIHABLAJIO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GAIHABLAJIO* Clone()
		{
			return ((::GAIHABLAJIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIHABLAJIO_CLONE_OFFSET))(this);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIHABLAJIO_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GAIHABLAJIO_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIHABLAJIO_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GAIHABLAJIO_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GAIHABLAJIO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GAIHABLAJIO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GAIHABLAJIO*))((::PBYTE)hIl2Cpp + GAIHABLAJIO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIHABLAJIO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIHABLAJIO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GAIHABLAJIO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIHABLAJIO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GAIHABLAJIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAIHABLAJIO*))((::PBYTE)hIl2Cpp + GAIHABLAJIO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GAIHABLAJIO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
