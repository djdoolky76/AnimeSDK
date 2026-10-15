#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPPFFMBNGBP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NPPFFMBNGBP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EBA28D0)
#define NPPFFMBNGBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBA2BA0)
#define NPPFFMBNGBP_CLONE_OFFSET UNITYSDK_OFFSET(0x1EBA24D0)
#define NPPFFMBNGBP_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1EBA2540)
#define NPPFFMBNGBP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBA24A0)
#define NPPFFMBNGBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBA2490)
#define NPPFFMBNGBP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EBA2690)
#define NPPFFMBNGBP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EBA2580)
#define NPPFFMBNGBP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EBA2760)
#define NPPFFMBNGBP_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1EBA2550)
#define NPPFFMBNGBP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EBA2420)
#define NPPFFMBNGBP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EBA2A20)
#define NPPFFMBNGBP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EBA29E0)
#define NPPFFMBNGBP_MJPGIEICBAP_OFFSET UNITYSDK_OFFSET(0x1EBA2560)
#define NPPFFMBNGBP_OKPOGFPMGNM_OFFSET UNITYSDK_OFFSET(0x1EBA2570)
#define NPPFFMBNGBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EBA2480)
#define NPPFFMBNGBP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBA2790)
#define NPPFFMBNGBP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EBA27F0)

inline static constexpr unsigned int NPPFFMBNGBP_TypeDefinitionIndex = 34988;

	class NPPFFMBNGBP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NGFGMKLACAK; // 0x18
		::System::UInt32 KJAENGKDFJD; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NPPFFMBNGBP")->GetStaticField(0xF1F0);
		}

		// static const ::System::Object PIACMPBJOIK; // 0x0
		// static const ::System::Object JBEKMBAIGCK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPFFMBNGBP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NPPFFMBNGBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPPFFMBNGBP*))((::PBYTE)hIl2Cpp + NPPFFMBNGBP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPPFFMBNGBP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NPPFFMBNGBP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPFFMBNGBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NPPFFMBNGBP* Clone()
		{
			return ((::NPPFFMBNGBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPFFMBNGBP_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPFFMBNGBP_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPPFFMBNGBP_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::UInt32 MJPGIEICBAP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPFFMBNGBP_MJPGIEICBAP_OFFSET))(this);
		}

		::System::Void OKPOGFPMGNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPPFFMBNGBP_OKPOGFPMGNM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPPFFMBNGBP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NPPFFMBNGBP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPPFFMBNGBP*))((::PBYTE)hIl2Cpp + NPPFFMBNGBP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPFFMBNGBP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPFFMBNGBP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NPPFFMBNGBP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPFFMBNGBP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NPPFFMBNGBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPPFFMBNGBP*))((::PBYTE)hIl2Cpp + NPPFFMBNGBP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NPPFFMBNGBP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
