#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIDHDGNADCF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KIDHDGNADCF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB71400)
#define KIDHDGNADCF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB71620)
#define KIDHDGNADCF_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB71050)
#define KIDHDGNADCF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB71020)
#define KIDHDGNADCF_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB71010)
#define KIDHDGNADCF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB71180)
#define KIDHDGNADCF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB710B0)
#define KIDHDGNADCF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FB710A0)
#define KIDHDGNADCF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB712F0)
#define KIDHDGNADCF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB70FD0)
#define KIDHDGNADCF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB714C0)
#define KIDHDGNADCF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB71490)
#define KIDHDGNADCF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FB71090)
#define KIDHDGNADCF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB71000)
#define KIDHDGNADCF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB71320)
#define KIDHDGNADCF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB71380)

inline static constexpr unsigned int KIDHDGNADCF_TypeDefinitionIndex = 28116;

	class KIDHDGNADCF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KIDHDGNADCF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KIDHDGNADCF*>**)UnitySDK::FromName("", "KIDHDGNADCF")->GetStaticField(0x12A70);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDHDGNADCF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KIDHDGNADCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIDHDGNADCF*))((::PBYTE)hIl2Cpp + KIDHDGNADCF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIDHDGNADCF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KIDHDGNADCF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KIDHDGNADCF*>*(*)())((::PBYTE)hIl2Cpp + KIDHDGNADCF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDHDGNADCF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KIDHDGNADCF* Clone()
		{
			return ((::KIDHDGNADCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDHDGNADCF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDHDGNADCF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIDHDGNADCF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIDHDGNADCF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KIDHDGNADCF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KIDHDGNADCF*))((::PBYTE)hIl2Cpp + KIDHDGNADCF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDHDGNADCF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDHDGNADCF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KIDHDGNADCF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDHDGNADCF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KIDHDGNADCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIDHDGNADCF*))((::PBYTE)hIl2Cpp + KIDHDGNADCF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KIDHDGNADCF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
