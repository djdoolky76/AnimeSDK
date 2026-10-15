#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDJKFOBBDJF.h"
#include "unitysdk/System/Object.h"
class NILMGDJFACH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NILMGDJFACH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB09590)
#define NILMGDJFACH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB097F0)
#define NILMGDJFACH_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB091C0)
#define NILMGDJFACH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB09190)
#define NILMGDJFACH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB09180)
#define NILMGDJFACH_EDGAHDFBGJH_OFFSET UNITYSDK_OFFSET(0x1EB09200)
#define NILMGDJFACH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB092F0)
#define NILMGDJFACH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB09220)
#define NILMGDJFACH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB09460)
#define NILMGDJFACH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB09140)
#define NILMGDJFACH_LEADMLKFHDE_OFFSET UNITYSDK_OFFSET(0x1EB09210)
#define NILMGDJFACH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB09690)
#define NILMGDJFACH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB09660)
#define NILMGDJFACH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB09170)
#define NILMGDJFACH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB09490)
#define NILMGDJFACH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB094F0)

inline static constexpr unsigned int NILMGDJFACH_TypeDefinitionIndex = 28175;

	class NILMGDJFACH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::EDJKFOBBDJF EINIOEIIGOJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NILMGDJFACH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NILMGDJFACH*>**)UnitySDK::FromName("", "NILMGDJFACH")->GetStaticField(0x68450);
		}

		// static const ::System::Object KCFACCMFHNO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILMGDJFACH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NILMGDJFACH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NILMGDJFACH*))((::PBYTE)hIl2Cpp + NILMGDJFACH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NILMGDJFACH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NILMGDJFACH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NILMGDJFACH*>*(*)())((::PBYTE)hIl2Cpp + NILMGDJFACH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NILMGDJFACH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NILMGDJFACH* Clone()
		{
			return ((::NILMGDJFACH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NILMGDJFACH_CLONE_OFFSET))(this);
		}

		::EDJKFOBBDJF EDGAHDFBGJH()
		{
			return ((::EDJKFOBBDJF(*)(::PVOID))((::PBYTE)hIl2Cpp + NILMGDJFACH_EDGAHDFBGJH_OFFSET))(this);
		}

		::System::Void LEADMLKFHDE(::EDJKFOBBDJF a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDJKFOBBDJF))((::PBYTE)hIl2Cpp + NILMGDJFACH_LEADMLKFHDE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NILMGDJFACH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NILMGDJFACH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NILMGDJFACH*))((::PBYTE)hIl2Cpp + NILMGDJFACH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NILMGDJFACH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NILMGDJFACH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NILMGDJFACH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NILMGDJFACH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NILMGDJFACH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NILMGDJFACH*))((::PBYTE)hIl2Cpp + NILMGDJFACH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NILMGDJFACH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
