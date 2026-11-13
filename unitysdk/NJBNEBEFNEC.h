#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCBHFBPADEE;
class NJBNEBEFNEC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define NJBNEBEFNEC_ABIPDJPCJGC_OFFSET UNITYSDK_OFFSET(0x1EAD1A60)
#define NJBNEBEFNEC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAD2170)
#define NJBNEBEFNEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAD2560)
#define NJBNEBEFNEC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAD1980)
#define NJBNEBEFNEC_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1EAD1A40)
#define NJBNEBEFNEC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAD18D0)
#define NJBNEBEFNEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD18C0)
#define NJBNEBEFNEC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAD1CD0)
#define NJBNEBEFNEC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAD1AA0)
#define NJBNEBEFNEC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EAD1A90)
#define NJBNEBEFNEC_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1EAD1A50)
#define NJBNEBEFNEC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAD1F00)
#define NJBNEBEFNEC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAD1880)
#define NJBNEBEFNEC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAD2370)
#define NJBNEBEFNEC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAD2280)
#define NJBNEBEFNEC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EAD1A80)
#define NJBNEBEFNEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAD18B0)
#define NJBNEBEFNEC_PKJJJAOFIAJ_OFFSET UNITYSDK_OFFSET(0x1EAD1A70)
#define NJBNEBEFNEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAD1FD0)
#define NJBNEBEFNEC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAD2030)

inline static constexpr unsigned int NJBNEBEFNEC_TypeDefinitionIndex = 31716;

	class NJBNEBEFNEC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::BCBHFBPADEE* BGAIKCLELDE; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::NJBNEBEFNEC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NJBNEBEFNEC*>**)UnitySDK::FromName("", "NJBNEBEFNEC")->GetStaticField(0x66320);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object ODBGENNNFFE; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBNEBEFNEC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NJBNEBEFNEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJBNEBEFNEC*))((::PBYTE)hIl2Cpp + NJBNEBEFNEC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJBNEBEFNEC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NJBNEBEFNEC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NJBNEBEFNEC*>*(*)())((::PBYTE)hIl2Cpp + NJBNEBEFNEC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBNEBEFNEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NJBNEBEFNEC* Clone()
		{
			return ((::NJBNEBEFNEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBNEBEFNEC_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBNEBEFNEC_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + NJBNEBEFNEC_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::BCBHFBPADEE* ABIPDJPCJGC()
		{
			return ((::BCBHFBPADEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBNEBEFNEC_ABIPDJPCJGC_OFFSET))(this);
		}

		::System::Void PKJJJAOFIAJ(::BCBHFBPADEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCBHFBPADEE*))((::PBYTE)hIl2Cpp + NJBNEBEFNEC_PKJJJAOFIAJ_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBNEBEFNEC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJBNEBEFNEC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NJBNEBEFNEC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NJBNEBEFNEC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NJBNEBEFNEC*))((::PBYTE)hIl2Cpp + NJBNEBEFNEC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBNEBEFNEC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBNEBEFNEC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NJBNEBEFNEC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBNEBEFNEC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NJBNEBEFNEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJBNEBEFNEC*))((::PBYTE)hIl2Cpp + NJBNEBEFNEC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NJBNEBEFNEC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
