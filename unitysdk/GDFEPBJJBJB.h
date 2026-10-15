#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDFEPBJJBJB;
class PNCNGIAMLCA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GDFEPBJJBJB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E446C40)
#define GDFEPBJJBJB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E447080)
#define GDFEPBJJBJB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E446660)
#define GDFEPBJJBJB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4465F0)
#define GDFEPBJJBJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4465E0)
#define GDFEPBJJBJB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4468D0)
#define GDFEPBJJBJB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E446740)
#define GDFEPBJJBJB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4466F0)
#define GDFEPBJJBJB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E446A60)
#define GDFEPBJJBJB_IEGCGBGEJMA_OFFSET UNITYSDK_OFFSET(0x1E446710)
#define GDFEPBJJBJB_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0x1E446720)
#define GDFEPBJJBJB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4465A0)
#define GDFEPBJJBJB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E446E60)
#define GDFEPBJJBJB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E446D80)
#define GDFEPBJJBJB_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0x1E446730)
#define GDFEPBJJBJB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4466E0)
#define GDFEPBJJBJB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4465D0)
#define GDFEPBJJBJB_PMBLNJLGBHE_OFFSET UNITYSDK_OFFSET(0x1E446700)
#define GDFEPBJJBJB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E446AA0)
#define GDFEPBJJBJB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E446B00)

inline static constexpr unsigned int GDFEPBJJBJB_TypeDefinitionIndex = 27657;

	class GDFEPBJJBJB : public ::System::Object
	{
	public:
		::PNCNGIAMLCA* MNJNMPKLFAI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 CMCCOIIMHMC; // 0x24
		static ::Google::Protobuf::MessageParser_1<::GDFEPBJJBJB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GDFEPBJJBJB*>**)UnitySDK::FromName("", "GDFEPBJJBJB")->GetStaticField(0x102D0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object NLAPNDADCIN; // 0x0
		// static const ::System::Object KBMGGGHELJP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFEPBJJBJB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GDFEPBJJBJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDFEPBJJBJB*))((::PBYTE)hIl2Cpp + GDFEPBJJBJB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDFEPBJJBJB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GDFEPBJJBJB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GDFEPBJJBJB*>*(*)())((::PBYTE)hIl2Cpp + GDFEPBJJBJB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFEPBJJBJB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GDFEPBJJBJB* Clone()
		{
			return ((::GDFEPBJJBJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFEPBJJBJB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFEPBJJBJB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDFEPBJJBJB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 PMBLNJLGBHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFEPBJJBJB_PMBLNJLGBHE_OFFSET))(this);
		}

		::System::Void IEGCGBGEJMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDFEPBJJBJB_IEGCGBGEJMA_OFFSET))(this, a1);
		}

		::PNCNGIAMLCA* JIFPIGBJFEH()
		{
			return ((::PNCNGIAMLCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFEPBJJBJB_JIFPIGBJFEH_OFFSET))(this);
		}

		::System::Void MIILIPJBOKO(::PNCNGIAMLCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNCNGIAMLCA*))((::PBYTE)hIl2Cpp + GDFEPBJJBJB_MIILIPJBOKO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GDFEPBJJBJB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GDFEPBJJBJB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GDFEPBJJBJB*))((::PBYTE)hIl2Cpp + GDFEPBJJBJB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFEPBJJBJB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFEPBJJBJB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GDFEPBJJBJB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFEPBJJBJB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GDFEPBJJBJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDFEPBJJBJB*))((::PBYTE)hIl2Cpp + GDFEPBJJBJB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GDFEPBJJBJB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
