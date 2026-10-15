#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEIMIFAEADO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IEIMIFAEADO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E63B0B0)
#define IEIMIFAEADO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E63B2A0)
#define IEIMIFAEADO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E63AC70)
#define IEIMIFAEADO_CNKPDNMEFKD_OFFSET UNITYSDK_OFFSET(0x1E63ACD0)
#define IEIMIFAEADO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E63AC30)
#define IEIMIFAEADO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E63AC20)
#define IEIMIFAEADO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E63ADF0)
#define IEIMIFAEADO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E63AD00)
#define IEIMIFAEADO_FOIHDAHHBKJ_OFFSET UNITYSDK_OFFSET(0x1E63ACC0)
#define IEIMIFAEADO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E63AEE0)
#define IEIMIFAEADO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E63ABE0)
#define IEIMIFAEADO_KEEBIABCFHH_OFFSET UNITYSDK_OFFSET(0x1E63ACF0)
#define IEIMIFAEADO_MEFHDHFIJCC_OFFSET UNITYSDK_OFFSET(0x1E63ACE0)
#define IEIMIFAEADO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E63B120)
#define IEIMIFAEADO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E63B0E0)
#define IEIMIFAEADO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E63AC10)
#define IEIMIFAEADO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E63AF10)
#define IEIMIFAEADO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E63AF70)

	class IEIMIFAEADO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean BBGFOHDLFAL; // 0x18
		::System::Boolean BDPHPGFFFDM; // 0x19
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IEIMIFAEADO")->GetStaticField(0x48A40);
		}

		// static const ::System::Object AGBPCDPMDOB; // 0x0
		// static const ::System::Object CNJCMDJAAGA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIMIFAEADO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IEIMIFAEADO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEIMIFAEADO*))((::PBYTE)hIl2Cpp + IEIMIFAEADO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEIMIFAEADO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IEIMIFAEADO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIMIFAEADO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IEIMIFAEADO* Clone()
		{
			return ((::IEIMIFAEADO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIMIFAEADO_CLONE_OFFSET))(this);
		}

		::System::Boolean FOIHDAHHBKJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIMIFAEADO_FOIHDAHHBKJ_OFFSET))(this);
		}

		::System::Void CNKPDNMEFKD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IEIMIFAEADO_CNKPDNMEFKD_OFFSET))(this, a1);
		}

		::System::Boolean MEFHDHFIJCC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIMIFAEADO_MEFHDHFIJCC_OFFSET))(this);
		}

		::System::Void KEEBIABCFHH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IEIMIFAEADO_KEEBIABCFHH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEIMIFAEADO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IEIMIFAEADO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IEIMIFAEADO*))((::PBYTE)hIl2Cpp + IEIMIFAEADO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIMIFAEADO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIMIFAEADO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IEIMIFAEADO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIMIFAEADO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IEIMIFAEADO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEIMIFAEADO*))((::PBYTE)hIl2Cpp + IEIMIFAEADO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IEIMIFAEADO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
