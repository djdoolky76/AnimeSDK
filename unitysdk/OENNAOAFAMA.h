#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OENNAOAFAMA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OENNAOAFAMA_BKHOGNAFCNC_OFFSET UNITYSDK_OFFSET(0x1DE31C00)
#define OENNAOAFAMA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE31FA0)
#define OENNAOAFAMA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE32340)
#define OENNAOAFAMA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE31B80)
#define OENNAOAFAMA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE31B40)
#define OENNAOAFAMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE31B30)
#define OENNAOAFAMA_ENPMPIPLNOA_OFFSET UNITYSDK_OFFSET(0x1DE31C10)
#define OENNAOAFAMA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE31D10)
#define OENNAOAFAMA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE31C30)
#define OENNAOAFAMA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DE31BE0)
#define OENNAOAFAMA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE31DE0)
#define OENNAOAFAMA_JBENGILKBJM_OFFSET UNITYSDK_OFFSET(0x1DE31BF0)
#define OENNAOAFAMA_JICEHCNDOKK_OFFSET UNITYSDK_OFFSET(0x1DE31C20)
#define OENNAOAFAMA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE31AF0)
#define OENNAOAFAMA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE32180)
#define OENNAOAFAMA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE32130)
#define OENNAOAFAMA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DE31BD0)
#define OENNAOAFAMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE31B20)
#define OENNAOAFAMA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE31E10)
#define OENNAOAFAMA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE31E70)

inline static constexpr unsigned int OENNAOAFAMA_TypeDefinitionIndex = 29720;

	class OENNAOAFAMA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MECIFLDDCNN; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		::System::UInt32 GIBDGHCDOAJ; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OENNAOAFAMA")->GetStaticField(0x15BA0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CKMPBFLGCDJ; // 0x0
		// static const ::System::Object CEMEONGDHMI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OENNAOAFAMA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OENNAOAFAMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OENNAOAFAMA*))((::PBYTE)hIl2Cpp + OENNAOAFAMA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OENNAOAFAMA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OENNAOAFAMA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OENNAOAFAMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OENNAOAFAMA* Clone()
		{
			return ((::OENNAOAFAMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OENNAOAFAMA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OENNAOAFAMA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OENNAOAFAMA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 JBENGILKBJM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OENNAOAFAMA_JBENGILKBJM_OFFSET))(this);
		}

		::System::Void BKHOGNAFCNC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OENNAOAFAMA_BKHOGNAFCNC_OFFSET))(this, a1);
		}

		::System::UInt32 ENPMPIPLNOA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OENNAOAFAMA_ENPMPIPLNOA_OFFSET))(this);
		}

		::System::Void JICEHCNDOKK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OENNAOAFAMA_JICEHCNDOKK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OENNAOAFAMA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OENNAOAFAMA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OENNAOAFAMA*))((::PBYTE)hIl2Cpp + OENNAOAFAMA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OENNAOAFAMA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OENNAOAFAMA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OENNAOAFAMA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OENNAOAFAMA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OENNAOAFAMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OENNAOAFAMA*))((::PBYTE)hIl2Cpp + OENNAOAFAMA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OENNAOAFAMA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
