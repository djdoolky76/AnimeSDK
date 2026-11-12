#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJEMPEHADKJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LJEMPEHADKJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC9B520)
#define LJEMPEHADKJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC9B7E0)
#define LJEMPEHADKJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC9B0A0)
#define LJEMPEHADKJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC9B010)
#define LJEMPEHADKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC9AFC0)
#define LJEMPEHADKJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC9B220)
#define LJEMPEHADKJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC9B100)
#define LJEMPEHADKJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC9B310)
#define LJEMPEHADKJ_JINLEONNCEN_OFFSET UNITYSDK_OFFSET(0x1FC9B0F0)
#define LJEMPEHADKJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC9AF50)
#define LJEMPEHADKJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC9B610)
#define LJEMPEHADKJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC9B5C0)
#define LJEMPEHADKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC9AFB0)
#define LJEMPEHADKJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC9B410)
#define LJEMPEHADKJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC9B470)

inline static constexpr unsigned int LJEMPEHADKJ_TypeDefinitionIndex = 26187;

	class LJEMPEHADKJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHHJMABBLAH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LJEMPEHADKJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LJEMPEHADKJ*>**)UnitySDK::FromName("", "LJEMPEHADKJ")->GetStaticField(0x38BA0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JPAEBNKOHFA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LJEMPEHADKJ")->GetStaticField(0x38BA8);
		}

		// static const ::System::Object DGOKAKPOELJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEMPEHADKJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LJEMPEHADKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJEMPEHADKJ*))((::PBYTE)hIl2Cpp + LJEMPEHADKJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJEMPEHADKJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LJEMPEHADKJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LJEMPEHADKJ*>*(*)())((::PBYTE)hIl2Cpp + LJEMPEHADKJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEMPEHADKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LJEMPEHADKJ* Clone()
		{
			return ((::LJEMPEHADKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEMPEHADKJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JINLEONNCEN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEMPEHADKJ_JINLEONNCEN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJEMPEHADKJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LJEMPEHADKJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LJEMPEHADKJ*))((::PBYTE)hIl2Cpp + LJEMPEHADKJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEMPEHADKJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEMPEHADKJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LJEMPEHADKJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEMPEHADKJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LJEMPEHADKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJEMPEHADKJ*))((::PBYTE)hIl2Cpp + LJEMPEHADKJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LJEMPEHADKJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
