#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NKAEOPAAJLG_KJILBBBJLLK.h"
#include "unitysdk/System/Object.h"
class NKAEOPAAJLG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NKAEOPAAJLG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB55180)
#define NKAEOPAAJLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB554D0)
#define NKAEOPAAJLG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB54CB0)
#define NKAEOPAAJLG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB54B40)
#define NKAEOPAAJLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB54B30)
#define NKAEOPAAJLG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB54D80)
#define NKAEOPAAJLG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB54D20)
#define NKAEOPAAJLG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB54F80)
#define NKAEOPAAJLG_INEEIAACONI_OFFSET UNITYSDK_OFFSET(0x1EB54C80)
#define NKAEOPAAJLG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB54AC0)
#define NKAEOPAAJLG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB55350)
#define NKAEOPAAJLG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB55290)
#define NKAEOPAAJLG_OLAKBPIANLD_OFFSET UNITYSDK_OFFSET(0x1EB54D10)
#define NKAEOPAAJLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB54B20)
#define NKAEOPAAJLG_PGMEKGGIHON_OFFSET UNITYSDK_OFFSET(0x1EB54D00)
#define NKAEOPAAJLG_PPLEGOEHCBC_OFFSET UNITYSDK_OFFSET(0x1EB54C00)
#define NKAEOPAAJLG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB55020)
#define NKAEOPAAJLG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB55080)

inline static constexpr unsigned int NKAEOPAAJLG_TypeDefinitionIndex = 25524;

	class NKAEOPAAJLG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Object* HBJIFNKCGFI; // 0x18
		::NKAEOPAAJLG_KJILBBBJLLK IHHOLNPLPAI; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NKAEOPAAJLG")->GetStaticField(0x65CF0);
		}

		// static const ::System::Object DOFNJLGFFAK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAEOPAAJLG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NKAEOPAAJLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKAEOPAAJLG*))((::PBYTE)hIl2Cpp + NKAEOPAAJLG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKAEOPAAJLG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NKAEOPAAJLG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAEOPAAJLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NKAEOPAAJLG* Clone()
		{
			return ((::NKAEOPAAJLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAEOPAAJLG_CLONE_OFFSET))(this);
		}

		::System::UInt32 PPLEGOEHCBC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAEOPAAJLG_PPLEGOEHCBC_OFFSET))(this);
		}

		::System::Void INEEIAACONI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NKAEOPAAJLG_INEEIAACONI_OFFSET))(this, a1);
		}

		::NKAEOPAAJLG_KJILBBBJLLK PGMEKGGIHON()
		{
			return ((::NKAEOPAAJLG_KJILBBBJLLK(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAEOPAAJLG_PGMEKGGIHON_OFFSET))(this);
		}

		::System::Void OLAKBPIANLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAEOPAAJLG_OLAKBPIANLD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NKAEOPAAJLG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NKAEOPAAJLG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKAEOPAAJLG*))((::PBYTE)hIl2Cpp + NKAEOPAAJLG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAEOPAAJLG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAEOPAAJLG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NKAEOPAAJLG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAEOPAAJLG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NKAEOPAAJLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKAEOPAAJLG*))((::PBYTE)hIl2Cpp + NKAEOPAAJLG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NKAEOPAAJLG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
