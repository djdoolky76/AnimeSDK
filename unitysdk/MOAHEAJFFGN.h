#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOAHEAJFFGN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MOAHEAJFFGN_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1FF0C7A0)
#define MOAHEAJFFGN_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1FF0C7B0)
#define MOAHEAJFFGN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FF0CAE0)
#define MOAHEAJFFGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF0CDB0)
#define MOAHEAJFFGN_CLONE_OFFSET UNITYSDK_OFFSET(0x1FF0C730)
#define MOAHEAJFFGN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF0C700)
#define MOAHEAJFFGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF0C6F0)
#define MOAHEAJFFGN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FF0C8A0)
#define MOAHEAJFFGN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FF0C7C0)
#define MOAHEAJFFGN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FF0C970)
#define MOAHEAJFFGN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FF0C6B0)
#define MOAHEAJFFGN_LKBKNGLMAMN_OFFSET UNITYSDK_OFFSET(0x1FF0C780)
#define MOAHEAJFFGN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FF0CC30)
#define MOAHEAJFFGN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FF0CBF0)
#define MOAHEAJFFGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FF0C6E0)
#define MOAHEAJFFGN_PNJCLMCJHBE_OFFSET UNITYSDK_OFFSET(0x1FF0C790)
#define MOAHEAJFFGN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FF0C9A0)
#define MOAHEAJFFGN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FF0CA00)

inline static constexpr unsigned int MOAHEAJFFGN_TypeDefinitionIndex = 32764;

	class MOAHEAJFFGN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		::System::UInt32 HJPCMINMFBI; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::MOAHEAJFFGN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MOAHEAJFFGN*>**)UnitySDK::FromName("", "MOAHEAJFFGN")->GetStaticField(0x53460);
		}

		// static const ::System::Object ACLGGLDCAEC; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOAHEAJFFGN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MOAHEAJFFGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOAHEAJFFGN*))((::PBYTE)hIl2Cpp + MOAHEAJFFGN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOAHEAJFFGN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MOAHEAJFFGN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MOAHEAJFFGN*>*(*)())((::PBYTE)hIl2Cpp + MOAHEAJFFGN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOAHEAJFFGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MOAHEAJFFGN* Clone()
		{
			return ((::MOAHEAJFFGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOAHEAJFFGN_CLONE_OFFSET))(this);
		}

		::System::UInt32 LKBKNGLMAMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOAHEAJFFGN_LKBKNGLMAMN_OFFSET))(this);
		}

		::System::Void PNJCLMCJHBE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOAHEAJFFGN_PNJCLMCJHBE_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOAHEAJFFGN_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOAHEAJFFGN_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOAHEAJFFGN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MOAHEAJFFGN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MOAHEAJFFGN*))((::PBYTE)hIl2Cpp + MOAHEAJFFGN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOAHEAJFFGN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOAHEAJFFGN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MOAHEAJFFGN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOAHEAJFFGN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MOAHEAJFFGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOAHEAJFFGN*))((::PBYTE)hIl2Cpp + MOAHEAJFFGN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MOAHEAJFFGN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
