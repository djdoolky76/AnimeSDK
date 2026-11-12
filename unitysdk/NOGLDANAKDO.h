#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOGLDANAKDO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NOGLDANAKDO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F07E380)
#define NOGLDANAKDO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F07E5A0)
#define NOGLDANAKDO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F07DFD0)
#define NOGLDANAKDO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F07DFA0)
#define NOGLDANAKDO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F07DF90)
#define NOGLDANAKDO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F07E100)
#define NOGLDANAKDO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F07E030)
#define NOGLDANAKDO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F07E270)
#define NOGLDANAKDO_IOCKJPANHND_OFFSET UNITYSDK_OFFSET(0x1F07E020)
#define NOGLDANAKDO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F07DF50)
#define NOGLDANAKDO_KBDFMFLCKGA_OFFSET UNITYSDK_OFFSET(0x1F07E010)
#define NOGLDANAKDO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F07E440)
#define NOGLDANAKDO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F07E410)
#define NOGLDANAKDO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F07DF80)
#define NOGLDANAKDO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F07E2A0)
#define NOGLDANAKDO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F07E300)

inline static constexpr unsigned int NOGLDANAKDO_TypeDefinitionIndex = 30459;

	class NOGLDANAKDO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JHCOABLIANB; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NOGLDANAKDO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NOGLDANAKDO*>**)UnitySDK::FromName("", "NOGLDANAKDO")->GetStaticField(0x72650);
		}

		// static const ::System::Object FGCLPKIDGFK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGLDANAKDO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NOGLDANAKDO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOGLDANAKDO*))((::PBYTE)hIl2Cpp + NOGLDANAKDO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOGLDANAKDO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NOGLDANAKDO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NOGLDANAKDO*>*(*)())((::PBYTE)hIl2Cpp + NOGLDANAKDO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGLDANAKDO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NOGLDANAKDO* Clone()
		{
			return ((::NOGLDANAKDO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGLDANAKDO_CLONE_OFFSET))(this);
		}

		::System::UInt32 KBDFMFLCKGA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGLDANAKDO_KBDFMFLCKGA_OFFSET))(this);
		}

		::System::Void IOCKJPANHND(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NOGLDANAKDO_IOCKJPANHND_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NOGLDANAKDO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NOGLDANAKDO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NOGLDANAKDO*))((::PBYTE)hIl2Cpp + NOGLDANAKDO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGLDANAKDO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGLDANAKDO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NOGLDANAKDO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGLDANAKDO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NOGLDANAKDO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOGLDANAKDO*))((::PBYTE)hIl2Cpp + NOGLDANAKDO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NOGLDANAKDO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
