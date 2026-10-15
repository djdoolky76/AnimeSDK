#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAJEBOPPMCJ;
class GOIEJOCFKEE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GOIEJOCFKEE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4C2880)
#define GOIEJOCFKEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C2B60)
#define GOIEJOCFKEE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4C2460)
#define GOIEJOCFKEE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4C23D0)
#define GOIEJOCFKEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C2390)
#define GOIEJOCFKEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4C25E0)
#define GOIEJOCFKEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4C24A0)
#define GOIEJOCFKEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4C2700)
#define GOIEJOCFKEE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4C2350)
#define GOIEJOCFKEE_MEADMBOCGON_OFFSET UNITYSDK_OFFSET(0x1E4C2490)
#define GOIEJOCFKEE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4C29C0)
#define GOIEJOCFKEE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4C2920)
#define GOIEJOCFKEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4C2380)
#define GOIEJOCFKEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4C2770)
#define GOIEJOCFKEE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4C27D0)

inline static constexpr unsigned int GOIEJOCFKEE_TypeDefinitionIndex = 32664;

	class GOIEJOCFKEE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::CAJEBOPPMCJ*>* FEFPPDJMBCB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GOIEJOCFKEE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GOIEJOCFKEE*>**)UnitySDK::FromName("", "GOIEJOCFKEE")->GetStaticField(0x22AF0);
		}

		static ::Google::Protobuf::FieldCodec_1<::CAJEBOPPMCJ*>** StaticGet_AGIMHMEECIO()
		{
			return (::Google::Protobuf::FieldCodec_1<::CAJEBOPPMCJ*>**)UnitySDK::FromName("", "GOIEJOCFKEE")->GetStaticField(0x22AF8);
		}

		// static const ::System::Object GOMEBNLJOKI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIEJOCFKEE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GOIEJOCFKEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOIEJOCFKEE*))((::PBYTE)hIl2Cpp + GOIEJOCFKEE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOIEJOCFKEE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GOIEJOCFKEE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GOIEJOCFKEE*>*(*)())((::PBYTE)hIl2Cpp + GOIEJOCFKEE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIEJOCFKEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GOIEJOCFKEE* Clone()
		{
			return ((::GOIEJOCFKEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIEJOCFKEE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CAJEBOPPMCJ*>* MEADMBOCGON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CAJEBOPPMCJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIEJOCFKEE_MEADMBOCGON_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOIEJOCFKEE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GOIEJOCFKEE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GOIEJOCFKEE*))((::PBYTE)hIl2Cpp + GOIEJOCFKEE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIEJOCFKEE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIEJOCFKEE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOIEJOCFKEE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIEJOCFKEE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GOIEJOCFKEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOIEJOCFKEE*))((::PBYTE)hIl2Cpp + GOIEJOCFKEE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOIEJOCFKEE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
