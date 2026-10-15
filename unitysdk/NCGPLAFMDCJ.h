#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIELJCGKNJN;
class NCGPLAFMDCJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NCGPLAFMDCJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAB00C0)
#define NCGPLAFMDCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAB03C0)
#define NCGPLAFMDCJ_CEIHDIKPICH_OFFSET UNITYSDK_OFFSET(0x1EAAFC90)
#define NCGPLAFMDCJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAAFC40)
#define NCGPLAFMDCJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAAFB90)
#define NCGPLAFMDCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAAFB40)
#define NCGPLAFMDCJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAAFE20)
#define NCGPLAFMDCJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAAFCA0)
#define NCGPLAFMDCJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAAFF40)
#define NCGPLAFMDCJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAAFAD0)
#define NCGPLAFMDCJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAB0200)
#define NCGPLAFMDCJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAB0160)
#define NCGPLAFMDCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAAFB30)
#define NCGPLAFMDCJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAAFFB0)
#define NCGPLAFMDCJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAB0010)

inline static constexpr unsigned int NCGPLAFMDCJ_TypeDefinitionIndex = 28572;

	class NCGPLAFMDCJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LIELJCGKNJN*>* BALHEGFPFGJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NCGPLAFMDCJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NCGPLAFMDCJ*>**)UnitySDK::FromName("", "NCGPLAFMDCJ")->GetStaticField(0x5EDB0);
		}

		static ::Google::Protobuf::FieldCodec_1<::LIELJCGKNJN*>** StaticGet_DEIMLLLOAIO()
		{
			return (::Google::Protobuf::FieldCodec_1<::LIELJCGKNJN*>**)UnitySDK::FromName("", "NCGPLAFMDCJ")->GetStaticField(0x5EDB8);
		}

		// static const ::System::Object JNKMPKNJCDJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGPLAFMDCJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NCGPLAFMDCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCGPLAFMDCJ*))((::PBYTE)hIl2Cpp + NCGPLAFMDCJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCGPLAFMDCJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NCGPLAFMDCJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NCGPLAFMDCJ*>*(*)())((::PBYTE)hIl2Cpp + NCGPLAFMDCJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGPLAFMDCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NCGPLAFMDCJ* Clone()
		{
			return ((::NCGPLAFMDCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGPLAFMDCJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LIELJCGKNJN*>* CEIHDIKPICH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LIELJCGKNJN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGPLAFMDCJ_CEIHDIKPICH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCGPLAFMDCJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NCGPLAFMDCJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NCGPLAFMDCJ*))((::PBYTE)hIl2Cpp + NCGPLAFMDCJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGPLAFMDCJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGPLAFMDCJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NCGPLAFMDCJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGPLAFMDCJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NCGPLAFMDCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCGPLAFMDCJ*))((::PBYTE)hIl2Cpp + NCGPLAFMDCJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NCGPLAFMDCJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
