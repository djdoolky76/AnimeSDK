#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHHKJGJNKIK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GHHKJGJNKIK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E489960)
#define GHHKJGJNKIK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E489C30)
#define GHHKJGJNKIK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4895B0)
#define GHHKJGJNKIK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E489580)
#define GHHKJGJNKIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E489570)
#define GHHKJGJNKIK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E489720)
#define GHHKJGJNKIK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E489640)
#define GHHKJGJNKIK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E489630)
#define GHHKJGJNKIK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4897F0)
#define GHHKJGJNKIK_IEGCGBGEJMA_OFFSET UNITYSDK_OFFSET(0x1E489610)
#define GHHKJGJNKIK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E489530)
#define GHHKJGJNKIK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E489AB0)
#define GHHKJGJNKIK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E489A70)
#define GHHKJGJNKIK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E489620)
#define GHHKJGJNKIK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E489560)
#define GHHKJGJNKIK_PMBLNJLGBHE_OFFSET UNITYSDK_OFFSET(0x1E489600)
#define GHHKJGJNKIK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E489820)
#define GHHKJGJNKIK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E489880)

inline static constexpr unsigned int GHHKJGJNKIK_TypeDefinitionIndex = 30386;

	class GHHKJGJNKIK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 CMCCOIIMHMC; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GHHKJGJNKIK")->GetStaticField(0x17000);
		}

		// static const ::System::Object NLAPNDADCIN; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHKJGJNKIK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GHHKJGJNKIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHHKJGJNKIK*))((::PBYTE)hIl2Cpp + GHHKJGJNKIK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHHKJGJNKIK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GHHKJGJNKIK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHKJGJNKIK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GHHKJGJNKIK* Clone()
		{
			return ((::GHHKJGJNKIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHKJGJNKIK_CLONE_OFFSET))(this);
		}

		::System::UInt32 PMBLNJLGBHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHKJGJNKIK_PMBLNJLGBHE_OFFSET))(this);
		}

		::System::Void IEGCGBGEJMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHHKJGJNKIK_IEGCGBGEJMA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHKJGJNKIK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHHKJGJNKIK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHHKJGJNKIK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GHHKJGJNKIK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHHKJGJNKIK*))((::PBYTE)hIl2Cpp + GHHKJGJNKIK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHKJGJNKIK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHKJGJNKIK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GHHKJGJNKIK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHKJGJNKIK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GHHKJGJNKIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHHKJGJNKIK*))((::PBYTE)hIl2Cpp + GHHKJGJNKIK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GHHKJGJNKIK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
