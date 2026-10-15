#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEODEMHEBKC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JEODEMHEBKC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E720940)
#define JEODEMHEBKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E720C10)
#define JEODEMHEBKC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E720540)
#define JEODEMHEBKC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E720510)
#define JEODEMHEBKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E720500)
#define JEODEMHEBKC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E720700)
#define JEODEMHEBKC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7205F0)
#define JEODEMHEBKC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7207D0)
#define JEODEMHEBKC_GMHHHNEBJEP_OFFSET UNITYSDK_OFFSET(0x1E7205E0)
#define JEODEMHEBKC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E720490)
#define JEODEMHEBKC_JODBIKCOKPA_OFFSET UNITYSDK_OFFSET(0x1E7205B0)
#define JEODEMHEBKC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E720A90)
#define JEODEMHEBKC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E720A50)
#define JEODEMHEBKC_MGHDAHFEGHK_OFFSET UNITYSDK_OFFSET(0x1E7205C0)
#define JEODEMHEBKC_MOKGANHMKII_OFFSET UNITYSDK_OFFSET(0x1E7205D0)
#define JEODEMHEBKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7204F0)
#define JEODEMHEBKC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E720800)
#define JEODEMHEBKC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E720860)

inline static constexpr unsigned int JEODEMHEBKC_TypeDefinitionIndex = 26344;

	class JEODEMHEBKC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KEALMALFHLF; // 0x18
		::System::UInt32 LAPDJOMDENI; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JEODEMHEBKC")->GetStaticField(0x11390);
		}

		// static const ::System::Object ILFADHBKBCA; // 0x0
		// static const ::System::Object LOOCLPMDPDO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEODEMHEBKC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JEODEMHEBKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEODEMHEBKC*))((::PBYTE)hIl2Cpp + JEODEMHEBKC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEODEMHEBKC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JEODEMHEBKC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEODEMHEBKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JEODEMHEBKC* Clone()
		{
			return ((::JEODEMHEBKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEODEMHEBKC_CLONE_OFFSET))(this);
		}

		::System::UInt32 JODBIKCOKPA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEODEMHEBKC_JODBIKCOKPA_OFFSET))(this);
		}

		::System::Void MGHDAHFEGHK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEODEMHEBKC_MGHDAHFEGHK_OFFSET))(this, a1);
		}

		::System::UInt32 MOKGANHMKII()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEODEMHEBKC_MOKGANHMKII_OFFSET))(this);
		}

		::System::Void GMHHHNEBJEP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEODEMHEBKC_GMHHHNEBJEP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEODEMHEBKC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JEODEMHEBKC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JEODEMHEBKC*))((::PBYTE)hIl2Cpp + JEODEMHEBKC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEODEMHEBKC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEODEMHEBKC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JEODEMHEBKC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEODEMHEBKC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JEODEMHEBKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEODEMHEBKC*))((::PBYTE)hIl2Cpp + JEODEMHEBKC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JEODEMHEBKC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
