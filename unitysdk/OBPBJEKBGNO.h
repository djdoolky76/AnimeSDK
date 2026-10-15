#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBPBJEKBGNO;
class OMCGJJCJIKB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OBPBJEKBGNO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB87D60)
#define OBPBJEKBGNO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB880E0)
#define OBPBJEKBGNO_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB876C0)
#define OBPBJEKBGNO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB87600)
#define OBPBJEKBGNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB875F0)
#define OBPBJEKBGNO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB87950)
#define OBPBJEKBGNO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB877D0)
#define OBPBJEKBGNO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB877A0)
#define OBPBJEKBGNO_GCMOCPMHPKL_OFFSET UNITYSDK_OFFSET(0x1EB877C0)
#define OBPBJEKBGNO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB87AD0)
#define OBPBJEKBGNO_JJEKOMENABP_OFFSET UNITYSDK_OFFSET(0x1EB877B0)
#define OBPBJEKBGNO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB875B0)
#define OBPBJEKBGNO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB87F10)
#define OBPBJEKBGNO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB87E30)
#define OBPBJEKBGNO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB87790)
#define OBPBJEKBGNO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB875E0)
#define OBPBJEKBGNO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB87C20)
#define OBPBJEKBGNO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB87C80)

inline static constexpr unsigned int OBPBJEKBGNO_TypeDefinitionIndex = 34164;

	class OBPBJEKBGNO : public ::System::Object
	{
	public:
		::OMCGJJCJIKB* BMDOPOGHMDO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OBPBJEKBGNO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OBPBJEKBGNO*>**)UnitySDK::FromName("", "OBPBJEKBGNO")->GetStaticField(0x10780);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object FONAKFCCNPF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPBJEKBGNO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OBPBJEKBGNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBPBJEKBGNO*))((::PBYTE)hIl2Cpp + OBPBJEKBGNO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBPBJEKBGNO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OBPBJEKBGNO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OBPBJEKBGNO*>*(*)())((::PBYTE)hIl2Cpp + OBPBJEKBGNO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPBJEKBGNO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OBPBJEKBGNO* Clone()
		{
			return ((::OBPBJEKBGNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPBJEKBGNO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPBJEKBGNO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OBPBJEKBGNO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::OMCGJJCJIKB* JJEKOMENABP()
		{
			return ((::OMCGJJCJIKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPBJEKBGNO_JJEKOMENABP_OFFSET))(this);
		}

		::System::Void GCMOCPMHPKL(::OMCGJJCJIKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMCGJJCJIKB*))((::PBYTE)hIl2Cpp + OBPBJEKBGNO_GCMOCPMHPKL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBPBJEKBGNO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OBPBJEKBGNO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OBPBJEKBGNO*))((::PBYTE)hIl2Cpp + OBPBJEKBGNO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPBJEKBGNO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPBJEKBGNO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OBPBJEKBGNO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPBJEKBGNO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OBPBJEKBGNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBPBJEKBGNO*))((::PBYTE)hIl2Cpp + OBPBJEKBGNO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OBPBJEKBGNO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
