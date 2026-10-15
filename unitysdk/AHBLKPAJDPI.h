#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHBLKPAJDPI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AHBLKPAJDPI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E26C4A0)
#define AHBLKPAJDPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E26C820)
#define AHBLKPAJDPI_CIIMIAOPJLM_OFFSET UNITYSDK_OFFSET(0x1E26C180)
#define AHBLKPAJDPI_CJHDDIJGMCN_OFFSET UNITYSDK_OFFSET(0x1E26C140)
#define AHBLKPAJDPI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E26C0B0)
#define AHBLKPAJDPI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E26C070)
#define AHBLKPAJDPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E26C060)
#define AHBLKPAJDPI_EOCPEBJNPGB_OFFSET UNITYSDK_OFFSET(0x1E26C130)
#define AHBLKPAJDPI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E26C210)
#define AHBLKPAJDPI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E26C190)
#define AHBLKPAJDPI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E26C2E0)
#define AHBLKPAJDPI_GLBKGCMKHCH_OFFSET UNITYSDK_OFFSET(0x1E26C160)
#define AHBLKPAJDPI_GLHEAGHHJAK_OFFSET UNITYSDK_OFFSET(0x1E26C170)
#define AHBLKPAJDPI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E26BFF0)
#define AHBLKPAJDPI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E26C680)
#define AHBLKPAJDPI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E26C630)
#define AHBLKPAJDPI_MKAMENLFNPH_OFFSET UNITYSDK_OFFSET(0x1E26C150)
#define AHBLKPAJDPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E26C050)
#define AHBLKPAJDPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E26C310)
#define AHBLKPAJDPI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E26C370)

inline static constexpr unsigned int AHBLKPAJDPI_TypeDefinitionIndex = 26608;

	class AHBLKPAJDPI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ODJKHPHFFFJ; // 0x18
		::System::UInt32 KIPJPMDOMPF; // 0x1C
		::System::UInt32 ALIKPNPNGGC; // 0x20
		static ::Google::Protobuf::MessageParser_1<::AHBLKPAJDPI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AHBLKPAJDPI*>**)UnitySDK::FromName("", "AHBLKPAJDPI")->GetStaticField(0x313A0);
		}

		// static const ::System::Object EPBPHGNEEKM; // 0x0
		// static const ::System::Object CLIGPGLLJID; // 0x0
		// static const ::System::Object DGACGNCICEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHBLKPAJDPI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AHBLKPAJDPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHBLKPAJDPI*))((::PBYTE)hIl2Cpp + AHBLKPAJDPI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHBLKPAJDPI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AHBLKPAJDPI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AHBLKPAJDPI*>*(*)())((::PBYTE)hIl2Cpp + AHBLKPAJDPI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHBLKPAJDPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AHBLKPAJDPI* Clone()
		{
			return ((::AHBLKPAJDPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHBLKPAJDPI_CLONE_OFFSET))(this);
		}

		::System::UInt32 EOCPEBJNPGB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHBLKPAJDPI_EOCPEBJNPGB_OFFSET))(this);
		}

		::System::Void CJHDDIJGMCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHBLKPAJDPI_CJHDDIJGMCN_OFFSET))(this, a1);
		}

		::System::UInt32 MKAMENLFNPH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHBLKPAJDPI_MKAMENLFNPH_OFFSET))(this);
		}

		::System::Void GLBKGCMKHCH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHBLKPAJDPI_GLBKGCMKHCH_OFFSET))(this, a1);
		}

		::System::UInt32 GLHEAGHHJAK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHBLKPAJDPI_GLHEAGHHJAK_OFFSET))(this);
		}

		::System::Void CIIMIAOPJLM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHBLKPAJDPI_CIIMIAOPJLM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AHBLKPAJDPI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AHBLKPAJDPI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AHBLKPAJDPI*))((::PBYTE)hIl2Cpp + AHBLKPAJDPI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHBLKPAJDPI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHBLKPAJDPI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AHBLKPAJDPI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHBLKPAJDPI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AHBLKPAJDPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHBLKPAJDPI*))((::PBYTE)hIl2Cpp + AHBLKPAJDPI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AHBLKPAJDPI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
