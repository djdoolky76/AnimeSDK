#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKNKNLGMACL.h"
#include "unitysdk/System/Object.h"
class OFPHPFENACO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OFPHPFENACO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE4D790)
#define OFPHPFENACO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE4D9F0)
#define OFPHPFENACO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE4D3C0)
#define OFPHPFENACO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE4D390)
#define OFPHPFENACO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE4D380)
#define OFPHPFENACO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE4D4F0)
#define OFPHPFENACO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE4D420)
#define OFPHPFENACO_FDDPCJMODGD_OFFSET UNITYSDK_OFFSET(0x1DE4D400)
#define OFPHPFENACO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE4D660)
#define OFPHPFENACO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE4D340)
#define OFPHPFENACO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE4D890)
#define OFPHPFENACO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE4D860)
#define OFPHPFENACO_NPHCBOINFMD_OFFSET UNITYSDK_OFFSET(0x1DE4D410)
#define OFPHPFENACO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE4D370)
#define OFPHPFENACO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE4D690)
#define OFPHPFENACO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE4D6F0)

	class OFPHPFENACO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FKNKNLGMACL CNKEBBBFBDC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OFPHPFENACO")->GetStaticField(0x17BF0);
		}

		// static const ::System::Object COICJNBDJFC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPHPFENACO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OFPHPFENACO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFPHPFENACO*))((::PBYTE)hIl2Cpp + OFPHPFENACO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFPHPFENACO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OFPHPFENACO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPHPFENACO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OFPHPFENACO* Clone()
		{
			return ((::OFPHPFENACO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPHPFENACO_CLONE_OFFSET))(this);
		}

		::FKNKNLGMACL FDDPCJMODGD()
		{
			return ((::FKNKNLGMACL(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPHPFENACO_FDDPCJMODGD_OFFSET))(this);
		}

		::System::Void NPHCBOINFMD(::FKNKNLGMACL a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKNKNLGMACL))((::PBYTE)hIl2Cpp + OFPHPFENACO_NPHCBOINFMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFPHPFENACO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OFPHPFENACO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFPHPFENACO*))((::PBYTE)hIl2Cpp + OFPHPFENACO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPHPFENACO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPHPFENACO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OFPHPFENACO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPHPFENACO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OFPHPFENACO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFPHPFENACO*))((::PBYTE)hIl2Cpp + OFPHPFENACO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OFPHPFENACO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
