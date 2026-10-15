#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOPOBBPLHAE.h"
#include "unitysdk/System/Object.h"
class LKJMFLALFEH;
class PKOMDBGFMBK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LKJMFLALFEH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E991A70)
#define LKJMFLALFEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E991F10)
#define LKJMFLALFEH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E991540)
#define LKJMFLALFEH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E991440)
#define LKJMFLALFEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9913C0)
#define LKJMFLALFEH_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E9915A0)
#define LKJMFLALFEH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E991620)
#define LKJMFLALFEH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9915F0)
#define LKJMFLALFEH_GAIKIHDIOBM_OFFSET UNITYSDK_OFFSET(0x1E9915D0)
#define LKJMFLALFEH_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E9915B0)
#define LKJMFLALFEH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9916F0)
#define LKJMFLALFEH_IAJCJCOLMDO_OFFSET UNITYSDK_OFFSET(0x1E9915E0)
#define LKJMFLALFEH_JBENBABCOGB_OFFSET UNITYSDK_OFFSET(0x1E9915C0)
#define LKJMFLALFEH_JEKLGLALMBH_OFFSET UNITYSDK_OFFSET(0x1E991590)
#define LKJMFLALFEH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E991380)
#define LKJMFLALFEH_KAIKKIONGBP_OFFSET UNITYSDK_OFFSET(0x1E991580)
#define LKJMFLALFEH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E991DB0)
#define LKJMFLALFEH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E991CD0)
#define LKJMFLALFEH_MKMAMKNLJGM_OFFSET UNITYSDK_OFFSET(0x1E991570)
#define LKJMFLALFEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9913B0)
#define LKJMFLALFEH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E991840)
#define LKJMFLALFEH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9918A0)

inline static constexpr unsigned int LKJMFLALFEH_TypeDefinitionIndex = 30753;

	class LKJMFLALFEH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KPILGHBIJAE; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::PKOMDBGFMBK*>* DALKEINMPBH; // 0x20
		::AOPOBBPLHAE AFHHMCKLLAJ; // 0x28
		::System::UInt32 GEMFJILOPLL; // 0x2C
		::System::UInt32 AEMMBNEMIFP; // 0x30
		static ::Google::Protobuf::FieldCodec** StaticGet_IOGIGKGPCBO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LKJMFLALFEH")->GetStaticField(0x4AAD0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_KHPCDHPFCHE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LKJMFLALFEH")->GetStaticField(0x4AAD8);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LKJMFLALFEH")->GetStaticField(0x4AAE0);
		}

		// static const ::System::Object DPPAFBAHEFH; // 0x0
		// static const ::System::Object LLOCKAAMLLF; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object LFMHICIGAPC; // 0x0
		// static const ::System::Object HCNGKLEMLFK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJMFLALFEH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LKJMFLALFEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKJMFLALFEH*))((::PBYTE)hIl2Cpp + LKJMFLALFEH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKJMFLALFEH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LKJMFLALFEH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJMFLALFEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LKJMFLALFEH* Clone()
		{
			return ((::LKJMFLALFEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJMFLALFEH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PKOMDBGFMBK*>* MKMAMKNLJGM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PKOMDBGFMBK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJMFLALFEH_MKMAMKNLJGM_OFFSET))(this);
		}

		::System::UInt32 KAIKKIONGBP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJMFLALFEH_KAIKKIONGBP_OFFSET))(this);
		}

		::System::Void JEKLGLALMBH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKJMFLALFEH_JEKLGLALMBH_OFFSET))(this, a1);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJMFLALFEH_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKJMFLALFEH_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::AOPOBBPLHAE JBENBABCOGB()
		{
			return ((::AOPOBBPLHAE(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJMFLALFEH_JBENBABCOGB_OFFSET))(this);
		}

		::System::Void GAIKIHDIOBM(::AOPOBBPLHAE a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOPOBBPLHAE))((::PBYTE)hIl2Cpp + LKJMFLALFEH_GAIKIHDIOBM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IAJCJCOLMDO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJMFLALFEH_IAJCJCOLMDO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LKJMFLALFEH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LKJMFLALFEH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LKJMFLALFEH*))((::PBYTE)hIl2Cpp + LKJMFLALFEH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJMFLALFEH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJMFLALFEH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LKJMFLALFEH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJMFLALFEH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LKJMFLALFEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKJMFLALFEH*))((::PBYTE)hIl2Cpp + LKJMFLALFEH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LKJMFLALFEH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
