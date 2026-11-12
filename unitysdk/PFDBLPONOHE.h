#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJCMNENIEHH.h"
#include "unitysdk/System/Object.h"
class PFDBLPONOHE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PFDBLPONOHE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F1F0500)
#define PFDBLPONOHE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1F0860)
#define PFDBLPONOHE_CKBIPPBNOIK_OFFSET UNITYSDK_OFFSET(0x1F1EFFA0)
#define PFDBLPONOHE_CLONE_OFFSET UNITYSDK_OFFSET(0x1F1EFF30)
#define PFDBLPONOHE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F1EFE80)
#define PFDBLPONOHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1EFDA0)
#define PFDBLPONOHE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F1F0010)
#define PFDBLPONOHE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F1EFFB0)
#define PFDBLPONOHE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F1F0180)
#define PFDBLPONOHE_JINLEONNCEN_OFFSET UNITYSDK_OFFSET(0x1F1EFF80)
#define PFDBLPONOHE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F1EFD30)
#define PFDBLPONOHE_KHEJONGFJFK_OFFSET UNITYSDK_OFFSET(0x1F1EFF90)
#define PFDBLPONOHE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F1F06E0)
#define PFDBLPONOHE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F1F0610)
#define PFDBLPONOHE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F1EFD90)
#define PFDBLPONOHE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F1F0390)
#define PFDBLPONOHE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F1F03F0)

inline static constexpr unsigned int PFDBLPONOHE_TypeDefinitionIndex = 25700;

	class PFDBLPONOHE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHHJMABBLAH; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MPAHNFEMDNL; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::PJCMNENIEHH>* EMDEKKDOGOO; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::PJCMNENIEHH>** StaticGet_LOMPLDAKCMA()
		{
			return (::Google::Protobuf::FieldCodec_1<::PJCMNENIEHH>**)UnitySDK::FromName("", "PFDBLPONOHE")->GetStaticField(0x31B10);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_OAABGAJKLFJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PFDBLPONOHE")->GetStaticField(0x31B18);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JPAEBNKOHFA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PFDBLPONOHE")->GetStaticField(0x31B20);
		}

		static ::Google::Protobuf::MessageParser_1<::PFDBLPONOHE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PFDBLPONOHE*>**)UnitySDK::FromName("", "PFDBLPONOHE")->GetStaticField(0x31B28);
		}

		// static const ::System::Object DGOKAKPOELJ; // 0x0
		// static const ::System::Object JGLENMDBDJN; // 0x0
		// static const ::System::Object MGHAIPOJLBL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDBLPONOHE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PFDBLPONOHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFDBLPONOHE*))((::PBYTE)hIl2Cpp + PFDBLPONOHE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFDBLPONOHE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PFDBLPONOHE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PFDBLPONOHE*>*(*)())((::PBYTE)hIl2Cpp + PFDBLPONOHE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDBLPONOHE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PFDBLPONOHE* Clone()
		{
			return ((::PFDBLPONOHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDBLPONOHE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JINLEONNCEN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDBLPONOHE_JINLEONNCEN_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PJCMNENIEHH>* KHEJONGFJFK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PJCMNENIEHH>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDBLPONOHE_KHEJONGFJFK_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CKBIPPBNOIK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDBLPONOHE_CKBIPPBNOIK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PFDBLPONOHE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PFDBLPONOHE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PFDBLPONOHE*))((::PBYTE)hIl2Cpp + PFDBLPONOHE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDBLPONOHE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDBLPONOHE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PFDBLPONOHE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDBLPONOHE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PFDBLPONOHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFDBLPONOHE*))((::PBYTE)hIl2Cpp + PFDBLPONOHE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PFDBLPONOHE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
