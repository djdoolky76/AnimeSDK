#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBONOPFLPDJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KBONOPFLPDJ_BIOOHPIHADO_OFFSET UNITYSDK_OFFSET(0x1E7C40B0)
#define KBONOPFLPDJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7C4410)
#define KBONOPFLPDJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C46E0)
#define KBONOPFLPDJ_CLCNPIJOIBL_OFFSET UNITYSDK_OFFSET(0x1E7C40C0)
#define KBONOPFLPDJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7C4060)
#define KBONOPFLPDJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7C4030)
#define KBONOPFLPDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C4020)
#define KBONOPFLPDJ_DNPBHEMIBPK_OFFSET UNITYSDK_OFFSET(0x1E7C40E0)
#define KBONOPFLPDJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7C41D0)
#define KBONOPFLPDJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7C40F0)
#define KBONOPFLPDJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7C42A0)
#define KBONOPFLPDJ_IMFBLHADADC_OFFSET UNITYSDK_OFFSET(0x1E7C40D0)
#define KBONOPFLPDJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7C3FE0)
#define KBONOPFLPDJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7C4560)
#define KBONOPFLPDJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7C4520)
#define KBONOPFLPDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7C4010)
#define KBONOPFLPDJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7C42D0)
#define KBONOPFLPDJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7C4330)

inline static constexpr unsigned int KBONOPFLPDJ_TypeDefinitionIndex = 32384;

	class KBONOPFLPDJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PANHBLLDMGI; // 0x18
		::System::UInt32 MGPCOLIAECE; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KBONOPFLPDJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KBONOPFLPDJ*>**)UnitySDK::FromName("", "KBONOPFLPDJ")->GetStaticField(0xEB80);
		}

		// static const ::System::Object BOGFCKKNGJB; // 0x0
		// static const ::System::Object EMPDMPHKKGB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBONOPFLPDJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KBONOPFLPDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBONOPFLPDJ*))((::PBYTE)hIl2Cpp + KBONOPFLPDJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBONOPFLPDJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KBONOPFLPDJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KBONOPFLPDJ*>*(*)())((::PBYTE)hIl2Cpp + KBONOPFLPDJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBONOPFLPDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KBONOPFLPDJ* Clone()
		{
			return ((::KBONOPFLPDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBONOPFLPDJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 BIOOHPIHADO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBONOPFLPDJ_BIOOHPIHADO_OFFSET))(this);
		}

		::System::Void CLCNPIJOIBL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KBONOPFLPDJ_CLCNPIJOIBL_OFFSET))(this, a1);
		}

		::System::UInt32 IMFBLHADADC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBONOPFLPDJ_IMFBLHADADC_OFFSET))(this);
		}

		::System::Void DNPBHEMIBPK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KBONOPFLPDJ_DNPBHEMIBPK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBONOPFLPDJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KBONOPFLPDJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KBONOPFLPDJ*))((::PBYTE)hIl2Cpp + KBONOPFLPDJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBONOPFLPDJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBONOPFLPDJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KBONOPFLPDJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBONOPFLPDJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KBONOPFLPDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBONOPFLPDJ*))((::PBYTE)hIl2Cpp + KBONOPFLPDJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KBONOPFLPDJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
