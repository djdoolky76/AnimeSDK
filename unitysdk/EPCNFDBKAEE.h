#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPCNFDBKAEE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EPCNFDBKAEE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2D9C50)
#define EPCNFDBKAEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D9F10)
#define EPCNFDBKAEE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2D97D0)
#define EPCNFDBKAEE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2D9740)
#define EPCNFDBKAEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D96F0)
#define EPCNFDBKAEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2D9950)
#define EPCNFDBKAEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2D9830)
#define EPCNFDBKAEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2D9A40)
#define EPCNFDBKAEE_JINLEONNCEN_OFFSET UNITYSDK_OFFSET(0x1E2D9820)
#define EPCNFDBKAEE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2D9680)
#define EPCNFDBKAEE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2D9D40)
#define EPCNFDBKAEE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2D9CF0)
#define EPCNFDBKAEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2D96E0)
#define EPCNFDBKAEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2D9B40)
#define EPCNFDBKAEE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2D9BA0)

inline static constexpr unsigned int EPCNFDBKAEE_TypeDefinitionIndex = 25228;

	class EPCNFDBKAEE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHHJMABBLAH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EPCNFDBKAEE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EPCNFDBKAEE*>**)UnitySDK::FromName("", "EPCNFDBKAEE")->GetStaticField(0x48070);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JPAEBNKOHFA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "EPCNFDBKAEE")->GetStaticField(0x48078);
		}

		// static const ::System::Object DGOKAKPOELJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCNFDBKAEE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EPCNFDBKAEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPCNFDBKAEE*))((::PBYTE)hIl2Cpp + EPCNFDBKAEE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPCNFDBKAEE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EPCNFDBKAEE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EPCNFDBKAEE*>*(*)())((::PBYTE)hIl2Cpp + EPCNFDBKAEE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCNFDBKAEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EPCNFDBKAEE* Clone()
		{
			return ((::EPCNFDBKAEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCNFDBKAEE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JINLEONNCEN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCNFDBKAEE_JINLEONNCEN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPCNFDBKAEE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EPCNFDBKAEE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EPCNFDBKAEE*))((::PBYTE)hIl2Cpp + EPCNFDBKAEE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCNFDBKAEE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCNFDBKAEE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EPCNFDBKAEE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCNFDBKAEE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EPCNFDBKAEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPCNFDBKAEE*))((::PBYTE)hIl2Cpp + EPCNFDBKAEE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EPCNFDBKAEE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
