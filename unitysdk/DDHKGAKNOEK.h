#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDHKGAKNOEK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DDHKGAKNOEK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E17F060)
#define DDHKGAKNOEK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E17F280)
#define DDHKGAKNOEK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E17ECB0)
#define DDHKGAKNOEK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E17EC80)
#define DDHKGAKNOEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E17EC70)
#define DDHKGAKNOEK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E17EDE0)
#define DDHKGAKNOEK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E17ED10)
#define DDHKGAKNOEK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E17EF50)
#define DDHKGAKNOEK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E17EC30)
#define DDHKGAKNOEK_LINOICHODIM_OFFSET UNITYSDK_OFFSET(0x1E17ED00)
#define DDHKGAKNOEK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E17F120)
#define DDHKGAKNOEK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E17F0F0)
#define DDHKGAKNOEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E17EC60)
#define DDHKGAKNOEK_PEGNHFNMFEJ_OFFSET UNITYSDK_OFFSET(0x1E17ECF0)
#define DDHKGAKNOEK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E17EF80)
#define DDHKGAKNOEK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E17EFE0)

inline static constexpr unsigned int DDHKGAKNOEK_TypeDefinitionIndex = 28855;

	class DDHKGAKNOEK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ALHDKMPKABN; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DDHKGAKNOEK")->GetStaticField(0x2DD60);
		}

		// static const ::System::Object DDAEPENMNIF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHKGAKNOEK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DDHKGAKNOEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDHKGAKNOEK*))((::PBYTE)hIl2Cpp + DDHKGAKNOEK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDHKGAKNOEK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DDHKGAKNOEK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHKGAKNOEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DDHKGAKNOEK* Clone()
		{
			return ((::DDHKGAKNOEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHKGAKNOEK_CLONE_OFFSET))(this);
		}

		::System::UInt32 PEGNHFNMFEJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHKGAKNOEK_PEGNHFNMFEJ_OFFSET))(this);
		}

		::System::Void LINOICHODIM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DDHKGAKNOEK_LINOICHODIM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DDHKGAKNOEK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DDHKGAKNOEK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DDHKGAKNOEK*))((::PBYTE)hIl2Cpp + DDHKGAKNOEK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHKGAKNOEK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHKGAKNOEK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DDHKGAKNOEK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHKGAKNOEK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DDHKGAKNOEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDHKGAKNOEK*))((::PBYTE)hIl2Cpp + DDHKGAKNOEK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DDHKGAKNOEK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
