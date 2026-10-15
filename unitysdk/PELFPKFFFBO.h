#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGMDACIPFHL;
class PELFPKFFFBO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PELFPKFFFBO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEEEDC0)
#define PELFPKFFFBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEEF140)
#define PELFPKFFFBO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEEE900)
#define PELFPKFFFBO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEEE840)
#define PELFPKFFFBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEEE7F0)
#define PELFPKFFFBO_EFLKFHJLFAD_OFFSET UNITYSDK_OFFSET(0x1DEEE950)
#define PELFPKFFFBO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEEEAB0)
#define PELFPKFFFBO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEEE960)
#define PELFPKFFFBO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DEEE940)
#define PELFPKFFFBO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEEEBE0)
#define PELFPKFFFBO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEEE7B0)
#define PELFPKFFFBO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEEEF70)
#define PELFPKFFFBO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEEEED0)
#define PELFPKFFFBO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DEEE930)
#define PELFPKFFFBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEEE7E0)
#define PELFPKFFFBO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEEEC50)
#define PELFPKFFFBO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEEECB0)

inline static constexpr unsigned int PELFPKFFFBO_TypeDefinitionIndex = 30787;

	class PELFPKFFFBO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LGMDACIPFHL*>* LNJJJFBFJAH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PELFPKFFFBO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PELFPKFFFBO*>**)UnitySDK::FromName("", "PELFPKFFFBO")->GetStaticField(0x30F50);
		}

		static ::Google::Protobuf::FieldCodec_1<::LGMDACIPFHL*>** StaticGet_ALLBNEOBGNC()
		{
			return (::Google::Protobuf::FieldCodec_1<::LGMDACIPFHL*>**)UnitySDK::FromName("", "PELFPKFFFBO")->GetStaticField(0x30F58);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JCALNIODLLN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PELFPKFFFBO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PELFPKFFFBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PELFPKFFFBO*))((::PBYTE)hIl2Cpp + PELFPKFFFBO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PELFPKFFFBO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PELFPKFFFBO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PELFPKFFFBO*>*(*)())((::PBYTE)hIl2Cpp + PELFPKFFFBO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PELFPKFFFBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PELFPKFFFBO* Clone()
		{
			return ((::PELFPKFFFBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PELFPKFFFBO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PELFPKFFFBO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PELFPKFFFBO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LGMDACIPFHL*>* EFLKFHJLFAD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LGMDACIPFHL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PELFPKFFFBO_EFLKFHJLFAD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PELFPKFFFBO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PELFPKFFFBO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PELFPKFFFBO*))((::PBYTE)hIl2Cpp + PELFPKFFFBO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PELFPKFFFBO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PELFPKFFFBO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PELFPKFFFBO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PELFPKFFFBO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PELFPKFFFBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PELFPKFFFBO*))((::PBYTE)hIl2Cpp + PELFPKFFFBO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PELFPKFFFBO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
