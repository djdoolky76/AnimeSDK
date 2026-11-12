#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKAKHDGJLFO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BKAKHDGJLFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F170140)
#define BKAKHDGJLFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F170360)
#define BKAKHDGJLFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F16FD30)
#define BKAKHDGJLFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F16FD00)
#define BKAKHDGJLFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F16FCF0)
#define BKAKHDGJLFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F16FEC0)
#define BKAKHDGJLFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F16FDC0)
#define BKAKHDGJLFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F170030)
#define BKAKHDGJLFO_JCDMOEJDBHN_OFFSET UNITYSDK_OFFSET(0x1F16FDA0)
#define BKAKHDGJLFO_JIOGHONJOFF_OFFSET UNITYSDK_OFFSET(0x1F16FDB0)
#define BKAKHDGJLFO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F16FC80)
#define BKAKHDGJLFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F170200)
#define BKAKHDGJLFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F1701D0)
#define BKAKHDGJLFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F16FCE0)
#define BKAKHDGJLFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F170060)
#define BKAKHDGJLFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F1700C0)

inline static constexpr unsigned int BKAKHDGJLFO_TypeDefinitionIndex = 30307;

	class BKAKHDGJLFO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DIAEIJEMDHP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BKAKHDGJLFO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BKAKHDGJLFO*>**)UnitySDK::FromName("", "BKAKHDGJLFO")->GetStaticField(0x4C7A0);
		}

		// static const ::System::Object KHENDMLMNMB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAKHDGJLFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BKAKHDGJLFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKAKHDGJLFO*))((::PBYTE)hIl2Cpp + BKAKHDGJLFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKAKHDGJLFO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BKAKHDGJLFO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BKAKHDGJLFO*>*(*)())((::PBYTE)hIl2Cpp + BKAKHDGJLFO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAKHDGJLFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BKAKHDGJLFO* Clone()
		{
			return ((::BKAKHDGJLFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAKHDGJLFO_CLONE_OFFSET))(this);
		}

		::System::UInt32 JCDMOEJDBHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAKHDGJLFO_JCDMOEJDBHN_OFFSET))(this);
		}

		::System::Void JIOGHONJOFF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKAKHDGJLFO_JIOGHONJOFF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BKAKHDGJLFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BKAKHDGJLFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BKAKHDGJLFO*))((::PBYTE)hIl2Cpp + BKAKHDGJLFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAKHDGJLFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAKHDGJLFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BKAKHDGJLFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAKHDGJLFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BKAKHDGJLFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKAKHDGJLFO*))((::PBYTE)hIl2Cpp + BKAKHDGJLFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BKAKHDGJLFO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
