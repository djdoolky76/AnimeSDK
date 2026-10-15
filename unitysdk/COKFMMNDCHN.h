#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COKFMMNDCHN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define COKFMMNDCHN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1351A0)
#define COKFMMNDCHN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1353C0)
#define COKFMMNDCHN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E134D90)
#define COKFMMNDCHN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E134D60)
#define COKFMMNDCHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E134D50)
#define COKFMMNDCHN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E134F20)
#define COKFMMNDCHN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E134E20)
#define COKFMMNDCHN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E135090)
#define COKFMMNDCHN_IOCKJPANHND_OFFSET UNITYSDK_OFFSET(0x1E134E10)
#define COKFMMNDCHN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E134CE0)
#define COKFMMNDCHN_KBDFMFLCKGA_OFFSET UNITYSDK_OFFSET(0x1E134E00)
#define COKFMMNDCHN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E135260)
#define COKFMMNDCHN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E135230)
#define COKFMMNDCHN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E134D40)
#define COKFMMNDCHN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1350C0)
#define COKFMMNDCHN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E135120)

inline static constexpr unsigned int COKFMMNDCHN_TypeDefinitionIndex = 33431;

	class COKFMMNDCHN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JHCOABLIANB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "COKFMMNDCHN")->GetStaticField(0x21770);
		}

		// static const ::System::Object FGCLPKIDGFK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COKFMMNDCHN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::COKFMMNDCHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COKFMMNDCHN*))((::PBYTE)hIl2Cpp + COKFMMNDCHN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COKFMMNDCHN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + COKFMMNDCHN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + COKFMMNDCHN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::COKFMMNDCHN* Clone()
		{
			return ((::COKFMMNDCHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + COKFMMNDCHN_CLONE_OFFSET))(this);
		}

		::System::UInt32 KBDFMFLCKGA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + COKFMMNDCHN_KBDFMFLCKGA_OFFSET))(this);
		}

		::System::Void IOCKJPANHND(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + COKFMMNDCHN_IOCKJPANHND_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + COKFMMNDCHN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::COKFMMNDCHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::COKFMMNDCHN*))((::PBYTE)hIl2Cpp + COKFMMNDCHN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COKFMMNDCHN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COKFMMNDCHN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + COKFMMNDCHN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COKFMMNDCHN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::COKFMMNDCHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COKFMMNDCHN*))((::PBYTE)hIl2Cpp + COKFMMNDCHN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + COKFMMNDCHN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
