#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBEHBNOCLMM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OBEHBNOCLMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB80570)
#define OBEHBNOCLMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB808D0)
#define OBEHBNOCLMM_CFKJHKAHLOG_OFFSET UNITYSDK_OFFSET(0x1EB800C0)
#define OBEHBNOCLMM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB80060)
#define OBEHBNOCLMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB7FFD0)
#define OBEHBNOCLMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7FF80)
#define OBEHBNOCLMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB80210)
#define OBEHBNOCLMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB800E0)
#define OBEHBNOCLMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB80300)
#define OBEHBNOCLMM_HELPEADBKBP_OFFSET UNITYSDK_OFFSET(0x1EB800B0)
#define OBEHBNOCLMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB7FF10)
#define OBEHBNOCLMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB806F0)
#define OBEHBNOCLMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB806A0)
#define OBEHBNOCLMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB7FF70)
#define OBEHBNOCLMM_POAKODAJCDG_OFFSET UNITYSDK_OFFSET(0x1EB800D0)
#define OBEHBNOCLMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB80400)
#define OBEHBNOCLMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB80460)

inline static constexpr unsigned int OBEHBNOCLMM_TypeDefinitionIndex = 31781;

	class OBEHBNOCLMM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PNNDBGGBLEO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 HMJFFIJLINN; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GNOFNKGANIA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OBEHBNOCLMM")->GetStaticField(0xFB90);
		}

		static ::Google::Protobuf::MessageParser_1<::OBEHBNOCLMM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OBEHBNOCLMM*>**)UnitySDK::FromName("", "OBEHBNOCLMM")->GetStaticField(0xFB98);
		}

		// static const ::System::Object OEJJJGIPIHI; // 0x0
		// static const ::System::Object CFOENLLMJLG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBEHBNOCLMM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OBEHBNOCLMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBEHBNOCLMM*))((::PBYTE)hIl2Cpp + OBEHBNOCLMM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBEHBNOCLMM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OBEHBNOCLMM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OBEHBNOCLMM*>*(*)())((::PBYTE)hIl2Cpp + OBEHBNOCLMM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBEHBNOCLMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OBEHBNOCLMM* Clone()
		{
			return ((::OBEHBNOCLMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBEHBNOCLMM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HELPEADBKBP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBEHBNOCLMM_HELPEADBKBP_OFFSET))(this);
		}

		::System::UInt32 CFKJHKAHLOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBEHBNOCLMM_CFKJHKAHLOG_OFFSET))(this);
		}

		::System::Void POAKODAJCDG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OBEHBNOCLMM_POAKODAJCDG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBEHBNOCLMM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OBEHBNOCLMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OBEHBNOCLMM*))((::PBYTE)hIl2Cpp + OBEHBNOCLMM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBEHBNOCLMM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBEHBNOCLMM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OBEHBNOCLMM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBEHBNOCLMM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OBEHBNOCLMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBEHBNOCLMM*))((::PBYTE)hIl2Cpp + OBEHBNOCLMM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OBEHBNOCLMM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
