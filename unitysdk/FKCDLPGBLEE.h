#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAIFDBLLGKK;
class FKCDLPGBLEE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FKCDLPGBLEE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3AB8D0)
#define FKCDLPGBLEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3ABB20)
#define FKCDLPGBLEE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3AB2B0)
#define FKCDLPGBLEE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3AB240)
#define FKCDLPGBLEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3AB230)
#define FKCDLPGBLEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3AB4C0)
#define FKCDLPGBLEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3AB350)
#define FKCDLPGBLEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3AB790)
#define FKCDLPGBLEE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3AB1F0)
#define FKCDLPGBLEE_LMGJFBNGFCG_OFFSET UNITYSDK_OFFSET(0x1E3AB340)
#define FKCDLPGBLEE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3AB9A0)
#define FKCDLPGBLEE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3AB930)
#define FKCDLPGBLEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3AB220)
#define FKCDLPGBLEE_PCHAMOCLBBD_OFFSET UNITYSDK_OFFSET(0x1E3AB330)
#define FKCDLPGBLEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3AB7E0)
#define FKCDLPGBLEE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3AB840)

inline static constexpr unsigned int FKCDLPGBLEE_TypeDefinitionIndex = 26156;

	class FKCDLPGBLEE : public ::System::Object
	{
	public:
		::FAIFDBLLGKK* JCNBPGBPHOI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FKCDLPGBLEE")->GetStaticField(0x61050);
		}

		// static const ::System::Object IBBPHNPDBPG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCDLPGBLEE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FKCDLPGBLEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKCDLPGBLEE*))((::PBYTE)hIl2Cpp + FKCDLPGBLEE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKCDLPGBLEE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FKCDLPGBLEE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCDLPGBLEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FKCDLPGBLEE* Clone()
		{
			return ((::FKCDLPGBLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCDLPGBLEE_CLONE_OFFSET))(this);
		}

		::FAIFDBLLGKK* PCHAMOCLBBD()
		{
			return ((::FAIFDBLLGKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCDLPGBLEE_PCHAMOCLBBD_OFFSET))(this);
		}

		::System::Void LMGJFBNGFCG(::FAIFDBLLGKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAIFDBLLGKK*))((::PBYTE)hIl2Cpp + FKCDLPGBLEE_LMGJFBNGFCG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKCDLPGBLEE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FKCDLPGBLEE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKCDLPGBLEE*))((::PBYTE)hIl2Cpp + FKCDLPGBLEE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCDLPGBLEE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCDLPGBLEE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FKCDLPGBLEE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCDLPGBLEE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FKCDLPGBLEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKCDLPGBLEE*))((::PBYTE)hIl2Cpp + FKCDLPGBLEE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FKCDLPGBLEE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
