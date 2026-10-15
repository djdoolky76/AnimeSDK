#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNBONMHGNND.h"
#include "unitysdk/System/Object.h"
class LKJMFLALFEH;
class LNHCHGFEJOI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LNHCHGFEJOI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9B4D80)
#define LNHCHGFEJOI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9B5270)
#define LNHCHGFEJOI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9B48E0)
#define LNHCHGFEJOI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9B4830)
#define LNHCHGFEJOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9B47F0)
#define LNHCHGFEJOI_DJBJMIEJBNC_OFFSET UNITYSDK_OFFSET(0x1E9B4970)
#define LNHCHGFEJOI_DPGOCPIGNKH_OFFSET UNITYSDK_OFFSET(0x1E9B4910)
#define LNHCHGFEJOI_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E9B4930)
#define LNHCHGFEJOI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9B49D0)
#define LNHCHGFEJOI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9B49A0)
#define LNHCHGFEJOI_GAIKIHDIOBM_OFFSET UNITYSDK_OFFSET(0x1E9B4990)
#define LNHCHGFEJOI_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E9B4940)
#define LNHCHGFEJOI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9B4A70)
#define LNHCHGFEJOI_GMNENGFNAOA_OFFSET UNITYSDK_OFFSET(0x1E9B4960)
#define LNHCHGFEJOI_IEKGCKEGKAL_OFFSET UNITYSDK_OFFSET(0x1E9B4920)
#define LNHCHGFEJOI_JBENBABCOGB_OFFSET UNITYSDK_OFFSET(0x1E9B4980)
#define LNHCHGFEJOI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9B47B0)
#define LNHCHGFEJOI_KJOJGGAMAHG_OFFSET UNITYSDK_OFFSET(0x1E9B4950)
#define LNHCHGFEJOI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9B5170)
#define LNHCHGFEJOI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9B50A0)
#define LNHCHGFEJOI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9B47E0)
#define LNHCHGFEJOI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9B4B00)
#define LNHCHGFEJOI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9B4B60)

inline static constexpr unsigned int LNHCHGFEJOI_TypeDefinitionIndex = 30755;

	class LNHCHGFEJOI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LKJMFLALFEH*>* BPPDDOMJANC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 MKENPMFJFKP; // 0x20
		::System::UInt32 GEMFJILOPLL; // 0x24
		::BNBONMHGNND AFHHMCKLLAJ; // 0x28
		::System::Byte _padding0[0x4];
		::System::Int64 PCHCAJHOPPG; // 0x30
		static ::Google::Protobuf::FieldCodec** StaticGet_GCAHOAKMKOA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LNHCHGFEJOI")->GetStaticField(0x4D620);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LNHCHGFEJOI")->GetStaticField(0x4D628);
		}

		// static const ::System::Object KIGHLLPEJBE; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object HIJKHLLOLIG; // 0x0
		// static const ::System::Object KHJEKDKCCLC; // 0x0
		// static const ::System::Object LFMHICIGAPC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHCHGFEJOI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LNHCHGFEJOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHCHGFEJOI*))((::PBYTE)hIl2Cpp + LNHCHGFEJOI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNHCHGFEJOI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LNHCHGFEJOI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHCHGFEJOI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LNHCHGFEJOI* Clone()
		{
			return ((::LNHCHGFEJOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHCHGFEJOI_CLONE_OFFSET))(this);
		}

		::System::Int64 DPGOCPIGNKH()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHCHGFEJOI_DPGOCPIGNKH_OFFSET))(this);
		}

		::System::Void IEKGCKEGKAL(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + LNHCHGFEJOI_IEKGCKEGKAL_OFFSET))(this, a1);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHCHGFEJOI_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LNHCHGFEJOI_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LKJMFLALFEH*>* KJOJGGAMAHG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LKJMFLALFEH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHCHGFEJOI_KJOJGGAMAHG_OFFSET))(this);
		}

		::System::UInt32 GMNENGFNAOA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHCHGFEJOI_GMNENGFNAOA_OFFSET))(this);
		}

		::System::Void DJBJMIEJBNC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LNHCHGFEJOI_DJBJMIEJBNC_OFFSET))(this, a1);
		}

		::BNBONMHGNND JBENBABCOGB()
		{
			return ((::BNBONMHGNND(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHCHGFEJOI_JBENBABCOGB_OFFSET))(this);
		}

		::System::Void GAIKIHDIOBM(::BNBONMHGNND a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNBONMHGNND))((::PBYTE)hIl2Cpp + LNHCHGFEJOI_GAIKIHDIOBM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LNHCHGFEJOI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LNHCHGFEJOI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LNHCHGFEJOI*))((::PBYTE)hIl2Cpp + LNHCHGFEJOI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHCHGFEJOI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHCHGFEJOI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LNHCHGFEJOI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHCHGFEJOI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LNHCHGFEJOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHCHGFEJOI*))((::PBYTE)hIl2Cpp + LNHCHGFEJOI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LNHCHGFEJOI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
