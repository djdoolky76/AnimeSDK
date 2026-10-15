#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBPBGFNCJEP;
class GABKFNAJIDD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EBPBGFNCJEP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E248B50)
#define EBPBGFNCJEP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E248E70)
#define EBPBGFNCJEP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2485E0)
#define EBPBGFNCJEP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E248550)
#define EBPBGFNCJEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E248540)
#define EBPBGFNCJEP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E248840)
#define EBPBGFNCJEP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2486C0)
#define EBPBGFNCJEP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2486B0)
#define EBPBGFNCJEP_FLPDELEDIBK_OFFSET UNITYSDK_OFFSET(0x1E248690)
#define EBPBGFNCJEP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2489C0)
#define EBPBGFNCJEP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E248500)
#define EBPBGFNCJEP_LHJEMKJFLJK_OFFSET UNITYSDK_OFFSET(0x1E248680)
#define EBPBGFNCJEP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E248CB0)
#define EBPBGFNCJEP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E248C20)
#define EBPBGFNCJEP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2486A0)
#define EBPBGFNCJEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E248530)
#define EBPBGFNCJEP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E248A10)
#define EBPBGFNCJEP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E248A70)

	class EBPBGFNCJEP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GABKFNAJIDD* MGBEADJIBJM; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EBPBGFNCJEP")->GetStaticField(0x4CEF0);
		}

		// static const ::System::Object JMEOLDPADHB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPBGFNCJEP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EBPBGFNCJEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBPBGFNCJEP*))((::PBYTE)hIl2Cpp + EBPBGFNCJEP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBPBGFNCJEP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EBPBGFNCJEP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPBGFNCJEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EBPBGFNCJEP* Clone()
		{
			return ((::EBPBGFNCJEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPBGFNCJEP_CLONE_OFFSET))(this);
		}

		::GABKFNAJIDD* LHJEMKJFLJK()
		{
			return ((::GABKFNAJIDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPBGFNCJEP_LHJEMKJFLJK_OFFSET))(this);
		}

		::System::Void FLPDELEDIBK(::GABKFNAJIDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GABKFNAJIDD*))((::PBYTE)hIl2Cpp + EBPBGFNCJEP_FLPDELEDIBK_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPBGFNCJEP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBPBGFNCJEP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EBPBGFNCJEP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EBPBGFNCJEP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EBPBGFNCJEP*))((::PBYTE)hIl2Cpp + EBPBGFNCJEP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPBGFNCJEP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPBGFNCJEP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EBPBGFNCJEP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPBGFNCJEP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EBPBGFNCJEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBPBGFNCJEP*))((::PBYTE)hIl2Cpp + EBPBGFNCJEP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EBPBGFNCJEP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
