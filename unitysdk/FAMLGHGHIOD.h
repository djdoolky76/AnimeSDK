#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAMLGHGHIOD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FAMLGHGHIOD_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E2FC2D0)
#define FAMLGHGHIOD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2FC630)
#define FAMLGHGHIOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2FCA20)
#define FAMLGHGHIOD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2FC210)
#define FAMLGHGHIOD_CNLADHPJHBC_OFFSET UNITYSDK_OFFSET(0x1E2FC2B0)
#define FAMLGHGHIOD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2FC1D0)
#define FAMLGHGHIOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2FC1C0)
#define FAMLGHGHIOD_DFEPFHMLCAO_OFFSET UNITYSDK_OFFSET(0x1E2FC2C0)
#define FAMLGHGHIOD_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E2FC2E0)
#define FAMLGHGHIOD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2FC370)
#define FAMLGHGHIOD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2FC2F0)
#define FAMLGHGHIOD_FOPLDCBOMFM_OFFSET UNITYSDK_OFFSET(0x1E2FC2A0)
#define FAMLGHGHIOD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2FC450)
#define FAMLGHGHIOD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2FC150)
#define FAMLGHGHIOD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2FC860)
#define FAMLGHGHIOD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2FC810)
#define FAMLGHGHIOD_NNBHOEMFHIF_OFFSET UNITYSDK_OFFSET(0x1E2FC290)
#define FAMLGHGHIOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2FC1B0)
#define FAMLGHGHIOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2FC490)
#define FAMLGHGHIOD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2FC4F0)

inline static constexpr unsigned int FAMLGHGHIOD_TypeDefinitionIndex = 27734;

	class FAMLGHGHIOD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GFMHFBDKDOE; // 0x18
		::System::UInt32 AOMDFABEOIE; // 0x1C
		::System::UInt64 NPFBAFODCBI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FAMLGHGHIOD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FAMLGHGHIOD*>**)UnitySDK::FromName("", "FAMLGHGHIOD")->GetStaticField(0x10AD0);
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

		static ::Google::Protobuf::MessageParser_1<::FAMLGHGHIOD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FAMLGHGHIOD*>*(*)())((::PBYTE)hIl2Cpp + FAMLGHGHIOD_JJGHOBBFNJD_OFFSET))();
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
