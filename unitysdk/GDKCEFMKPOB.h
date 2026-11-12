#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDKCEFMKPOB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GDKCEFMKPOB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F73A750)
#define GDKCEFMKPOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F73A9B0)
#define GDKCEFMKPOB_CLONE_OFFSET UNITYSDK_OFFSET(0x1F73A350)
#define GDKCEFMKPOB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F73A2C0)
#define GDKCEFMKPOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1F73A270)
#define GDKCEFMKPOB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F73A480)
#define GDKCEFMKPOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F73A390)
#define GDKCEFMKPOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F73A570)
#define GDKCEFMKPOB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F73A230)
#define GDKCEFMKPOB_KCFNFPAKGEL_OFFSET UNITYSDK_OFFSET(0x1F73A380)
#define GDKCEFMKPOB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F73A810)
#define GDKCEFMKPOB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F73A7C0)
#define GDKCEFMKPOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F73A260)
#define GDKCEFMKPOB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F73A670)
#define GDKCEFMKPOB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F73A6D0)

inline static constexpr unsigned int GDKCEFMKPOB_TypeDefinitionIndex = 32349;

	class GDKCEFMKPOB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GOMJCIPLBGL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GDKCEFMKPOB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GDKCEFMKPOB*>**)UnitySDK::FromName("", "GDKCEFMKPOB")->GetStaticField(0x57610);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KKOONGOBGCI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GDKCEFMKPOB")->GetStaticField(0x57618);
		}

		// static const ::System::Object JCFIILPCHLL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKCEFMKPOB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GDKCEFMKPOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDKCEFMKPOB*))((::PBYTE)hIl2Cpp + GDKCEFMKPOB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDKCEFMKPOB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GDKCEFMKPOB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GDKCEFMKPOB*>*(*)())((::PBYTE)hIl2Cpp + GDKCEFMKPOB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKCEFMKPOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GDKCEFMKPOB* Clone()
		{
			return ((::GDKCEFMKPOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKCEFMKPOB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KCFNFPAKGEL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKCEFMKPOB_KCFNFPAKGEL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GDKCEFMKPOB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GDKCEFMKPOB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GDKCEFMKPOB*))((::PBYTE)hIl2Cpp + GDKCEFMKPOB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKCEFMKPOB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKCEFMKPOB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GDKCEFMKPOB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKCEFMKPOB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GDKCEFMKPOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDKCEFMKPOB*))((::PBYTE)hIl2Cpp + GDKCEFMKPOB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GDKCEFMKPOB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
