#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAMLGHGHIOD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FAMLGHGHIOD_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E329960)
#define FAMLGHGHIOD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E329CC0)
#define FAMLGHGHIOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E32A0B0)
#define FAMLGHGHIOD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3298A0)
#define FAMLGHGHIOD_CNLADHPJHBC_OFFSET UNITYSDK_OFFSET(0x1E329940)
#define FAMLGHGHIOD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E329860)
#define FAMLGHGHIOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E329850)
#define FAMLGHGHIOD_DFEPFHMLCAO_OFFSET UNITYSDK_OFFSET(0x1E329950)
#define FAMLGHGHIOD_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E329970)
#define FAMLGHGHIOD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E329A00)
#define FAMLGHGHIOD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E329980)
#define FAMLGHGHIOD_FOPLDCBOMFM_OFFSET UNITYSDK_OFFSET(0x1E329930)
#define FAMLGHGHIOD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E329AE0)
#define FAMLGHGHIOD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3297E0)
#define FAMLGHGHIOD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E329EF0)
#define FAMLGHGHIOD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E329EA0)
#define FAMLGHGHIOD_NNBHOEMFHIF_OFFSET UNITYSDK_OFFSET(0x1E329920)
#define FAMLGHGHIOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E329840)
#define FAMLGHGHIOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E329B20)
#define FAMLGHGHIOD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E329B80)

inline static constexpr unsigned int FAMLGHGHIOD_TypeDefinitionIndex = 27734;

	class FAMLGHGHIOD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 NPFBAFODCBI; // 0x18
		::System::UInt32 GFMHFBDKDOE; // 0x20
		::System::UInt32 AOMDFABEOIE; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FAMLGHGHIOD")->GetStaticField(0x11380);
		}

		// static const ::System::Object CPDECFMCKEM; // 0x0
		// static const ::System::Object PBBHNDHPDBJ; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMLGHGHIOD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FAMLGHGHIOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAMLGHGHIOD*))((::PBYTE)hIl2Cpp + FAMLGHGHIOD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAMLGHGHIOD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FAMLGHGHIOD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMLGHGHIOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FAMLGHGHIOD* Clone()
		{
			return ((::FAMLGHGHIOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMLGHGHIOD_CLONE_OFFSET))(this);
		}

		::System::UInt32 NNBHOEMFHIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMLGHGHIOD_NNBHOEMFHIF_OFFSET))(this);
		}

		::System::Void FOPLDCBOMFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FAMLGHGHIOD_FOPLDCBOMFM_OFFSET))(this, a1);
		}

		::System::UInt32 CNLADHPJHBC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMLGHGHIOD_CNLADHPJHBC_OFFSET))(this);
		}

		::System::Void DFEPFHMLCAO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FAMLGHGHIOD_DFEPFHMLCAO_OFFSET))(this, a1);
		}

		::System::UInt64 ACOJNBBKMOE()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMLGHGHIOD_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + FAMLGHGHIOD_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FAMLGHGHIOD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FAMLGHGHIOD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FAMLGHGHIOD*))((::PBYTE)hIl2Cpp + FAMLGHGHIOD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMLGHGHIOD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMLGHGHIOD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FAMLGHGHIOD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMLGHGHIOD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FAMLGHGHIOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAMLGHGHIOD*))((::PBYTE)hIl2Cpp + FAMLGHGHIOD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FAMLGHGHIOD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
