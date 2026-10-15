#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IALCLGBDMBL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IALCLGBDMBL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E608960)
#define IALCLGBDMBL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E608C30)
#define IALCLGBDMBL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6085B0)
#define IALCLGBDMBL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E608580)
#define IALCLGBDMBL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E608570)
#define IALCLGBDMBL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E608720)
#define IALCLGBDMBL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E608640)
#define IALCLGBDMBL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E608630)
#define IALCLGBDMBL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6087F0)
#define IALCLGBDMBL_IEGCGBGEJMA_OFFSET UNITYSDK_OFFSET(0x1E608610)
#define IALCLGBDMBL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E608530)
#define IALCLGBDMBL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E608AB0)
#define IALCLGBDMBL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E608A70)
#define IALCLGBDMBL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E608620)
#define IALCLGBDMBL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E608560)
#define IALCLGBDMBL_PMBLNJLGBHE_OFFSET UNITYSDK_OFFSET(0x1E608600)
#define IALCLGBDMBL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E608820)
#define IALCLGBDMBL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E608880)

inline static constexpr unsigned int IALCLGBDMBL_TypeDefinitionIndex = 27661;

	class IALCLGBDMBL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CMCCOIIMHMC; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::IALCLGBDMBL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IALCLGBDMBL*>**)UnitySDK::FromName("", "IALCLGBDMBL")->GetStaticField(0x3FA70);
		}

		// static const ::System::Object NLAPNDADCIN; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALCLGBDMBL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IALCLGBDMBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IALCLGBDMBL*))((::PBYTE)hIl2Cpp + IALCLGBDMBL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IALCLGBDMBL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IALCLGBDMBL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IALCLGBDMBL*>*(*)())((::PBYTE)hIl2Cpp + IALCLGBDMBL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALCLGBDMBL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IALCLGBDMBL* Clone()
		{
			return ((::IALCLGBDMBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALCLGBDMBL_CLONE_OFFSET))(this);
		}

		::System::UInt32 PMBLNJLGBHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IALCLGBDMBL_PMBLNJLGBHE_OFFSET))(this);
		}

		::System::Void IEGCGBGEJMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IALCLGBDMBL_IEGCGBGEJMA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IALCLGBDMBL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IALCLGBDMBL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IALCLGBDMBL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IALCLGBDMBL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IALCLGBDMBL*))((::PBYTE)hIl2Cpp + IALCLGBDMBL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IALCLGBDMBL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALCLGBDMBL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IALCLGBDMBL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IALCLGBDMBL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IALCLGBDMBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IALCLGBDMBL*))((::PBYTE)hIl2Cpp + IALCLGBDMBL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IALCLGBDMBL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
