#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FABKOODPCLA;
class ONFLANPGHHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FABKOODPCLA_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1F6006F0)
#define FABKOODPCLA_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1F600700)
#define FABKOODPCLA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F600C20)
#define FABKOODPCLA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F600FE0)
#define FABKOODPCLA_CLONE_OFFSET UNITYSDK_OFFSET(0x1F600690)
#define FABKOODPCLA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F6005D0)
#define FABKOODPCLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F600580)
#define FABKOODPCLA_DBOGKPGOECE_OFFSET UNITYSDK_OFFSET(0x1F6006D0)
#define FABKOODPCLA_DNAGBHKJGKE_OFFSET UNITYSDK_OFFSET(0x1F6006C0)
#define FABKOODPCLA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F600870)
#define FABKOODPCLA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F600710)
#define FABKOODPCLA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F6009B0)
#define FABKOODPCLA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F600540)
#define FABKOODPCLA_KOHFMEKKOME_OFFSET UNITYSDK_OFFSET(0x1F6006E0)
#define FABKOODPCLA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F600DF0)
#define FABKOODPCLA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F600D40)
#define FABKOODPCLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F600570)
#define FABKOODPCLA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F600A20)
#define FABKOODPCLA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F600A80)

inline static constexpr unsigned int FABKOODPCLA_TypeDefinitionIndex = 33526;

	class FABKOODPCLA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::ONFLANPGHHL*>* AMHLLOBFPHK; // 0x18
		::System::Boolean ANHOHDONIMK; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 LJDBCGPFFDH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::FABKOODPCLA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FABKOODPCLA*>**)UnitySDK::FromName("", "FABKOODPCLA")->GetStaticField(0x54D30);
		}

		static ::Google::Protobuf::FieldCodec_1<::ONFLANPGHHL*>** StaticGet_ENHMBCHBBCH()
		{
			return (::Google::Protobuf::FieldCodec_1<::ONFLANPGHHL*>**)UnitySDK::FromName("", "FABKOODPCLA")->GetStaticField(0x54D38);
		}

		// static const ::System::Object OOIIDHNOFFK; // 0x0
		// static const ::System::Object GNMMKPOJCLI; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FABKOODPCLA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FABKOODPCLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FABKOODPCLA*))((::PBYTE)hIl2Cpp + FABKOODPCLA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FABKOODPCLA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FABKOODPCLA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FABKOODPCLA*>*(*)())((::PBYTE)hIl2Cpp + FABKOODPCLA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FABKOODPCLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FABKOODPCLA* Clone()
		{
			return ((::FABKOODPCLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FABKOODPCLA_CLONE_OFFSET))(this);
		}

		::System::Boolean DNAGBHKJGKE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FABKOODPCLA_DNAGBHKJGKE_OFFSET))(this);
		}

		::System::Void DBOGKPGOECE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FABKOODPCLA_DBOGKPGOECE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ONFLANPGHHL*>* KOHFMEKKOME()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ONFLANPGHHL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FABKOODPCLA_KOHFMEKKOME_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FABKOODPCLA_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FABKOODPCLA_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FABKOODPCLA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FABKOODPCLA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FABKOODPCLA*))((::PBYTE)hIl2Cpp + FABKOODPCLA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FABKOODPCLA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FABKOODPCLA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FABKOODPCLA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FABKOODPCLA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FABKOODPCLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FABKOODPCLA*))((::PBYTE)hIl2Cpp + FABKOODPCLA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FABKOODPCLA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
