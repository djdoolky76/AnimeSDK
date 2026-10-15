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

#define EPFJLNKPEPK_BKHDBPHNNLH_OFFSET UNITYSDK_OFFSET(0x1E2DC990)
#define EPFJLNKPEPK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2DCCE0)
#define EPFJLNKPEPK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2DD010)
#define EPFJLNKPEPK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2DC920)
#define EPFJLNKPEPK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2DC8E0)
#define EPFJLNKPEPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2DC8D0)
#define EPFJLNKPEPK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2DCA90)
#define EPFJLNKPEPK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2DC9B0)
#define EPFJLNKPEPK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2DCB60)
#define EPFJLNKPEPK_GIDJOFIIKAE_OFFSET UNITYSDK_OFFSET(0x1E2DC9A0)
#define EPFJLNKPEPK_IEGCGBGEJMA_OFFSET UNITYSDK_OFFSET(0x1E2DC980)
#define EPFJLNKPEPK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2DC890)
#define EPFJLNKPEPK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2DCE90)
#define EPFJLNKPEPK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2DCE50)
#define EPFJLNKPEPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2DC8C0)
#define EPFJLNKPEPK_PMBLNJLGBHE_OFFSET UNITYSDK_OFFSET(0x1E2DC970)
#define EPFJLNKPEPK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2DCBA0)
#define EPFJLNKPEPK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2DCC00)

inline static constexpr unsigned int EPFJLNKPEPK_TypeDefinitionIndex = 31507;

	class EPFJLNKPEPK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CMCCOIIMHMC; // 0x18
		::System::Byte _padding0[0x4];
		::System::UInt64 EMIEPBJAICO; // 0x20
		static ::Google::Protobuf::MessageParser_1<::EPFJLNKPEPK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EPFJLNKPEPK*>**)UnitySDK::FromName("", "EPFJLNKPEPK")->GetStaticField(0x1D780);
		}

		// static const ::System::Object NLAPNDADCIN; // 0x0
		// static const ::System::Object FMDKMAKPJOB; // 0x0
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

		::System::UInt32 PMBLNJLGBHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_PMBLNJLGBHE_OFFSET))(this);
		}

		::System::Void IEGCGBGEJMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_IEGCGBGEJMA_OFFSET))(this, a1);
		}

		::System::UInt64 BKHDBPHNNLH()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_BKHDBPHNNLH_OFFSET))(this);
		}

		::System::Void GIDJOFIIKAE(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_GIDJOFIIKAE_OFFSET))(this, a1);
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
