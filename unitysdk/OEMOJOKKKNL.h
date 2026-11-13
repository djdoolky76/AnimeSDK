#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPNHGDGLICN;
class OEMOJOKKKNL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OEMOJOKKKNL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB649B0)
#define OEMOJOKKKNL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB64CB0)
#define OEMOJOKKKNL_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB64590)
#define OEMOJOKKKNL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB644E0)
#define OEMOJOKKKNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB64490)
#define OEMOJOKKKNL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB64710)
#define OEMOJOKKKNL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB645D0)
#define OEMOJOKKKNL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB64830)
#define OEMOJOKKKNL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB64450)
#define OEMOJOKKKNL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB64AF0)
#define OEMOJOKKKNL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB64A50)
#define OEMOJOKKKNL_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1FB645C0)
#define OEMOJOKKKNL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB64480)
#define OEMOJOKKKNL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB648A0)
#define OEMOJOKKKNL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB64900)

inline static constexpr unsigned int OEMOJOKKKNL_TypeDefinitionIndex = 28978;

	class OEMOJOKKKNL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::KPNHGDGLICN*>* CBFGBDBJHID; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::KPNHGDGLICN*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::KPNHGDGLICN*>**)UnitySDK::FromName("", "OEMOJOKKKNL")->GetStaticField(0x10090);
		}

		static ::Google::Protobuf::MessageParser_1<::OEMOJOKKKNL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OEMOJOKKKNL*>**)UnitySDK::FromName("", "OEMOJOKKKNL")->GetStaticField(0x10098);
		}

		// static const ::System::Object IMGDAOEBONP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMOJOKKKNL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OEMOJOKKKNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEMOJOKKKNL*))((::PBYTE)hIl2Cpp + OEMOJOKKKNL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEMOJOKKKNL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OEMOJOKKKNL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OEMOJOKKKNL*>*(*)())((::PBYTE)hIl2Cpp + OEMOJOKKKNL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMOJOKKKNL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OEMOJOKKKNL* Clone()
		{
			return ((::OEMOJOKKKNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMOJOKKKNL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KPNHGDGLICN*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KPNHGDGLICN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMOJOKKKNL_MJOEMBBMBON_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OEMOJOKKKNL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OEMOJOKKKNL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OEMOJOKKKNL*))((::PBYTE)hIl2Cpp + OEMOJOKKKNL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMOJOKKKNL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMOJOKKKNL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OEMOJOKKKNL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMOJOKKKNL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OEMOJOKKKNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEMOJOKKKNL*))((::PBYTE)hIl2Cpp + OEMOJOKKKNL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OEMOJOKKKNL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
