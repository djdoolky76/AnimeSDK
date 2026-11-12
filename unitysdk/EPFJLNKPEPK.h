#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPFJLNKPEPK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EPFJLNKPEPK_BKHDBPHNNLH_OFFSET UNITYSDK_OFFSET(0x1F5EEE80)
#define EPFJLNKPEPK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F5EF1F0)
#define EPFJLNKPEPK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5EF510)
#define EPFJLNKPEPK_CLONE_OFFSET UNITYSDK_OFFSET(0x1F5EEE30)
#define EPFJLNKPEPK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F5EEDF0)
#define EPFJLNKPEPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5EEDE0)
#define EPFJLNKPEPK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F5EEFA0)
#define EPFJLNKPEPK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F5EEEC0)
#define EPFJLNKPEPK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F5EF070)
#define EPFJLNKPEPK_GIDJOFIIKAE_OFFSET UNITYSDK_OFFSET(0x1F5EEE90)
#define EPFJLNKPEPK_IEGCGBGEJMA_OFFSET UNITYSDK_OFFSET(0x1F5EEEB0)
#define EPFJLNKPEPK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F5EEDA0)
#define EPFJLNKPEPK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F5EF390)
#define EPFJLNKPEPK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F5EF350)
#define EPFJLNKPEPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F5EEDD0)
#define EPFJLNKPEPK_PMBLNJLGBHE_OFFSET UNITYSDK_OFFSET(0x1F5EEEA0)
#define EPFJLNKPEPK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F5EF0B0)
#define EPFJLNKPEPK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F5EF110)

inline static constexpr unsigned int EPFJLNKPEPK_TypeDefinitionIndex = 32420;

	class EPFJLNKPEPK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CMCCOIIMHMC; // 0x18
		::System::Byte _padding0[0x4];
		::System::UInt64 EMIEPBJAICO; // 0x20
		static ::Google::Protobuf::MessageParser_1<::EPFJLNKPEPK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EPFJLNKPEPK*>**)UnitySDK::FromName("", "EPFJLNKPEPK")->GetStaticField(0x1AF40);
		}

		// static const ::System::Object FMDKMAKPJOB; // 0x0
		// static const ::System::Object NLAPNDADCIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EPFJLNKPEPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPFJLNKPEPK*))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPFJLNKPEPK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EPFJLNKPEPK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EPFJLNKPEPK*>*(*)())((::PBYTE)hIl2Cpp + EPFJLNKPEPK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EPFJLNKPEPK* Clone()
		{
			return ((::EPFJLNKPEPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_CLONE_OFFSET))(this);
		}

		::System::UInt64 BKHDBPHNNLH()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_BKHDBPHNNLH_OFFSET))(this);
		}

		::System::Void GIDJOFIIKAE(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_GIDJOFIIKAE_OFFSET))(this, a1);
		}

		::System::UInt32 PMBLNJLGBHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_PMBLNJLGBHE_OFFSET))(this);
		}

		::System::Void IEGCGBGEJMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_IEGCGBGEJMA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EPFJLNKPEPK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EPFJLNKPEPK*))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EPFJLNKPEPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPFJLNKPEPK*))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
