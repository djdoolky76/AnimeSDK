#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKJODHMMCAL;
class JEGMGPOFHGG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AKJODHMMCAL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2063EC90)
#define AKJODHMMCAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x2063EF30)
#define AKJODHMMCAL_CLONE_OFFSET UNITYSDK_OFFSET(0x2063E620)
#define AKJODHMMCAL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2063E5B0)
#define AKJODHMMCAL_CTOR_OFFSET UNITYSDK_OFFSET(0x2063E5A0)
#define AKJODHMMCAL_DDGOALABGJE_OFFSET UNITYSDK_OFFSET(0x2063E6B0)
#define AKJODHMMCAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2063E830)
#define AKJODHMMCAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x2063E6C0)
#define AKJODHMMCAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2063EB00)
#define AKJODHMMCAL_IMANPICJAHC_OFFSET UNITYSDK_OFFSET(0x2063E6A0)
#define AKJODHMMCAL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2063E560)
#define AKJODHMMCAL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2063ED80)
#define AKJODHMMCAL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2063ECF0)
#define AKJODHMMCAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2063E590)
#define AKJODHMMCAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2063EBA0)
#define AKJODHMMCAL_WRITETO_OFFSET UNITYSDK_OFFSET(0x2063EC00)

inline static constexpr unsigned int AKJODHMMCAL_TypeDefinitionIndex = 27035;

	class AKJODHMMCAL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JEGMGPOFHGG* OFPBAPDFGHJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AKJODHMMCAL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AKJODHMMCAL*>**)UnitySDK::FromName("", "AKJODHMMCAL")->GetStaticField(0x34030);
		}

		// static const ::System::Object EDEHHLINBGD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJODHMMCAL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AKJODHMMCAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKJODHMMCAL*))((::PBYTE)hIl2Cpp + AKJODHMMCAL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKJODHMMCAL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AKJODHMMCAL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AKJODHMMCAL*>*(*)())((::PBYTE)hIl2Cpp + AKJODHMMCAL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJODHMMCAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AKJODHMMCAL* Clone()
		{
			return ((::AKJODHMMCAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJODHMMCAL_CLONE_OFFSET))(this);
		}

		::JEGMGPOFHGG* IMANPICJAHC()
		{
			return ((::JEGMGPOFHGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJODHMMCAL_IMANPICJAHC_OFFSET))(this);
		}

		::System::Void DDGOALABGJE(::JEGMGPOFHGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEGMGPOFHGG*))((::PBYTE)hIl2Cpp + AKJODHMMCAL_DDGOALABGJE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AKJODHMMCAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AKJODHMMCAL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AKJODHMMCAL*))((::PBYTE)hIl2Cpp + AKJODHMMCAL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJODHMMCAL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJODHMMCAL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AKJODHMMCAL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJODHMMCAL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AKJODHMMCAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKJODHMMCAL*))((::PBYTE)hIl2Cpp + AKJODHMMCAL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AKJODHMMCAL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
