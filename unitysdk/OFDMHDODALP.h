#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFDMHDODALP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OFDMHDODALP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE09D30)
#define OFDMHDODALP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE0A000)
#define OFDMHDODALP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE09980)
#define OFDMHDODALP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE09950)
#define OFDMHDODALP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE09940)
#define OFDMHDODALP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE09AF0)
#define OFDMHDODALP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE09A10)
#define OFDMHDODALP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DE099E0)
#define OFDMHDODALP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE09BC0)
#define OFDMHDODALP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE09900)
#define OFDMHDODALP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE09E80)
#define OFDMHDODALP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE09E40)
#define OFDMHDODALP_NOKGLDLPBMF_OFFSET UNITYSDK_OFFSET(0x1DE099F0)
#define OFDMHDODALP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DE099D0)
#define OFDMHDODALP_PAADFGNKKBC_OFFSET UNITYSDK_OFFSET(0x1DE09A00)
#define OFDMHDODALP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE09930)
#define OFDMHDODALP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE09BF0)
#define OFDMHDODALP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE09C50)

inline static constexpr unsigned int OFDMHDODALP_TypeDefinitionIndex = 30299;

	class OFDMHDODALP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 GMIBHOBIEFP; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::OFDMHDODALP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OFDMHDODALP*>**)UnitySDK::FromName("", "OFDMHDODALP")->GetStaticField(0x15230);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DONMANGCEDI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDMHDODALP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OFDMHDODALP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFDMHDODALP*))((::PBYTE)hIl2Cpp + OFDMHDODALP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFDMHDODALP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OFDMHDODALP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OFDMHDODALP*>*(*)())((::PBYTE)hIl2Cpp + OFDMHDODALP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDMHDODALP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OFDMHDODALP* Clone()
		{
			return ((::OFDMHDODALP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDMHDODALP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDMHDODALP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFDMHDODALP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 NOKGLDLPBMF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDMHDODALP_NOKGLDLPBMF_OFFSET))(this);
		}

		::System::Void PAADFGNKKBC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFDMHDODALP_PAADFGNKKBC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFDMHDODALP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OFDMHDODALP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFDMHDODALP*))((::PBYTE)hIl2Cpp + OFDMHDODALP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDMHDODALP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDMHDODALP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OFDMHDODALP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDMHDODALP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OFDMHDODALP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFDMHDODALP*))((::PBYTE)hIl2Cpp + OFDMHDODALP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OFDMHDODALP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
