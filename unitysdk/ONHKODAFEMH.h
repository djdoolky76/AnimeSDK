#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEBFJNFNBAP;
class ONHKODAFEMH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ONHKODAFEMH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC2C580)
#define ONHKODAFEMH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC2C860)
#define ONHKODAFEMH_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC2C190)
#define ONHKODAFEMH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC2C100)
#define ONHKODAFEMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC2C0C0)
#define ONHKODAFEMH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC2C310)
#define ONHKODAFEMH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC2C1D0)
#define ONHKODAFEMH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC2C430)
#define ONHKODAFEMH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC2C080)
#define ONHKODAFEMH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC2C6C0)
#define ONHKODAFEMH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC2C620)
#define ONHKODAFEMH_MPMFFOGBGGM_OFFSET UNITYSDK_OFFSET(0x1FC2C1C0)
#define ONHKODAFEMH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC2C0B0)
#define ONHKODAFEMH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC2C4A0)
#define ONHKODAFEMH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC2C500)

inline static constexpr unsigned int ONHKODAFEMH_TypeDefinitionIndex = 31838;

	class ONHKODAFEMH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::FEBFJNFNBAP*>* GAICODFFOFL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ONHKODAFEMH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ONHKODAFEMH*>**)UnitySDK::FromName("", "ONHKODAFEMH")->GetStaticField(0x28580);
		}

		static ::Google::Protobuf::FieldCodec_1<::FEBFJNFNBAP*>** StaticGet_KJDPFAHOAJP()
		{
			return (::Google::Protobuf::FieldCodec_1<::FEBFJNFNBAP*>**)UnitySDK::FromName("", "ONHKODAFEMH")->GetStaticField(0x28588);
		}

		// static const ::System::Object MOLKOGENBDE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHKODAFEMH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ONHKODAFEMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONHKODAFEMH*))((::PBYTE)hIl2Cpp + ONHKODAFEMH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONHKODAFEMH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ONHKODAFEMH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ONHKODAFEMH*>*(*)())((::PBYTE)hIl2Cpp + ONHKODAFEMH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHKODAFEMH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ONHKODAFEMH* Clone()
		{
			return ((::ONHKODAFEMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHKODAFEMH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FEBFJNFNBAP*>* MPMFFOGBGGM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FEBFJNFNBAP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHKODAFEMH_MPMFFOGBGGM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONHKODAFEMH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ONHKODAFEMH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ONHKODAFEMH*))((::PBYTE)hIl2Cpp + ONHKODAFEMH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHKODAFEMH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHKODAFEMH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ONHKODAFEMH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHKODAFEMH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ONHKODAFEMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONHKODAFEMH*))((::PBYTE)hIl2Cpp + ONHKODAFEMH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ONHKODAFEMH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
