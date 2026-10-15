#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGNKDLAHAGH.h"
#include "unitysdk/KMJNPEMPNMC.h"
#include "unitysdk/System/Object.h"
class GMBMNFLMKPI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GMBMNFLMKPI_BHIFBOPCOEL_OFFSET UNITYSDK_OFFSET(0x1E4CA5F0)
#define GMBMNFLMKPI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4CA980)
#define GMBMNFLMKPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4CACD0)
#define GMBMNFLMKPI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4CA550)
#define GMBMNFLMKPI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4CA520)
#define GMBMNFLMKPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4CA510)
#define GMBMNFLMKPI_DGMGBEHMEKN_OFFSET UNITYSDK_OFFSET(0x1E4CA5E0)
#define GMBMNFLMKPI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4CA710)
#define GMBMNFLMKPI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4CA600)
#define GMBMNFLMKPI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4CA7E0)
#define GMBMNFLMKPI_HOEJBNACDJI_OFFSET UNITYSDK_OFFSET(0x1E4CA5C0)
#define GMBMNFLMKPI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4CA4A0)
#define GMBMNFLMKPI_KLIIOJMIELH_OFFSET UNITYSDK_OFFSET(0x1E4CA5D0)
#define GMBMNFLMKPI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4CAB50)
#define GMBMNFLMKPI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4CAB10)
#define GMBMNFLMKPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4CA500)
#define GMBMNFLMKPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4CA810)
#define GMBMNFLMKPI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4CA870)

inline static constexpr unsigned int GMBMNFLMKPI_TypeDefinitionIndex = 29131;

	class GMBMNFLMKPI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GGNKDLAHAGH NKCMCFNFCJE; // 0x18
		::KMJNPEMPNMC IEMPKONJADM; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::GMBMNFLMKPI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GMBMNFLMKPI*>**)UnitySDK::FromName("", "GMBMNFLMKPI")->GetStaticField(0x20880);
		}

		// static const ::System::Object IFONKOMKEOE; // 0x0
		// static const ::System::Object CNBBKOHGEIG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBMNFLMKPI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GMBMNFLMKPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMBMNFLMKPI*))((::PBYTE)hIl2Cpp + GMBMNFLMKPI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMBMNFLMKPI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GMBMNFLMKPI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GMBMNFLMKPI*>*(*)())((::PBYTE)hIl2Cpp + GMBMNFLMKPI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBMNFLMKPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GMBMNFLMKPI* Clone()
		{
			return ((::GMBMNFLMKPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBMNFLMKPI_CLONE_OFFSET))(this);
		}

		::GGNKDLAHAGH HOEJBNACDJI()
		{
			return ((::GGNKDLAHAGH(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBMNFLMKPI_HOEJBNACDJI_OFFSET))(this);
		}

		::System::Void KLIIOJMIELH(::GGNKDLAHAGH a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGNKDLAHAGH))((::PBYTE)hIl2Cpp + GMBMNFLMKPI_KLIIOJMIELH_OFFSET))(this, a1);
		}

		::KMJNPEMPNMC DGMGBEHMEKN()
		{
			return ((::KMJNPEMPNMC(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBMNFLMKPI_DGMGBEHMEKN_OFFSET))(this);
		}

		::System::Void BHIFBOPCOEL(::KMJNPEMPNMC a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMJNPEMPNMC))((::PBYTE)hIl2Cpp + GMBMNFLMKPI_BHIFBOPCOEL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GMBMNFLMKPI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GMBMNFLMKPI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GMBMNFLMKPI*))((::PBYTE)hIl2Cpp + GMBMNFLMKPI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBMNFLMKPI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBMNFLMKPI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GMBMNFLMKPI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBMNFLMKPI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GMBMNFLMKPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMBMNFLMKPI*))((::PBYTE)hIl2Cpp + GMBMNFLMKPI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GMBMNFLMKPI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
