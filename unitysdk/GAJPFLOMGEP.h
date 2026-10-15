#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAJPFLOMGEP;
class MOOKMKEKMKC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GAJPFLOMGEP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E41F620)
#define GAJPFLOMGEP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E41F870)
#define GAJPFLOMGEP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E41F000)
#define GAJPFLOMGEP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E41EF90)
#define GAJPFLOMGEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E41EF80)
#define GAJPFLOMGEP_DKMOIFPOOMM_OFFSET UNITYSDK_OFFSET(0x1E41F090)
#define GAJPFLOMGEP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E41F210)
#define GAJPFLOMGEP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E41F0A0)
#define GAJPFLOMGEP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E41F4E0)
#define GAJPFLOMGEP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E41EF40)
#define GAJPFLOMGEP_JKAKKOGIJAM_OFFSET UNITYSDK_OFFSET(0x1E41F080)
#define GAJPFLOMGEP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E41F6F0)
#define GAJPFLOMGEP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E41F680)
#define GAJPFLOMGEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E41EF70)
#define GAJPFLOMGEP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E41F530)
#define GAJPFLOMGEP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E41F590)

inline static constexpr unsigned int GAJPFLOMGEP_TypeDefinitionIndex = 27481;

	class GAJPFLOMGEP : public ::System::Object
	{
	public:
		::MOOKMKEKMKC* AGKHDKNJNLD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GAJPFLOMGEP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GAJPFLOMGEP*>**)UnitySDK::FromName("", "GAJPFLOMGEP")->GetStaticField(0xB670);
		}

		// static const ::System::Object KOOJBJFMGCI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJPFLOMGEP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GAJPFLOMGEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAJPFLOMGEP*))((::PBYTE)hIl2Cpp + GAJPFLOMGEP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAJPFLOMGEP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GAJPFLOMGEP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GAJPFLOMGEP*>*(*)())((::PBYTE)hIl2Cpp + GAJPFLOMGEP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJPFLOMGEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GAJPFLOMGEP* Clone()
		{
			return ((::GAJPFLOMGEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJPFLOMGEP_CLONE_OFFSET))(this);
		}

		::MOOKMKEKMKC* JKAKKOGIJAM()
		{
			return ((::MOOKMKEKMKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJPFLOMGEP_JKAKKOGIJAM_OFFSET))(this);
		}

		::System::Void DKMOIFPOOMM(::MOOKMKEKMKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOOKMKEKMKC*))((::PBYTE)hIl2Cpp + GAJPFLOMGEP_DKMOIFPOOMM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GAJPFLOMGEP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GAJPFLOMGEP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GAJPFLOMGEP*))((::PBYTE)hIl2Cpp + GAJPFLOMGEP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJPFLOMGEP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJPFLOMGEP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GAJPFLOMGEP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJPFLOMGEP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GAJPFLOMGEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAJPFLOMGEP*))((::PBYTE)hIl2Cpp + GAJPFLOMGEP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GAJPFLOMGEP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
