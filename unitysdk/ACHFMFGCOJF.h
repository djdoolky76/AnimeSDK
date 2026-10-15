#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACHFMFGCOJF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ACHFMFGCOJF_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1DDAFBB0)
#define ACHFMFGCOJF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDAFF10)
#define ACHFMFGCOJF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDB0130)
#define ACHFMFGCOJF_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDAFB60)
#define ACHFMFGCOJF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDAFB30)
#define ACHFMFGCOJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDAFB20)
#define ACHFMFGCOJF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDAFC90)
#define ACHFMFGCOJF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDAFBC0)
#define ACHFMFGCOJF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDAFE00)
#define ACHFMFGCOJF_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1DDAFBA0)
#define ACHFMFGCOJF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDAFAE0)
#define ACHFMFGCOJF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDAFFD0)
#define ACHFMFGCOJF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDAFFA0)
#define ACHFMFGCOJF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDAFB10)
#define ACHFMFGCOJF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDAFE30)
#define ACHFMFGCOJF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDAFE90)

inline static constexpr unsigned int ACHFMFGCOJF_TypeDefinitionIndex = 28991;

	class ACHFMFGCOJF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IBEBBFIHLLP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ACHFMFGCOJF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ACHFMFGCOJF*>**)UnitySDK::FromName("", "ACHFMFGCOJF")->GetStaticField(0x32760);
		}

		// static const ::System::Object AODKNNMBGAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHFMFGCOJF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ACHFMFGCOJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACHFMFGCOJF*))((::PBYTE)hIl2Cpp + ACHFMFGCOJF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACHFMFGCOJF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ACHFMFGCOJF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ACHFMFGCOJF*>*(*)())((::PBYTE)hIl2Cpp + ACHFMFGCOJF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHFMFGCOJF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ACHFMFGCOJF* Clone()
		{
			return ((::ACHFMFGCOJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHFMFGCOJF_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHFMFGCOJF_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACHFMFGCOJF_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ACHFMFGCOJF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ACHFMFGCOJF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ACHFMFGCOJF*))((::PBYTE)hIl2Cpp + ACHFMFGCOJF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHFMFGCOJF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHFMFGCOJF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ACHFMFGCOJF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHFMFGCOJF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ACHFMFGCOJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACHFMFGCOJF*))((::PBYTE)hIl2Cpp + ACHFMFGCOJF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ACHFMFGCOJF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
