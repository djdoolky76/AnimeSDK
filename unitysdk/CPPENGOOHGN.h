#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPPENGOOHGN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CPPENGOOHGN_BLPCGILJNJF_OFFSET UNITYSDK_OFFSET(0x204F1000)
#define CPPENGOOHGN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x204F13A0)
#define CPPENGOOHGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x204F15C0)
#define CPPENGOOHGN_CLONE_OFFSET UNITYSDK_OFFSET(0x204F0F90)
#define CPPENGOOHGN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x204F0F60)
#define CPPENGOOHGN_CTOR_OFFSET UNITYSDK_OFFSET(0x204F0F50)
#define CPPENGOOHGN_DIPAJKCFDAI_OFFSET UNITYSDK_OFFSET(0x204F1010)
#define CPPENGOOHGN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x204F1120)
#define CPPENGOOHGN_EQUALS_OFFSET UNITYSDK_OFFSET(0x204F1020)
#define CPPENGOOHGN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x204F1290)
#define CPPENGOOHGN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x204F0EE0)
#define CPPENGOOHGN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x204F1460)
#define CPPENGOOHGN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x204F1430)
#define CPPENGOOHGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x204F0F40)
#define CPPENGOOHGN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x204F12C0)
#define CPPENGOOHGN_WRITETO_OFFSET UNITYSDK_OFFSET(0x204F1320)

inline static constexpr unsigned int CPPENGOOHGN_TypeDefinitionIndex = 34406;

	class CPPENGOOHGN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GCBCBDDBDJD; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CPPENGOOHGN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CPPENGOOHGN*>**)UnitySDK::FromName("", "CPPENGOOHGN")->GetStaticField(0x19FB0);
		}

		// static const ::System::Object FNBJAAKFFBP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPENGOOHGN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CPPENGOOHGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPPENGOOHGN*))((::PBYTE)hIl2Cpp + CPPENGOOHGN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPPENGOOHGN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CPPENGOOHGN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CPPENGOOHGN*>*(*)())((::PBYTE)hIl2Cpp + CPPENGOOHGN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPENGOOHGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CPPENGOOHGN* Clone()
		{
			return ((::CPPENGOOHGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPENGOOHGN_CLONE_OFFSET))(this);
		}

		::System::UInt32 BLPCGILJNJF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPENGOOHGN_BLPCGILJNJF_OFFSET))(this);
		}

		::System::Void DIPAJKCFDAI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPPENGOOHGN_DIPAJKCFDAI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPPENGOOHGN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CPPENGOOHGN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPPENGOOHGN*))((::PBYTE)hIl2Cpp + CPPENGOOHGN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPENGOOHGN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPENGOOHGN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CPPENGOOHGN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPENGOOHGN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CPPENGOOHGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPPENGOOHGN*))((::PBYTE)hIl2Cpp + CPPENGOOHGN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CPPENGOOHGN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
