#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHNHDFIJGPF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KHNHDFIJGPF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E81F170)
#define KHNHDFIJGPF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E81F390)
#define KHNHDFIJGPF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E81EDC0)
#define KHNHDFIJGPF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E81ED90)
#define KHNHDFIJGPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E81ED80)
#define KHNHDFIJGPF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E81EEF0)
#define KHNHDFIJGPF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E81EE20)
#define KHNHDFIJGPF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E81EE10)
#define KHNHDFIJGPF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E81F060)
#define KHNHDFIJGPF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E81ED40)
#define KHNHDFIJGPF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E81F230)
#define KHNHDFIJGPF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E81F200)
#define KHNHDFIJGPF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E81EE00)
#define KHNHDFIJGPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E81ED70)
#define KHNHDFIJGPF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E81F090)
#define KHNHDFIJGPF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E81F0F0)

inline static constexpr unsigned int KHNHDFIJGPF_TypeDefinitionIndex = 27534;

	class KHNHDFIJGPF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KHNHDFIJGPF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KHNHDFIJGPF*>**)UnitySDK::FromName("", "KHNHDFIJGPF")->GetStaticField(0x169B0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNHDFIJGPF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KHNHDFIJGPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHNHDFIJGPF*))((::PBYTE)hIl2Cpp + KHNHDFIJGPF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHNHDFIJGPF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KHNHDFIJGPF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KHNHDFIJGPF*>*(*)())((::PBYTE)hIl2Cpp + KHNHDFIJGPF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNHDFIJGPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KHNHDFIJGPF* Clone()
		{
			return ((::KHNHDFIJGPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNHDFIJGPF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNHDFIJGPF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHNHDFIJGPF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHNHDFIJGPF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KHNHDFIJGPF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHNHDFIJGPF*))((::PBYTE)hIl2Cpp + KHNHDFIJGPF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNHDFIJGPF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNHDFIJGPF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KHNHDFIJGPF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNHDFIJGPF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KHNHDFIJGPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHNHDFIJGPF*))((::PBYTE)hIl2Cpp + KHNHDFIJGPF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KHNHDFIJGPF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
