#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMDPKOELKFL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define LMDPKOELKFL_ACMMJEIAFOF_OFFSET UNITYSDK_OFFSET(0x1E9A2B70)
#define LMDPKOELKFL_CACOAPFOAAM_OFFSET UNITYSDK_OFFSET(0x1E9A2B80)
#define LMDPKOELKFL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9A3190)
#define LMDPKOELKFL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9A33F0)
#define LMDPKOELKFL_CKGKLIBNJIL_OFFSET UNITYSDK_OFFSET(0x1E9A2B60)
#define LMDPKOELKFL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9A2B20)
#define LMDPKOELKFL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9A2A60)
#define LMDPKOELKFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A2A10)
#define LMDPKOELKFL_EPFDENEPLOL_OFFSET UNITYSDK_OFFSET(0x1E9A2B50)
#define LMDPKOELKFL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9A2CD0)
#define LMDPKOELKFL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9A2BA0)
#define LMDPKOELKFL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9A2E70)
#define LMDPKOELKFL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9A29D0)
#define LMDPKOELKFL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9A32E0)
#define LMDPKOELKFL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9A3230)
#define LMDPKOELKFL_NGBNPMPMDEL_OFFSET UNITYSDK_OFFSET(0x1E9A2B90)
#define LMDPKOELKFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9A2A00)
#define LMDPKOELKFL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9A2FD0)
#define LMDPKOELKFL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9A3030)

inline static constexpr unsigned int LMDPKOELKFL_TypeDefinitionIndex = 27825;

	class LMDPKOELKFL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EJGFMICPCLP; // 0x10
		::Proto::ItemList* MIEINLKPIMJ; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::Boolean KFLJJKIBDLE; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_IBOBFDAMEHC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LMDPKOELKFL")->GetStaticField(0x4CAF0);
		}

		static ::Google::Protobuf::MessageParser_1<::LMDPKOELKFL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LMDPKOELKFL*>**)UnitySDK::FromName("", "LMDPKOELKFL")->GetStaticField(0x4CAF8);
		}

		// static const ::System::Object AJPEEDNHODK; // 0x0
		// static const ::System::Object KHNDJKBEEED; // 0x0
		// static const ::System::Object DFABHHAPAEA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDPKOELKFL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LMDPKOELKFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMDPKOELKFL*))((::PBYTE)hIl2Cpp + LMDPKOELKFL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMDPKOELKFL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LMDPKOELKFL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LMDPKOELKFL*>*(*)())((::PBYTE)hIl2Cpp + LMDPKOELKFL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDPKOELKFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LMDPKOELKFL* Clone()
		{
			return ((::LMDPKOELKFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDPKOELKFL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EPFDENEPLOL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDPKOELKFL_EPFDENEPLOL_OFFSET))(this);
		}

		::System::Boolean CKGKLIBNJIL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDPKOELKFL_CKGKLIBNJIL_OFFSET))(this);
		}

		::System::Void ACMMJEIAFOF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LMDPKOELKFL_ACMMJEIAFOF_OFFSET))(this, a1);
		}

		::Proto::ItemList* CACOAPFOAAM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDPKOELKFL_CACOAPFOAAM_OFFSET))(this);
		}

		::System::Void NGBNPMPMDEL(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + LMDPKOELKFL_NGBNPMPMDEL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LMDPKOELKFL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LMDPKOELKFL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LMDPKOELKFL*))((::PBYTE)hIl2Cpp + LMDPKOELKFL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDPKOELKFL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDPKOELKFL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LMDPKOELKFL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDPKOELKFL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LMDPKOELKFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMDPKOELKFL*))((::PBYTE)hIl2Cpp + LMDPKOELKFL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LMDPKOELKFL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
