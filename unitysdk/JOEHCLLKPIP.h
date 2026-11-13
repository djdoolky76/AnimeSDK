#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJBEJEDHBFG;
class JOEHCLLKPIP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JOEHCLLKPIP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20007AE0)
#define JOEHCLLKPIP_CCTOR_OFFSET UNITYSDK_OFFSET(0x20007DE0)
#define JOEHCLLKPIP_CLONE_OFFSET UNITYSDK_OFFSET(0x200076C0)
#define JOEHCLLKPIP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20007610)
#define JOEHCLLKPIP_CTOR_OFFSET UNITYSDK_OFFSET(0x200075C0)
#define JOEHCLLKPIP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20007840)
#define JOEHCLLKPIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x20007700)
#define JOEHCLLKPIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20007960)
#define JOEHCLLKPIP_HFFGIIACMHG_OFFSET UNITYSDK_OFFSET(0x200076F0)
#define JOEHCLLKPIP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20007580)
#define JOEHCLLKPIP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20007C20)
#define JOEHCLLKPIP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20007B80)
#define JOEHCLLKPIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x200075B0)
#define JOEHCLLKPIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x200079D0)
#define JOEHCLLKPIP_WRITETO_OFFSET UNITYSDK_OFFSET(0x20007A30)

inline static constexpr unsigned int JOEHCLLKPIP_TypeDefinitionIndex = 30578;

	class JOEHCLLKPIP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::CJBEJEDHBFG*>* NMLKOOHLOEC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::CJBEJEDHBFG*>** StaticGet_OBDIHIELMEL()
		{
			return (::Google::Protobuf::FieldCodec_1<::CJBEJEDHBFG*>**)UnitySDK::FromName("", "JOEHCLLKPIP")->GetStaticField(0x67AE0);
		}

		static ::Google::Protobuf::MessageParser_1<::JOEHCLLKPIP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JOEHCLLKPIP*>**)UnitySDK::FromName("", "JOEHCLLKPIP")->GetStaticField(0x67AE8);
		}

		// static const ::System::Object CJMCFJDNDOE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOEHCLLKPIP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JOEHCLLKPIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOEHCLLKPIP*))((::PBYTE)hIl2Cpp + JOEHCLLKPIP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOEHCLLKPIP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JOEHCLLKPIP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JOEHCLLKPIP*>*(*)())((::PBYTE)hIl2Cpp + JOEHCLLKPIP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOEHCLLKPIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JOEHCLLKPIP* Clone()
		{
			return ((::JOEHCLLKPIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOEHCLLKPIP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CJBEJEDHBFG*>* HFFGIIACMHG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CJBEJEDHBFG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOEHCLLKPIP_HFFGIIACMHG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JOEHCLLKPIP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JOEHCLLKPIP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOEHCLLKPIP*))((::PBYTE)hIl2Cpp + JOEHCLLKPIP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOEHCLLKPIP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOEHCLLKPIP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JOEHCLLKPIP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOEHCLLKPIP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JOEHCLLKPIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOEHCLLKPIP*))((::PBYTE)hIl2Cpp + JOEHCLLKPIP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JOEHCLLKPIP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
