#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJNCNELEOMO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BJNCNELEOMO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF1D700)
#define BJNCNELEOMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF1D9D0)
#define BJNCNELEOMO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF1D300)
#define BJNCNELEOMO_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1DF1D370)
#define BJNCNELEOMO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF1D2D0)
#define BJNCNELEOMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1D2C0)
#define BJNCNELEOMO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF1D4C0)
#define BJNCNELEOMO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF1D3B0)
#define BJNCNELEOMO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF1D590)
#define BJNCNELEOMO_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1DF1D380)
#define BJNCNELEOMO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF1D250)
#define BJNCNELEOMO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF1D850)
#define BJNCNELEOMO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF1D810)
#define BJNCNELEOMO_MJPGIEICBAP_OFFSET UNITYSDK_OFFSET(0x1DF1D390)
#define BJNCNELEOMO_OKPOGFPMGNM_OFFSET UNITYSDK_OFFSET(0x1DF1D3A0)
#define BJNCNELEOMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF1D2B0)
#define BJNCNELEOMO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF1D5C0)
#define BJNCNELEOMO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF1D620)

inline static constexpr unsigned int BJNCNELEOMO_TypeDefinitionIndex = 25700;

	class BJNCNELEOMO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KJAENGKDFJD; // 0x18
		::System::UInt32 NGFGMKLACAK; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::BJNCNELEOMO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BJNCNELEOMO*>**)UnitySDK::FromName("", "BJNCNELEOMO")->GetStaticField(0x31440);
		}

		// static const ::System::Object PIACMPBJOIK; // 0x0
		// static const ::System::Object JBEKMBAIGCK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNCNELEOMO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BJNCNELEOMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJNCNELEOMO*))((::PBYTE)hIl2Cpp + BJNCNELEOMO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJNCNELEOMO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BJNCNELEOMO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BJNCNELEOMO*>*(*)())((::PBYTE)hIl2Cpp + BJNCNELEOMO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNCNELEOMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BJNCNELEOMO* Clone()
		{
			return ((::BJNCNELEOMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNCNELEOMO_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNCNELEOMO_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJNCNELEOMO_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::UInt32 MJPGIEICBAP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNCNELEOMO_MJPGIEICBAP_OFFSET))(this);
		}

		::System::Void OKPOGFPMGNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJNCNELEOMO_OKPOGFPMGNM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJNCNELEOMO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BJNCNELEOMO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJNCNELEOMO*))((::PBYTE)hIl2Cpp + BJNCNELEOMO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNCNELEOMO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNCNELEOMO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BJNCNELEOMO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNCNELEOMO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BJNCNELEOMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJNCNELEOMO*))((::PBYTE)hIl2Cpp + BJNCNELEOMO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BJNCNELEOMO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
