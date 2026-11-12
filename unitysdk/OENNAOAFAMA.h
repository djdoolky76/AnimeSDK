#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OENNAOAFAMA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OENNAOAFAMA_BKHOGNAFCNC_OFFSET UNITYSDK_OFFSET(0x1F0D5660)
#define OENNAOAFAMA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F0D5A20)
#define OENNAOAFAMA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0D5DC0)
#define OENNAOAFAMA_CLONE_OFFSET UNITYSDK_OFFSET(0x1F0D5600)
#define OENNAOAFAMA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F0D55C0)
#define OENNAOAFAMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0D55B0)
#define OENNAOAFAMA_ENPMPIPLNOA_OFFSET UNITYSDK_OFFSET(0x1F0D5690)
#define OENNAOAFAMA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F0D5790)
#define OENNAOAFAMA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F0D56B0)
#define OENNAOAFAMA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F0D5680)
#define OENNAOAFAMA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F0D5860)
#define OENNAOAFAMA_JBENGILKBJM_OFFSET UNITYSDK_OFFSET(0x1F0D5650)
#define OENNAOAFAMA_JICEHCNDOKK_OFFSET UNITYSDK_OFFSET(0x1F0D56A0)
#define OENNAOAFAMA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F0D5570)
#define OENNAOAFAMA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F0D5C00)
#define OENNAOAFAMA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F0D5BB0)
#define OENNAOAFAMA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F0D5670)
#define OENNAOAFAMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F0D55A0)
#define OENNAOAFAMA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F0D5890)
#define OENNAOAFAMA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F0D58F0)

inline static constexpr unsigned int OENNAOAFAMA_TypeDefinitionIndex = 30540;

	class OENNAOAFAMA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GIBDGHCDOAJ; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		::System::UInt32 MECIFLDDCNN; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OENNAOAFAMA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OENNAOAFAMA*>**)UnitySDK::FromName("", "OENNAOAFAMA")->GetStaticField(0x10550);
		}

		// static const ::System::Object CKMPBFLGCDJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
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

		static ::Google::Protobuf::MessageParser_1<::OENNAOAFAMA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OENNAOAFAMA*>*(*)())((::PBYTE)hIl2Cpp + OENNAOAFAMA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OENNAOAFAMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OENNAOAFAMA* Clone()
		{
			return ((::OENNAOAFAMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OENNAOAFAMA_CLONE_OFFSET))(this);
		}

		::System::UInt32 JBENGILKBJM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OENNAOAFAMA_JBENGILKBJM_OFFSET))(this);
		}

		::System::Void BKHOGNAFCNC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OENNAOAFAMA_BKHOGNAFCNC_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OENNAOAFAMA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OENNAOAFAMA_FAEKBILGPCO_OFFSET))(this, a1);
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
