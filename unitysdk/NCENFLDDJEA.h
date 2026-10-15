#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCENFLDDJEA;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NCENFLDDJEA_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1EAAB100)
#define NCENFLDDJEA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAAB5A0)
#define NCENFLDDJEA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAAB890)
#define NCENFLDDJEA_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAAB060)
#define NCENFLDDJEA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAAAFF0)
#define NCENFLDDJEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAAAFE0)
#define NCENFLDDJEA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAAB2A0)
#define NCENFLDDJEA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAAB120)
#define NCENFLDDJEA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EAAB0F0)
#define NCENFLDDJEA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAAB420)
#define NCENFLDDJEA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAAAFA0)
#define NCENFLDDJEA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAAB6F0)
#define NCENFLDDJEA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAAB670)
#define NCENFLDDJEA_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1EAAB110)
#define NCENFLDDJEA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EAAB0E0)
#define NCENFLDDJEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAAAFD0)
#define NCENFLDDJEA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAAB460)
#define NCENFLDDJEA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAAB4C0)

inline static constexpr unsigned int NCENFLDDJEA_TypeDefinitionIndex = 28441;

	class NCENFLDDJEA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NNPGLCGNICI* LKDEFKKLEDJ; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NCENFLDDJEA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NCENFLDDJEA*>**)UnitySDK::FromName("", "NCENFLDDJEA")->GetStaticField(0x5E690);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HNBHJOFPFLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCENFLDDJEA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NCENFLDDJEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCENFLDDJEA*))((::PBYTE)hIl2Cpp + NCENFLDDJEA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCENFLDDJEA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NCENFLDDJEA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NCENFLDDJEA*>*(*)())((::PBYTE)hIl2Cpp + NCENFLDDJEA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCENFLDDJEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NCENFLDDJEA* Clone()
		{
			return ((::NCENFLDDJEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCENFLDDJEA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCENFLDDJEA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NCENFLDDJEA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::NNPGLCGNICI* BLBBMAGLFDL()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCENFLDDJEA_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + NCENFLDDJEA_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCENFLDDJEA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NCENFLDDJEA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NCENFLDDJEA*))((::PBYTE)hIl2Cpp + NCENFLDDJEA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCENFLDDJEA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCENFLDDJEA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NCENFLDDJEA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCENFLDDJEA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NCENFLDDJEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCENFLDDJEA*))((::PBYTE)hIl2Cpp + NCENFLDDJEA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NCENFLDDJEA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
