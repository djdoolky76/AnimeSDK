#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKNEMMHHBJK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PKNEMMHHBJK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF943A0)
#define PKNEMMHHBJK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF94440)
#define PKNEMMHHBJK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF94090)
#define PKNEMMHHBJK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF94060)
#define PKNEMMHHBJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF94050)
#define PKNEMMHHBJK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF941A0)
#define PKNEMMHHBJK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF940D0)
#define PKNEMMHHBJK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF94300)
#define PKNEMMHHBJK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF94010)
#define PKNEMMHHBJK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF943F0)
#define PKNEMMHHBJK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF943C0)
#define PKNEMMHHBJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF94040)
#define PKNEMMHHBJK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF94330)
#define PKNEMMHHBJK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF94390)

	class PKNEMMHHBJK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PKNEMMHHBJK")->GetStaticField(0x49EA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNEMMHHBJK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PKNEMMHHBJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKNEMMHHBJK*))((::PBYTE)hIl2Cpp + PKNEMMHHBJK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKNEMMHHBJK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PKNEMMHHBJK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNEMMHHBJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PKNEMMHHBJK* Clone()
		{
			return ((::PKNEMMHHBJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNEMMHHBJK_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKNEMMHHBJK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PKNEMMHHBJK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PKNEMMHHBJK*))((::PBYTE)hIl2Cpp + PKNEMMHHBJK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNEMMHHBJK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNEMMHHBJK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PKNEMMHHBJK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNEMMHHBJK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PKNEMMHHBJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKNEMMHHBJK*))((::PBYTE)hIl2Cpp + PKNEMMHHBJK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PKNEMMHHBJK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
