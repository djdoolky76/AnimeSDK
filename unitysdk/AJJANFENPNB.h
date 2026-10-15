#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJJANFENPNB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AJJANFENPNB_AFMLIDOECPL_OFFSET UNITYSDK_OFFSET(0x1E394E10)
#define AJJANFENPNB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E395270)
#define AJJANFENPNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E395550)
#define AJJANFENPNB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E394D90)
#define AJJANFENPNB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E394D50)
#define AJJANFENPNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E394D40)
#define AJJANFENPNB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E394F70)
#define AJJANFENPNB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E394E70)
#define AJJANFENPNB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E394E00)
#define AJJANFENPNB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E395070)
#define AJJANFENPNB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E394D00)
#define AJJANFENPNB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3953A0)
#define AJJANFENPNB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E395350)
#define AJJANFENPNB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E394DF0)
#define AJJANFENPNB_OOOGCOHKDPI_OFFSET UNITYSDK_OFFSET(0x1E394E20)
#define AJJANFENPNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E394D30)
#define AJJANFENPNB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E395120)
#define AJJANFENPNB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E395180)

inline static constexpr unsigned int AJJANFENPNB_TypeDefinitionIndex = 32028;

	class AJJANFENPNB : public ::System::Object
	{
	public:
		::System::String* HKPJEKGBKGH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::AJJANFENPNB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AJJANFENPNB*>**)UnitySDK::FromName("", "AJJANFENPNB")->GetStaticField(0x3DBA0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BHHANFONJPK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJANFENPNB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AJJANFENPNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJJANFENPNB*))((::PBYTE)hIl2Cpp + AJJANFENPNB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJJANFENPNB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AJJANFENPNB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AJJANFENPNB*>*(*)())((::PBYTE)hIl2Cpp + AJJANFENPNB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJANFENPNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AJJANFENPNB* Clone()
		{
			return ((::AJJANFENPNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJANFENPNB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJANFENPNB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJJANFENPNB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::String* AFMLIDOECPL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJANFENPNB_AFMLIDOECPL_OFFSET))(this);
		}

		::System::Void OOOGCOHKDPI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AJJANFENPNB_OOOGCOHKDPI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AJJANFENPNB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AJJANFENPNB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJJANFENPNB*))((::PBYTE)hIl2Cpp + AJJANFENPNB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJANFENPNB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJANFENPNB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AJJANFENPNB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJANFENPNB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AJJANFENPNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJJANFENPNB*))((::PBYTE)hIl2Cpp + AJJANFENPNB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AJJANFENPNB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
