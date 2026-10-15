#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIPBHLBFDAH;
class KMGDKPACAED;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KMGDKPACAED_ABGEGMHAOPO_OFFSET UNITYSDK_OFFSET(0x1E898820)
#define KMGDKPACAED_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E898DB0)
#define KMGDKPACAED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E899030)
#define KMGDKPACAED_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8987B0)
#define KMGDKPACAED_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E898760)
#define KMGDKPACAED_CTOR_OFFSET UNITYSDK_OFFSET(0x1E898750)
#define KMGDKPACAED_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8989A0)
#define KMGDKPACAED_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E898830)
#define KMGDKPACAED_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E898C70)
#define KMGDKPACAED_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E898710)
#define KMGDKPACAED_MBGJFAKGJAL_OFFSET UNITYSDK_OFFSET(0x1E898810)
#define KMGDKPACAED_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E898EA0)
#define KMGDKPACAED_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E898E10)
#define KMGDKPACAED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E898740)
#define KMGDKPACAED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E898CC0)
#define KMGDKPACAED_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E898D20)

inline static constexpr unsigned int KMGDKPACAED_TypeDefinitionIndex = 27772;

	class KMGDKPACAED : public ::System::Object
	{
	public:
		::GIPBHLBFDAH* KPNCLGABAOD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KMGDKPACAED")->GetStaticField(0x222C0);
		}

		// static const ::System::Object ALBJBNPCJFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGDKPACAED_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KMGDKPACAED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMGDKPACAED*))((::PBYTE)hIl2Cpp + KMGDKPACAED_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMGDKPACAED_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KMGDKPACAED_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGDKPACAED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KMGDKPACAED* Clone()
		{
			return ((::KMGDKPACAED*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGDKPACAED_CLONE_OFFSET))(this);
		}

		::GIPBHLBFDAH* MBGJFAKGJAL()
		{
			return ((::GIPBHLBFDAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGDKPACAED_MBGJFAKGJAL_OFFSET))(this);
		}

		::System::Void ABGEGMHAOPO(::GIPBHLBFDAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIPBHLBFDAH*))((::PBYTE)hIl2Cpp + KMGDKPACAED_ABGEGMHAOPO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMGDKPACAED_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KMGDKPACAED* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KMGDKPACAED*))((::PBYTE)hIl2Cpp + KMGDKPACAED_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGDKPACAED_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGDKPACAED_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KMGDKPACAED_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGDKPACAED_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KMGDKPACAED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMGDKPACAED*))((::PBYTE)hIl2Cpp + KMGDKPACAED_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KMGDKPACAED_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
