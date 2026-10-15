#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGGKLPDFGDC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NGGKLPDFGDC_BMEENJGEHKP_OFFSET UNITYSDK_OFFSET(0x1EB0DC30)
#define NGGKLPDFGDC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB0E050)
#define NGGKLPDFGDC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB0E370)
#define NGGKLPDFGDC_CGFNEDCOOMD_OFFSET UNITYSDK_OFFSET(0x1EB0DC20)
#define NGGKLPDFGDC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB0DBD0)
#define NGGKLPDFGDC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB0DB90)
#define NGGKLPDFGDC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB0DB80)
#define NGGKLPDFGDC_EBJHNOFJBCH_OFFSET UNITYSDK_OFFSET(0x1EB0DC60)
#define NGGKLPDFGDC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB0DD70)
#define NGGKLPDFGDC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB0DC80)
#define NGGKLPDFGDC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB0DC50)
#define NGGKLPDFGDC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB0DE50)
#define NGGKLPDFGDC_IPONDLGEAMG_OFFSET UNITYSDK_OFFSET(0x1EB0DC70)
#define NGGKLPDFGDC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB0DB40)
#define NGGKLPDFGDC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB0E1C0)
#define NGGKLPDFGDC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB0E170)
#define NGGKLPDFGDC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB0DC40)
#define NGGKLPDFGDC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB0DB70)
#define NGGKLPDFGDC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB0DE80)
#define NGGKLPDFGDC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB0DEE0)

inline static constexpr unsigned int NGGKLPDFGDC_TypeDefinitionIndex = 27017;

	class NGGKLPDFGDC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KJHFIADNIFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		::System::Boolean NLNIOMNACDB; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NGGKLPDFGDC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NGGKLPDFGDC*>**)UnitySDK::FromName("", "NGGKLPDFGDC")->GetStaticField(0x5F330);
		}

		// static const ::System::Object IGFDBNNGBBN; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JKJHNGACNOA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGGKLPDFGDC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NGGKLPDFGDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGGKLPDFGDC*))((::PBYTE)hIl2Cpp + NGGKLPDFGDC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGGKLPDFGDC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NGGKLPDFGDC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NGGKLPDFGDC*>*(*)())((::PBYTE)hIl2Cpp + NGGKLPDFGDC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGGKLPDFGDC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NGGKLPDFGDC* Clone()
		{
			return ((::NGGKLPDFGDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGGKLPDFGDC_CLONE_OFFSET))(this);
		}

		::System::Boolean CGFNEDCOOMD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGGKLPDFGDC_CGFNEDCOOMD_OFFSET))(this);
		}

		::System::Void BMEENJGEHKP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NGGKLPDFGDC_BMEENJGEHKP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGGKLPDFGDC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGGKLPDFGDC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 EBJHNOFJBCH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGGKLPDFGDC_EBJHNOFJBCH_OFFSET))(this);
		}

		::System::Void IPONDLGEAMG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGGKLPDFGDC_IPONDLGEAMG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGGKLPDFGDC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NGGKLPDFGDC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGGKLPDFGDC*))((::PBYTE)hIl2Cpp + NGGKLPDFGDC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGGKLPDFGDC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGGKLPDFGDC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NGGKLPDFGDC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGGKLPDFGDC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NGGKLPDFGDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGGKLPDFGDC*))((::PBYTE)hIl2Cpp + NGGKLPDFGDC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NGGKLPDFGDC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
