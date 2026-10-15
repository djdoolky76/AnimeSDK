#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GALCNKIAHNN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GALCNKIAHNN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E421500)
#define GALCNKIAHNN_CBIMNNCPIJO_OFFSET UNITYSDK_OFFSET(0x1E421170)
#define GALCNKIAHNN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4217D0)
#define GALCNKIAHNN_CDPBEJOKJCH_OFFSET UNITYSDK_OFFSET(0x1E4211A0)
#define GALCNKIAHNN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E421100)
#define GALCNKIAHNN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4210D0)
#define GALCNKIAHNN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4210C0)
#define GALCNKIAHNN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4212C0)
#define GALCNKIAHNN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4211B0)
#define GALCNKIAHNN_FLOPPMNAMNH_OFFSET UNITYSDK_OFFSET(0x1E421180)
#define GALCNKIAHNN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E421390)
#define GALCNKIAHNN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E421050)
#define GALCNKIAHNN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E421650)
#define GALCNKIAHNN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E421610)
#define GALCNKIAHNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4210B0)
#define GALCNKIAHNN_PNLLLGEBKAL_OFFSET UNITYSDK_OFFSET(0x1E421190)
#define GALCNKIAHNN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4213C0)
#define GALCNKIAHNN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E421420)

inline static constexpr unsigned int GALCNKIAHNN_TypeDefinitionIndex = 31040;

	class GALCNKIAHNN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CJDCPGBIKLD; // 0x18
		::System::UInt32 PGNJHPCEKPO; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GALCNKIAHNN")->GetStaticField(0xBE80);
		}

		// static const ::System::Object LLCIHFMGEKN; // 0x0
		// static const ::System::Object FJBJKBKJNDN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GALCNKIAHNN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GALCNKIAHNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GALCNKIAHNN*))((::PBYTE)hIl2Cpp + GALCNKIAHNN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GALCNKIAHNN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GALCNKIAHNN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GALCNKIAHNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GALCNKIAHNN* Clone()
		{
			return ((::GALCNKIAHNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GALCNKIAHNN_CLONE_OFFSET))(this);
		}

		::System::UInt32 CBIMNNCPIJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GALCNKIAHNN_CBIMNNCPIJO_OFFSET))(this);
		}

		::System::Void FLOPPMNAMNH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GALCNKIAHNN_FLOPPMNAMNH_OFFSET))(this, a1);
		}

		::System::UInt32 PNLLLGEBKAL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GALCNKIAHNN_PNLLLGEBKAL_OFFSET))(this);
		}

		::System::Void CDPBEJOKJCH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GALCNKIAHNN_CDPBEJOKJCH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GALCNKIAHNN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GALCNKIAHNN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GALCNKIAHNN*))((::PBYTE)hIl2Cpp + GALCNKIAHNN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GALCNKIAHNN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GALCNKIAHNN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GALCNKIAHNN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GALCNKIAHNN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GALCNKIAHNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GALCNKIAHNN*))((::PBYTE)hIl2Cpp + GALCNKIAHNN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GALCNKIAHNN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
