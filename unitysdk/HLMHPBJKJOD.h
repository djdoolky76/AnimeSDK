#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLMHPBJKJOD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HLMHPBJKJOD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5C1D10)
#define HLMHPBJKJOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C1FE0)
#define HLMHPBJKJOD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5C1960)
#define HLMHPBJKJOD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5C1930)
#define HLMHPBJKJOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C1920)
#define HLMHPBJKJOD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5C1AD0)
#define HLMHPBJKJOD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5C19F0)
#define HLMHPBJKJOD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E5C19E0)
#define HLMHPBJKJOD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5C1BA0)
#define HLMHPBJKJOD_IGHHFLHPCDN_OFFSET UNITYSDK_OFFSET(0x1E5C19C0)
#define HLMHPBJKJOD_JGKCDIFEMPL_OFFSET UNITYSDK_OFFSET(0x1E5C19B0)
#define HLMHPBJKJOD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5C18E0)
#define HLMHPBJKJOD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5C1E60)
#define HLMHPBJKJOD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5C1E20)
#define HLMHPBJKJOD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E5C19D0)
#define HLMHPBJKJOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5C1910)
#define HLMHPBJKJOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5C1BD0)
#define HLMHPBJKJOD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5C1C30)

inline static constexpr unsigned int HLMHPBJKJOD_TypeDefinitionIndex = 26738;

	class HLMHPBJKJOD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 AJPNGCJCMEB; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HLMHPBJKJOD")->GetStaticField(0x485F0);
		}

		// static const ::System::Object FBCFBAPNOGL; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMHPBJKJOD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HLMHPBJKJOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLMHPBJKJOD*))((::PBYTE)hIl2Cpp + HLMHPBJKJOD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLMHPBJKJOD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HLMHPBJKJOD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMHPBJKJOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HLMHPBJKJOD* Clone()
		{
			return ((::HLMHPBJKJOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMHPBJKJOD_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGKCDIFEMPL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMHPBJKJOD_JGKCDIFEMPL_OFFSET))(this);
		}

		::System::Void IGHHFLHPCDN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLMHPBJKJOD_IGHHFLHPCDN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMHPBJKJOD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLMHPBJKJOD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLMHPBJKJOD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HLMHPBJKJOD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HLMHPBJKJOD*))((::PBYTE)hIl2Cpp + HLMHPBJKJOD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMHPBJKJOD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMHPBJKJOD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HLMHPBJKJOD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMHPBJKJOD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HLMHPBJKJOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLMHPBJKJOD*))((::PBYTE)hIl2Cpp + HLMHPBJKJOD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HLMHPBJKJOD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
