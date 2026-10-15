#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFJPGILAAON;
class NALOLCLOBMG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NALOLCLOBMG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAC68F0)
#define NALOLCLOBMG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC6C10)
#define NALOLCLOBMG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAC6310)
#define NALOLCLOBMG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAC6290)
#define NALOLCLOBMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC6280)
#define NALOLCLOBMG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAC6490)
#define NALOLCLOBMG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAC6410)
#define NALOLCLOBMG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EAC63E0)
#define NALOLCLOBMG_FEBMCJFOAID_OFFSET UNITYSDK_OFFSET(0x1EAC63F0)
#define NALOLCLOBMG_FMMFNNOAAEK_OFFSET UNITYSDK_OFFSET(0x1EAC63C0)
#define NALOLCLOBMG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAC6640)
#define NALOLCLOBMG_HNHHFFHAAOF_OFFSET UNITYSDK_OFFSET(0x1EAC6390)
#define NALOLCLOBMG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAC6240)
#define NALOLCLOBMG_KHEODLPMFBB_OFFSET UNITYSDK_OFFSET(0x1EAC6400)
#define NALOLCLOBMG_KMGGNNGDLCO_OFFSET UNITYSDK_OFFSET(0x1EAC63B0)
#define NALOLCLOBMG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAC6B00)
#define NALOLCLOBMG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAC69D0)
#define NALOLCLOBMG_MLMDGHMGMPD_OFFSET UNITYSDK_OFFSET(0x1EAC63A0)
#define NALOLCLOBMG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EAC63D0)
#define NALOLCLOBMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAC6270)
#define NALOLCLOBMG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAC6690)
#define NALOLCLOBMG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAC66F0)

inline static constexpr unsigned int NALOLCLOBMG_TypeDefinitionIndex = 27947;

	class NALOLCLOBMG : public ::System::Object
	{
	public:
		::DFJPGILAAON* DHEMELDNJMK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean MNEDBKBAJJF; // 0x20
		::System::Boolean CCNIHPKICOK; // 0x21
		::System::Byte _padding0[0x2];
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NALOLCLOBMG")->GetStaticField(0x5C940);
		}

		// static const ::System::Object EOGEPKBLOBE; // 0x0
		// static const ::System::Object KOAPPFHOOEJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object NNHNEBOFELG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NALOLCLOBMG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NALOLCLOBMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NALOLCLOBMG*))((::PBYTE)hIl2Cpp + NALOLCLOBMG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NALOLCLOBMG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NALOLCLOBMG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NALOLCLOBMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NALOLCLOBMG* Clone()
		{
			return ((::NALOLCLOBMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NALOLCLOBMG_CLONE_OFFSET))(this);
		}

		::System::Boolean HNHHFFHAAOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NALOLCLOBMG_HNHHFFHAAOF_OFFSET))(this);
		}

		::System::Void MLMDGHMGMPD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NALOLCLOBMG_MLMDGHMGMPD_OFFSET))(this, a1);
		}

		::System::Boolean KMGGNNGDLCO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NALOLCLOBMG_KMGGNNGDLCO_OFFSET))(this);
		}

		::System::Void FMMFNNOAAEK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NALOLCLOBMG_FMMFNNOAAEK_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NALOLCLOBMG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NALOLCLOBMG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::DFJPGILAAON* FEBMCJFOAID()
		{
			return ((::DFJPGILAAON*(*)(::PVOID))((::PBYTE)hIl2Cpp + NALOLCLOBMG_FEBMCJFOAID_OFFSET))(this);
		}

		::System::Void KHEODLPMFBB(::DFJPGILAAON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFJPGILAAON*))((::PBYTE)hIl2Cpp + NALOLCLOBMG_KHEODLPMFBB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NALOLCLOBMG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NALOLCLOBMG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NALOLCLOBMG*))((::PBYTE)hIl2Cpp + NALOLCLOBMG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NALOLCLOBMG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NALOLCLOBMG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NALOLCLOBMG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NALOLCLOBMG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NALOLCLOBMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NALOLCLOBMG*))((::PBYTE)hIl2Cpp + NALOLCLOBMG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NALOLCLOBMG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
