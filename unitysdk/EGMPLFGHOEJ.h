#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGMPLFGHOEJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EGMPLFGHOEJ_BJMCFNDFAKH_OFFSET UNITYSDK_OFFSET(0x1E26CC80)
#define EGMPLFGHOEJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E26D0E0)
#define EGMPLFGHOEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E26D450)
#define EGMPLFGHOEJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E26CC50)
#define EGMPLFGHOEJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E26CBC0)
#define EGMPLFGHOEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E26CB70)
#define EGMPLFGHOEJ_ENMFGILKDJN_OFFSET UNITYSDK_OFFSET(0x1E26CCA0)
#define EGMPLFGHOEJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E26CDB0)
#define EGMPLFGHOEJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E26CCB0)
#define EGMPLFGHOEJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E26CEA0)
#define EGMPLFGHOEJ_JFIECDHGGEJ_OFFSET UNITYSDK_OFFSET(0x1E26CC90)
#define EGMPLFGHOEJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E26CB30)
#define EGMPLFGHOEJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E26D210)
#define EGMPLFGHOEJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E26D1C0)
#define EGMPLFGHOEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E26CB60)
#define EGMPLFGHOEJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E26CFA0)
#define EGMPLFGHOEJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E26D000)

inline static constexpr unsigned int EGMPLFGHOEJ_TypeDefinitionIndex = 30496;

	class EGMPLFGHOEJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JKNCBLDCIGP; // 0x18
		::System::UInt32 HBFDGCIFEEI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::EGMPLFGHOEJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EGMPLFGHOEJ*>**)UnitySDK::FromName("", "EGMPLFGHOEJ")->GetStaticField(0x487B0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NJAJMJAMGPF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "EGMPLFGHOEJ")->GetStaticField(0x487B8);
		}

		// static const ::System::Object NLKOAHHMFLM; // 0x0
		// static const ::System::Object NAGNCMLMAJD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMPLFGHOEJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EGMPLFGHOEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGMPLFGHOEJ*))((::PBYTE)hIl2Cpp + EGMPLFGHOEJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGMPLFGHOEJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EGMPLFGHOEJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EGMPLFGHOEJ*>*(*)())((::PBYTE)hIl2Cpp + EGMPLFGHOEJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMPLFGHOEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EGMPLFGHOEJ* Clone()
		{
			return ((::EGMPLFGHOEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMPLFGHOEJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 BJMCFNDFAKH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMPLFGHOEJ_BJMCFNDFAKH_OFFSET))(this);
		}

		::System::Void JFIECDHGGEJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EGMPLFGHOEJ_JFIECDHGGEJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ENMFGILKDJN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMPLFGHOEJ_ENMFGILKDJN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGMPLFGHOEJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EGMPLFGHOEJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EGMPLFGHOEJ*))((::PBYTE)hIl2Cpp + EGMPLFGHOEJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMPLFGHOEJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMPLFGHOEJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EGMPLFGHOEJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMPLFGHOEJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EGMPLFGHOEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGMPLFGHOEJ*))((::PBYTE)hIl2Cpp + EGMPLFGHOEJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EGMPLFGHOEJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
