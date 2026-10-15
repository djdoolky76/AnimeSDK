#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NKAEOPAAJLG_KJILBBBJLLK.h"
#include "unitysdk/System/Object.h"
class NKAEOPAAJLG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NKAEOPAAJLG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB27B40)
#define NKAEOPAAJLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB27E90)
#define NKAEOPAAJLG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB27670)
#define NKAEOPAAJLG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB27500)
#define NKAEOPAAJLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB274F0)
#define NKAEOPAAJLG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB27740)
#define NKAEOPAAJLG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB276E0)
#define NKAEOPAAJLG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB27940)
#define NKAEOPAAJLG_INEEIAACONI_OFFSET UNITYSDK_OFFSET(0x1EB27640)
#define NKAEOPAAJLG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB27480)
#define NKAEOPAAJLG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB27D10)
#define NKAEOPAAJLG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB27C50)
#define NKAEOPAAJLG_OLAKBPIANLD_OFFSET UNITYSDK_OFFSET(0x1EB276D0)
#define NKAEOPAAJLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB274E0)
#define NKAEOPAAJLG_PGMEKGGIHON_OFFSET UNITYSDK_OFFSET(0x1EB276C0)
#define NKAEOPAAJLG_PPLEGOEHCBC_OFFSET UNITYSDK_OFFSET(0x1EB275C0)
#define NKAEOPAAJLG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB279E0)
#define NKAEOPAAJLG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB27A40)

inline static constexpr unsigned int NKAEOPAAJLG_TypeDefinitionIndex = 25524;

	class NKAEOPAAJLG : public ::System::Object
	{
	public:
		::System::Object* HBJIFNKCGFI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::NKAEOPAAJLG_KJILBBBJLLK IHHOLNPLPAI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NKAEOPAAJLG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NKAEOPAAJLG*>**)UnitySDK::FromName("", "NKAEOPAAJLG")->GetStaticField(0x692F0);
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

		static ::Google::Protobuf::MessageParser_1<::NKAEOPAAJLG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NKAEOPAAJLG*>*(*)())((::PBYTE)hIl2Cpp + NKAEOPAAJLG_JJGHOBBFNJD_OFFSET))();
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
