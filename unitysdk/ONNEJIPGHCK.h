#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONNEJIPGHCK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ONNEJIPGHCK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEA1CB0)
#define ONNEJIPGHCK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEA1ED0)
#define ONNEJIPGHCK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEA1900)
#define ONNEJIPGHCK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEA18D0)
#define ONNEJIPGHCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA18C0)
#define ONNEJIPGHCK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEA1A30)
#define ONNEJIPGHCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEA1960)
#define ONNEJIPGHCK_GEKIABKDINF_OFFSET UNITYSDK_OFFSET(0x1DEA1950)
#define ONNEJIPGHCK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEA1BA0)
#define ONNEJIPGHCK_JIHCNBCLLKP_OFFSET UNITYSDK_OFFSET(0x1DEA1940)
#define ONNEJIPGHCK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEA1880)
#define ONNEJIPGHCK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEA1D70)
#define ONNEJIPGHCK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEA1D40)
#define ONNEJIPGHCK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEA18B0)
#define ONNEJIPGHCK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEA1BD0)
#define ONNEJIPGHCK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEA1C30)

inline static constexpr unsigned int ONNEJIPGHCK_TypeDefinitionIndex = 33928;

	class ONNEJIPGHCK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CPGOPLHGNIP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ONNEJIPGHCK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ONNEJIPGHCK*>**)UnitySDK::FromName("", "ONNEJIPGHCK")->GetStaticField(0x25120);
		}

		// static const ::System::Object DNGBFNAFCEG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ONNEJIPGHCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONNEJIPGHCK*))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONNEJIPGHCK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ONNEJIPGHCK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ONNEJIPGHCK*>*(*)())((::PBYTE)hIl2Cpp + ONNEJIPGHCK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ONNEJIPGHCK* Clone()
		{
			return ((::ONNEJIPGHCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_CLONE_OFFSET))(this);
		}

		::System::UInt32 JIHCNBCLLKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_JIHCNBCLLKP_OFFSET))(this);
		}

		::System::Void GEKIABKDINF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_GEKIABKDINF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ONNEJIPGHCK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ONNEJIPGHCK*))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ONNEJIPGHCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONNEJIPGHCK*))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
