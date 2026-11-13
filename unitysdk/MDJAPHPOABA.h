#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDJAPHPOABA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MDJAPHPOABA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD4D9D0)
#define MDJAPHPOABA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD4DC30)
#define MDJAPHPOABA_CDHEPOFDMPP_OFFSET UNITYSDK_OFFSET(0x1FD4D630)
#define MDJAPHPOABA_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD4D580)
#define MDJAPHPOABA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD4D540)
#define MDJAPHPOABA_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD4D530)
#define MDJAPHPOABA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD4D750)
#define MDJAPHPOABA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD4D640)
#define MDJAPHPOABA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD4D830)
#define MDJAPHPOABA_IFNOFKAIFGB_OFFSET UNITYSDK_OFFSET(0x1FD4D600)
#define MDJAPHPOABA_JHBKBFPJGPB_OFFSET UNITYSDK_OFFSET(0x1FD4D620)
#define MDJAPHPOABA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD4D4C0)
#define MDJAPHPOABA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD4DAB0)
#define MDJAPHPOABA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD4DA70)
#define MDJAPHPOABA_OLMBPFCOLFK_OFFSET UNITYSDK_OFFSET(0x1FD4D610)
#define MDJAPHPOABA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD4D520)
#define MDJAPHPOABA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD4D860)
#define MDJAPHPOABA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD4D8C0)

inline static constexpr unsigned int MDJAPHPOABA_TypeDefinitionIndex = 35714;

	class MDJAPHPOABA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean OMNLDFMILAK; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 OGCMNCBOEJG; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::MDJAPHPOABA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MDJAPHPOABA*>**)UnitySDK::FromName("", "MDJAPHPOABA")->GetStaticField(0x3AD30);
		}

		// static const ::System::Object JOIMLOCMAMK; // 0x0
		// static const ::System::Object HDGKLMKGNND; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJAPHPOABA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MDJAPHPOABA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDJAPHPOABA*))((::PBYTE)hIl2Cpp + MDJAPHPOABA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDJAPHPOABA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MDJAPHPOABA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MDJAPHPOABA*>*(*)())((::PBYTE)hIl2Cpp + MDJAPHPOABA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJAPHPOABA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MDJAPHPOABA* Clone()
		{
			return ((::MDJAPHPOABA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJAPHPOABA_CLONE_OFFSET))(this);
		}

		::System::Boolean IFNOFKAIFGB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJAPHPOABA_IFNOFKAIFGB_OFFSET))(this);
		}

		::System::Void OLMBPFCOLFK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDJAPHPOABA_OLMBPFCOLFK_OFFSET))(this, a1);
		}

		::System::UInt32 JHBKBFPJGPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJAPHPOABA_JHBKBFPJGPB_OFFSET))(this);
		}

		::System::Void CDHEPOFDMPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MDJAPHPOABA_CDHEPOFDMPP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDJAPHPOABA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MDJAPHPOABA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MDJAPHPOABA*))((::PBYTE)hIl2Cpp + MDJAPHPOABA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJAPHPOABA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJAPHPOABA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MDJAPHPOABA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJAPHPOABA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MDJAPHPOABA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDJAPHPOABA*))((::PBYTE)hIl2Cpp + MDJAPHPOABA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MDJAPHPOABA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
