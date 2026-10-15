#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JAGAEDNEKNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemCost; }
namespace System { class Object; }
namespace System { class String; }

#define JAGAEDNEKNM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6ED450)
#define JAGAEDNEKNM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6ED870)
#define JAGAEDNEKNM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6ECF00)
#define JAGAEDNEKNM_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E6ECF40)
#define JAGAEDNEKNM_COKGJAJDFBN_OFFSET UNITYSDK_OFFSET(0x1E6ECF60)
#define JAGAEDNEKNM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6ECE60)
#define JAGAEDNEKNM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6ECE20)
#define JAGAEDNEKNM_DCIDHPGBHJF_OFFSET UNITYSDK_OFFSET(0x1E6ECF70)
#define JAGAEDNEKNM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6ED0E0)
#define JAGAEDNEKNM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6ECF80)
#define JAGAEDNEKNM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6ED210)
#define JAGAEDNEKNM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6ECDE0)
#define JAGAEDNEKNM_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E6ECF50)
#define JAGAEDNEKNM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6ED6A0)
#define JAGAEDNEKNM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6ED5F0)
#define JAGAEDNEKNM_MKMAMKNLJGM_OFFSET UNITYSDK_OFFSET(0x1E6ECF30)
#define JAGAEDNEKNM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6ECE10)
#define JAGAEDNEKNM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6ED280)
#define JAGAEDNEKNM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6ED2E0)

inline static constexpr unsigned int JAGAEDNEKNM_TypeDefinitionIndex = 26320;

	class JAGAEDNEKNM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>* DALKEINMPBH; // 0x18
		::System::UInt32 PDNLLKHCOBO; // 0x20
		::System::UInt32 DNKADAFBILN; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JAGAEDNEKNM")->GetStaticField(0x5BC70);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_KHPCDHPFCHE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "JAGAEDNEKNM")->GetStaticField(0x5BC78);
		}

		// static const ::System::Object DPPAFBAHEFH; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object MEDEPMKJNBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAGAEDNEKNM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JAGAEDNEKNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAGAEDNEKNM*))((::PBYTE)hIl2Cpp + JAGAEDNEKNM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAGAEDNEKNM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JAGAEDNEKNM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAGAEDNEKNM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JAGAEDNEKNM* Clone()
		{
			return ((::JAGAEDNEKNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAGAEDNEKNM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>* MKMAMKNLJGM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAGAEDNEKNM_MKMAMKNLJGM_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAGAEDNEKNM_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JAGAEDNEKNM_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 COKGJAJDFBN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAGAEDNEKNM_COKGJAJDFBN_OFFSET))(this);
		}

		::System::Void DCIDHPGBHJF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JAGAEDNEKNM_DCIDHPGBHJF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JAGAEDNEKNM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JAGAEDNEKNM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JAGAEDNEKNM*))((::PBYTE)hIl2Cpp + JAGAEDNEKNM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAGAEDNEKNM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAGAEDNEKNM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JAGAEDNEKNM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAGAEDNEKNM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JAGAEDNEKNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAGAEDNEKNM*))((::PBYTE)hIl2Cpp + JAGAEDNEKNM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JAGAEDNEKNM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
