#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPGLNCGCLLG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GPGLNCGCLLG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4F9590)
#define GPGLNCGCLLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F98D0)
#define GPGLNCGCLLG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4F90E0)
#define GPGLNCGCLLG_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1E4F9150)
#define GPGLNCGCLLG_CPEEIHDCIFD_OFFSET UNITYSDK_OFFSET(0x1E4F91B0)
#define GPGLNCGCLLG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4F90B0)
#define GPGLNCGCLLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F90A0)
#define GPGLNCGCLLG_EKBFCJGCJMN_OFFSET UNITYSDK_OFFSET(0x1E4F9170)
#define GPGLNCGCLLG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4F9260)
#define GPGLNCGCLLG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4F91D0)
#define GPGLNCGCLLG_FHOLHJHEOMJ_OFFSET UNITYSDK_OFFSET(0x1E4F91C0)
#define GPGLNCGCLLG_FPJLEGMCENK_OFFSET UNITYSDK_OFFSET(0x1E4F9190)
#define GPGLNCGCLLG_FPNKJMHBADK_OFFSET UNITYSDK_OFFSET(0x1E4F9180)
#define GPGLNCGCLLG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4F9340)
#define GPGLNCGCLLG_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1E4F9160)
#define GPGLNCGCLLG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4F9030)
#define GPGLNCGCLLG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4F9830)
#define GPGLNCGCLLG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4F97E0)
#define GPGLNCGCLLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4F9090)
#define GPGLNCGCLLG_PMPGMADMADA_OFFSET UNITYSDK_OFFSET(0x1E4F91A0)
#define GPGLNCGCLLG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4F9380)
#define GPGLNCGCLLG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4F93E0)

	class GPGLNCGCLLG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DBDCJHECJOO; // 0x18
		::System::UInt32 KJAENGKDFJD; // 0x1C
		::System::UInt32 GBINGODHAHA; // 0x20
		::System::Int32 NMABHKCOLCM; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GPGLNCGCLLG")->GetStaticField(0x2BA60);
		}

		// static const ::System::Object PIACMPBJOIK; // 0x0
		// static const ::System::Object JPHLMBNOEHC; // 0x0
		// static const ::System::Object HACFLGOPALO; // 0x0
		// static const ::System::Object IADILMFABOH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGLNCGCLLG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GPGLNCGCLLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPGLNCGCLLG*))((::PBYTE)hIl2Cpp + GPGLNCGCLLG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPGLNCGCLLG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GPGLNCGCLLG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGLNCGCLLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GPGLNCGCLLG* Clone()
		{
			return ((::GPGLNCGCLLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGLNCGCLLG_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGLNCGCLLG_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPGLNCGCLLG_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::UInt32 EKBFCJGCJMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGLNCGCLLG_EKBFCJGCJMN_OFFSET))(this);
		}

		::System::Void FPNKJMHBADK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPGLNCGCLLG_FPNKJMHBADK_OFFSET))(this, a1);
		}

		::System::UInt32 FPJLEGMCENK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGLNCGCLLG_FPJLEGMCENK_OFFSET))(this);
		}

		::System::Void PMPGMADMADA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPGLNCGCLLG_PMPGMADMADA_OFFSET))(this, a1);
		}

		::System::Int32 CPEEIHDCIFD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGLNCGCLLG_CPEEIHDCIFD_OFFSET))(this);
		}

		::System::Void FHOLHJHEOMJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GPGLNCGCLLG_FHOLHJHEOMJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GPGLNCGCLLG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GPGLNCGCLLG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GPGLNCGCLLG*))((::PBYTE)hIl2Cpp + GPGLNCGCLLG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGLNCGCLLG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGLNCGCLLG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GPGLNCGCLLG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGLNCGCLLG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GPGLNCGCLLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPGLNCGCLLG*))((::PBYTE)hIl2Cpp + GPGLNCGCLLG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GPGLNCGCLLG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
