#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEODAFPJLFE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EEODAFPJLFE_AFJGHICACON_OFFSET UNITYSDK_OFFSET(0x1F56A530)
#define EEODAFPJLFE_BODJOHPCDJO_OFFSET UNITYSDK_OFFSET(0x1F56A520)
#define EEODAFPJLFE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F56A9D0)
#define EEODAFPJLFE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F56ACC0)
#define EEODAFPJLFE_CLONE_OFFSET UNITYSDK_OFFSET(0x1F56A4D0)
#define EEODAFPJLFE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F56A440)
#define EEODAFPJLFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F56A3F0)
#define EEODAFPJLFE_EMNEFBFCKDJ_OFFSET UNITYSDK_OFFSET(0x1F56A550)
#define EEODAFPJLFE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F56A610)
#define EEODAFPJLFE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F56A570)
#define EEODAFPJLFE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F56A710)
#define EEODAFPJLFE_HLAPJJNJCLC_OFFSET UNITYSDK_OFFSET(0x1F56A560)
#define EEODAFPJLFE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F56A380)
#define EEODAFPJLFE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F56ABB0)
#define EEODAFPJLFE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F56AB50)
#define EEODAFPJLFE_MNBHLAJGKOH_OFFSET UNITYSDK_OFFSET(0x1F56A540)
#define EEODAFPJLFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F56A3E0)
#define EEODAFPJLFE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F56A810)
#define EEODAFPJLFE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F56A870)

inline static constexpr unsigned int EEODAFPJLFE_TypeDefinitionIndex = 30230;

	class EEODAFPJLFE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HECPNLIJAFE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 MJIMFDKFGDE; // 0x20
		::System::UInt32 ODCKBAEKGJG; // 0x24
		static ::Google::Protobuf::MessageParser_1<::EEODAFPJLFE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EEODAFPJLFE*>**)UnitySDK::FromName("", "EEODAFPJLFE")->GetStaticField(0x51B50);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FMLCOCIKNIC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "EEODAFPJLFE")->GetStaticField(0x51B58);
		}

		// static const ::System::Object BDHJLOLMAKK; // 0x0
		// static const ::System::Object MJJGNBCFCOH; // 0x0
		// static const ::System::Object HHILPMIFNPK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEODAFPJLFE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EEODAFPJLFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEODAFPJLFE*))((::PBYTE)hIl2Cpp + EEODAFPJLFE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEODAFPJLFE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EEODAFPJLFE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EEODAFPJLFE*>*(*)())((::PBYTE)hIl2Cpp + EEODAFPJLFE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEODAFPJLFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EEODAFPJLFE* Clone()
		{
			return ((::EEODAFPJLFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEODAFPJLFE_CLONE_OFFSET))(this);
		}

		::System::UInt32 BODJOHPCDJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEODAFPJLFE_BODJOHPCDJO_OFFSET))(this);
		}

		::System::Void AFJGHICACON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEODAFPJLFE_AFJGHICACON_OFFSET))(this, a1);
		}

		::System::UInt32 MNBHLAJGKOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEODAFPJLFE_MNBHLAJGKOH_OFFSET))(this);
		}

		::System::Void EMNEFBFCKDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEODAFPJLFE_EMNEFBFCKDJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HLAPJJNJCLC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEODAFPJLFE_HLAPJJNJCLC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EEODAFPJLFE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EEODAFPJLFE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EEODAFPJLFE*))((::PBYTE)hIl2Cpp + EEODAFPJLFE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEODAFPJLFE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEODAFPJLFE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EEODAFPJLFE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEODAFPJLFE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EEODAFPJLFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEODAFPJLFE*))((::PBYTE)hIl2Cpp + EEODAFPJLFE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EEODAFPJLFE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
