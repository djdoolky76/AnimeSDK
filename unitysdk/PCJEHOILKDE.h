#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCJEHOILKDE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PCJEHOILKDE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEDC290)
#define PCJEHOILKDE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEDC4B0)
#define PCJEHOILKDE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEDBEE0)
#define PCJEHOILKDE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEDBEB0)
#define PCJEHOILKDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEDBEA0)
#define PCJEHOILKDE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEDC010)
#define PCJEHOILKDE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEDBF40)
#define PCJEHOILKDE_FCIACLFENJO_OFFSET UNITYSDK_OFFSET(0x1DEDBF20)
#define PCJEHOILKDE_FEBHCCBIDOA_OFFSET UNITYSDK_OFFSET(0x1DEDBF30)
#define PCJEHOILKDE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEDC180)
#define PCJEHOILKDE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEDBE60)
#define PCJEHOILKDE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEDC350)
#define PCJEHOILKDE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEDC320)
#define PCJEHOILKDE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEDBE90)
#define PCJEHOILKDE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEDC1B0)
#define PCJEHOILKDE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEDC210)

inline static constexpr unsigned int PCJEHOILKDE_TypeDefinitionIndex = 26580;

	class PCJEHOILKDE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GKOHBFHOFKN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PCJEHOILKDE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PCJEHOILKDE*>**)UnitySDK::FromName("", "PCJEHOILKDE")->GetStaticField(0x2ECD0);
		}

		// static const ::System::Object OOGFOPMFOHP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCJEHOILKDE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PCJEHOILKDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCJEHOILKDE*))((::PBYTE)hIl2Cpp + PCJEHOILKDE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCJEHOILKDE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PCJEHOILKDE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PCJEHOILKDE*>*(*)())((::PBYTE)hIl2Cpp + PCJEHOILKDE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCJEHOILKDE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PCJEHOILKDE* Clone()
		{
			return ((::PCJEHOILKDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCJEHOILKDE_CLONE_OFFSET))(this);
		}

		::System::UInt32 FCIACLFENJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCJEHOILKDE_FCIACLFENJO_OFFSET))(this);
		}

		::System::Void FEBHCCBIDOA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PCJEHOILKDE_FEBHCCBIDOA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PCJEHOILKDE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PCJEHOILKDE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PCJEHOILKDE*))((::PBYTE)hIl2Cpp + PCJEHOILKDE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCJEHOILKDE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCJEHOILKDE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PCJEHOILKDE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCJEHOILKDE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PCJEHOILKDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCJEHOILKDE*))((::PBYTE)hIl2Cpp + PCJEHOILKDE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PCJEHOILKDE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
