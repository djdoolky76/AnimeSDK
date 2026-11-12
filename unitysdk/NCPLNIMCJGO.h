#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCPLNIMCJGO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NCPLNIMCJGO_BIADEKOAHLF_OFFSET UNITYSDK_OFFSET(0x1FE23690)
#define NCPLNIMCJGO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FE23A60)
#define NCPLNIMCJGO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE23CC0)
#define NCPLNIMCJGO_CLONE_OFFSET UNITYSDK_OFFSET(0x1FE23610)
#define NCPLNIMCJGO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE235D0)
#define NCPLNIMCJGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE235C0)
#define NCPLNIMCJGO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FE237E0)
#define NCPLNIMCJGO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE236D0)
#define NCPLNIMCJGO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FE238C0)
#define NCPLNIMCJGO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FE23550)
#define NCPLNIMCJGO_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0x1FE236B0)
#define NCPLNIMCJGO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE23B40)
#define NCPLNIMCJGO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FE23B00)
#define NCPLNIMCJGO_MKBLEILBPHI_OFFSET UNITYSDK_OFFSET(0x1FE236C0)
#define NCPLNIMCJGO_PAECFIDAADN_OFFSET UNITYSDK_OFFSET(0x1FE236A0)
#define NCPLNIMCJGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FE235B0)
#define NCPLNIMCJGO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE238F0)
#define NCPLNIMCJGO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FE23950)

inline static constexpr unsigned int NCPLNIMCJGO_TypeDefinitionIndex = 29989;

	class NCPLNIMCJGO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FPDLMAOANJP; // 0x18
		::System::Boolean CDFDONPAJCP; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::NCPLNIMCJGO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NCPLNIMCJGO*>**)UnitySDK::FromName("", "NCPLNIMCJGO")->GetStaticField(0x685E0);
		}

		// static const ::System::Object ILCCJGHKOOH; // 0x0
		// static const ::System::Object HBGMNBBBJDO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPLNIMCJGO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NCPLNIMCJGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCPLNIMCJGO*))((::PBYTE)hIl2Cpp + NCPLNIMCJGO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCPLNIMCJGO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NCPLNIMCJGO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NCPLNIMCJGO*>*(*)())((::PBYTE)hIl2Cpp + NCPLNIMCJGO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPLNIMCJGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NCPLNIMCJGO* Clone()
		{
			return ((::NCPLNIMCJGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPLNIMCJGO_CLONE_OFFSET))(this);
		}

		::System::UInt32 BIADEKOAHLF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPLNIMCJGO_BIADEKOAHLF_OFFSET))(this);
		}

		::System::Void PAECFIDAADN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NCPLNIMCJGO_PAECFIDAADN_OFFSET))(this, a1);
		}

		::System::Boolean LDKMIKEMHFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPLNIMCJGO_LDKMIKEMHFO_OFFSET))(this);
		}

		::System::Void MKBLEILBPHI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NCPLNIMCJGO_MKBLEILBPHI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCPLNIMCJGO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NCPLNIMCJGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NCPLNIMCJGO*))((::PBYTE)hIl2Cpp + NCPLNIMCJGO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPLNIMCJGO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPLNIMCJGO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NCPLNIMCJGO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPLNIMCJGO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NCPLNIMCJGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCPLNIMCJGO*))((::PBYTE)hIl2Cpp + NCPLNIMCJGO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NCPLNIMCJGO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
