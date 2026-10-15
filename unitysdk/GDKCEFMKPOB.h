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

#define GDKCEFMKPOB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E41F260)
#define GDKCEFMKPOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E41F4C0)
#define GDKCEFMKPOB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E41EE60)
#define GDKCEFMKPOB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E41EDD0)
#define GDKCEFMKPOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E41ED80)
#define GDKCEFMKPOB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E41EF90)
#define GDKCEFMKPOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E41EEA0)
#define GDKCEFMKPOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E41F080)
#define GDKCEFMKPOB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E41ED40)
#define GDKCEFMKPOB_KCFNFPAKGEL_OFFSET UNITYSDK_OFFSET(0x1E41EE90)
#define GDKCEFMKPOB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E41F320)
#define GDKCEFMKPOB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E41F2D0)
#define GDKCEFMKPOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E41ED70)
#define GDKCEFMKPOB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E41F180)
#define GDKCEFMKPOB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E41F1E0)

inline static constexpr unsigned int GDKCEFMKPOB_TypeDefinitionIndex = 31436;

	class GDKCEFMKPOB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GOMJCIPLBGL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KKOONGOBGCI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GDKCEFMKPOB")->GetStaticField(0x100C0);
		}

		static ::Google::Protobuf::MessageParser_1<::GDKCEFMKPOB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GDKCEFMKPOB*>**)UnitySDK::FromName("", "GDKCEFMKPOB")->GetStaticField(0x100C8);
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
