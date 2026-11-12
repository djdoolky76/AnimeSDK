#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAILIIEEBJM;
class LOMPEEDFPLE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LOMPEEDFPLE_BEMEFIJPBKC_OFFSET UNITYSDK_OFFSET(0x1FCEAA40)
#define LOMPEEDFPLE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FCEAE30)
#define LOMPEEDFPLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCEB130)
#define LOMPEEDFPLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1FCEAA10)
#define LOMPEEDFPLE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FCEA960)
#define LOMPEEDFPLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCEA910)
#define LOMPEEDFPLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FCEAB90)
#define LOMPEEDFPLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FCEAA50)
#define LOMPEEDFPLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FCEACB0)
#define LOMPEEDFPLE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FCEA8D0)
#define LOMPEEDFPLE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FCEAF70)
#define LOMPEEDFPLE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FCEAED0)
#define LOMPEEDFPLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FCEA900)
#define LOMPEEDFPLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FCEAD20)
#define LOMPEEDFPLE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FCEAD80)

inline static constexpr unsigned int LOMPEEDFPLE_TypeDefinitionIndex = 30920;

	class LOMPEEDFPLE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::KAILIIEEBJM*>* BPJNCMFCKBJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LOMPEEDFPLE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LOMPEEDFPLE*>**)UnitySDK::FromName("", "LOMPEEDFPLE")->GetStaticField(0x46660);
		}

		static ::Google::Protobuf::FieldCodec_1<::KAILIIEEBJM*>** StaticGet_JFCIBIJLOCN()
		{
			return (::Google::Protobuf::FieldCodec_1<::KAILIIEEBJM*>**)UnitySDK::FromName("", "LOMPEEDFPLE")->GetStaticField(0x46668);
		}

		// static const ::System::Object GNPGDFMNEDM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOMPEEDFPLE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LOMPEEDFPLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOMPEEDFPLE*))((::PBYTE)hIl2Cpp + LOMPEEDFPLE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOMPEEDFPLE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LOMPEEDFPLE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LOMPEEDFPLE*>*(*)())((::PBYTE)hIl2Cpp + LOMPEEDFPLE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOMPEEDFPLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LOMPEEDFPLE* Clone()
		{
			return ((::LOMPEEDFPLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOMPEEDFPLE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KAILIIEEBJM*>* BEMEFIJPBKC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KAILIIEEBJM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOMPEEDFPLE_BEMEFIJPBKC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LOMPEEDFPLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LOMPEEDFPLE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LOMPEEDFPLE*))((::PBYTE)hIl2Cpp + LOMPEEDFPLE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOMPEEDFPLE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOMPEEDFPLE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LOMPEEDFPLE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOMPEEDFPLE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LOMPEEDFPLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOMPEEDFPLE*))((::PBYTE)hIl2Cpp + LOMPEEDFPLE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LOMPEEDFPLE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
