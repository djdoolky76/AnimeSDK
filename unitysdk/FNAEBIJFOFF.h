#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNAEBIJFOFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FNAEBIJFOFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3EBE20)
#define FNAEBIJFOFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3EC040)
#define FNAEBIJFOFF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3EBA70)
#define FNAEBIJFOFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3EBA40)
#define FNAEBIJFOFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3EBA30)
#define FNAEBIJFOFF_EBNIHELLMGJ_OFFSET UNITYSDK_OFFSET(0x1E3EBAC0)
#define FNAEBIJFOFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3EBBA0)
#define FNAEBIJFOFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3EBAD0)
#define FNAEBIJFOFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3EBD10)
#define FNAEBIJFOFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3EB9F0)
#define FNAEBIJFOFF_LMDEHJOALHN_OFFSET UNITYSDK_OFFSET(0x1E3EBAB0)
#define FNAEBIJFOFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3EBEE0)
#define FNAEBIJFOFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3EBEB0)
#define FNAEBIJFOFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3EBA20)
#define FNAEBIJFOFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3EBD40)
#define FNAEBIJFOFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3EBDA0)

	class FNAEBIJFOFF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KGHDHDBLGAO; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FNAEBIJFOFF")->GetStaticField(0x64FD0);
		}

		// static const ::System::Object JLOGLBHDPMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAEBIJFOFF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FNAEBIJFOFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNAEBIJFOFF*))((::PBYTE)hIl2Cpp + FNAEBIJFOFF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNAEBIJFOFF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FNAEBIJFOFF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAEBIJFOFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FNAEBIJFOFF* Clone()
		{
			return ((::FNAEBIJFOFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAEBIJFOFF_CLONE_OFFSET))(this);
		}

		::System::UInt32 LMDEHJOALHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAEBIJFOFF_LMDEHJOALHN_OFFSET))(this);
		}

		::System::Void EBNIHELLMGJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNAEBIJFOFF_EBNIHELLMGJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FNAEBIJFOFF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FNAEBIJFOFF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNAEBIJFOFF*))((::PBYTE)hIl2Cpp + FNAEBIJFOFF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAEBIJFOFF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAEBIJFOFF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FNAEBIJFOFF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAEBIJFOFF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FNAEBIJFOFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNAEBIJFOFF*))((::PBYTE)hIl2Cpp + FNAEBIJFOFF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FNAEBIJFOFF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
