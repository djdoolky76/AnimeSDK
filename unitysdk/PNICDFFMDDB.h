#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNICDFFMDDB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PNICDFFMDDB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F26C990)
#define PNICDFFMDDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F26CBF0)
#define PNICDFFMDDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1F26C540)
#define PNICDFFMDDB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F26C500)
#define PNICDFFMDDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1F26C4F0)
#define PNICDFFMDDB_EMMFANHJMCN_OFFSET UNITYSDK_OFFSET(0x1F26C5D0)
#define PNICDFFMDDB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F26C710)
#define PNICDFFMDDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F26C600)
#define PNICDFFMDDB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F26C7F0)
#define PNICDFFMDDB_IDKBECCMJIA_OFFSET UNITYSDK_OFFSET(0x1F26C5C0)
#define PNICDFFMDDB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F26C480)
#define PNICDFFMDDB_JNFBHFOFHFO_OFFSET UNITYSDK_OFFSET(0x1F26C5F0)
#define PNICDFFMDDB_KLKAIAKLHMF_OFFSET UNITYSDK_OFFSET(0x1F26C5E0)
#define PNICDFFMDDB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F26CA70)
#define PNICDFFMDDB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F26CA30)
#define PNICDFFMDDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F26C4E0)
#define PNICDFFMDDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F26C820)
#define PNICDFFMDDB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F26C880)

inline static constexpr unsigned int PNICDFFMDDB_TypeDefinitionIndex = 35569;

	class PNICDFFMDDB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AMOPIFLCGOO; // 0x18
		::System::Boolean ECKFPGOKDBK; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::PNICDFFMDDB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PNICDFFMDDB*>**)UnitySDK::FromName("", "PNICDFFMDDB")->GetStaticField(0x1BCA0);
		}

		// static const ::System::Object AFJMDPFOBGA; // 0x0
		// static const ::System::Object KKHPBDAEOLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNICDFFMDDB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PNICDFFMDDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNICDFFMDDB*))((::PBYTE)hIl2Cpp + PNICDFFMDDB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNICDFFMDDB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PNICDFFMDDB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PNICDFFMDDB*>*(*)())((::PBYTE)hIl2Cpp + PNICDFFMDDB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNICDFFMDDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PNICDFFMDDB* Clone()
		{
			return ((::PNICDFFMDDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNICDFFMDDB_CLONE_OFFSET))(this);
		}

		::System::Boolean IDKBECCMJIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNICDFFMDDB_IDKBECCMJIA_OFFSET))(this);
		}

		::System::Void EMMFANHJMCN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PNICDFFMDDB_EMMFANHJMCN_OFFSET))(this, a1);
		}

		::System::UInt32 KLKAIAKLHMF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNICDFFMDDB_KLKAIAKLHMF_OFFSET))(this);
		}

		::System::Void JNFBHFOFHFO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNICDFFMDDB_JNFBHFOFHFO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNICDFFMDDB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PNICDFFMDDB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNICDFFMDDB*))((::PBYTE)hIl2Cpp + PNICDFFMDDB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNICDFFMDDB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNICDFFMDDB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PNICDFFMDDB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNICDFFMDDB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PNICDFFMDDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNICDFFMDDB*))((::PBYTE)hIl2Cpp + PNICDFFMDDB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PNICDFFMDDB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
