#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLAFIBPGBKK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PLAFIBPGBKK_AABABGIBNAC_OFFSET UNITYSDK_OFFSET(0x1DF9BBF0)
#define PLAFIBPGBKK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF9BF50)
#define PLAFIBPGBKK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF9C220)
#define PLAFIBPGBKK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF9BBA0)
#define PLAFIBPGBKK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF9BB70)
#define PLAFIBPGBKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF9BB60)
#define PLAFIBPGBKK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF9BD10)
#define PLAFIBPGBKK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF9BC30)
#define PLAFIBPGBKK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF9BDE0)
#define PLAFIBPGBKK_IEGCGBGEJMA_OFFSET UNITYSDK_OFFSET(0x1DF9BC20)
#define PLAFIBPGBKK_JBMPLANBNBK_OFFSET UNITYSDK_OFFSET(0x1DF9BC00)
#define PLAFIBPGBKK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF9BB20)
#define PLAFIBPGBKK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF9C0A0)
#define PLAFIBPGBKK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF9C060)
#define PLAFIBPGBKK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF9BB50)
#define PLAFIBPGBKK_PMBLNJLGBHE_OFFSET UNITYSDK_OFFSET(0x1DF9BC10)
#define PLAFIBPGBKK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF9BE10)
#define PLAFIBPGBKK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF9BE70)

inline static constexpr unsigned int PLAFIBPGBKK_TypeDefinitionIndex = 26111;

	class PLAFIBPGBKK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EADHPLHIAAD; // 0x18
		::System::UInt32 CMCCOIIMHMC; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PLAFIBPGBKK")->GetStaticField(0x4B330);
		}

		// static const ::System::Object LOLPPJLDEGO; // 0x0
		// static const ::System::Object NLAPNDADCIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAFIBPGBKK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PLAFIBPGBKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLAFIBPGBKK*))((::PBYTE)hIl2Cpp + PLAFIBPGBKK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLAFIBPGBKK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PLAFIBPGBKK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAFIBPGBKK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PLAFIBPGBKK* Clone()
		{
			return ((::PLAFIBPGBKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAFIBPGBKK_CLONE_OFFSET))(this);
		}

		::System::UInt32 AABABGIBNAC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAFIBPGBKK_AABABGIBNAC_OFFSET))(this);
		}

		::System::Void JBMPLANBNBK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLAFIBPGBKK_JBMPLANBNBK_OFFSET))(this, a1);
		}

		::System::UInt32 PMBLNJLGBHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAFIBPGBKK_PMBLNJLGBHE_OFFSET))(this);
		}

		::System::Void IEGCGBGEJMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLAFIBPGBKK_IEGCGBGEJMA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PLAFIBPGBKK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PLAFIBPGBKK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PLAFIBPGBKK*))((::PBYTE)hIl2Cpp + PLAFIBPGBKK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAFIBPGBKK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAFIBPGBKK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PLAFIBPGBKK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAFIBPGBKK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PLAFIBPGBKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLAFIBPGBKK*))((::PBYTE)hIl2Cpp + PLAFIBPGBKK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PLAFIBPGBKK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
