#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIDPMKIOJGK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OIDPMKIOJGK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE6AE40)
#define OIDPMKIOJGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE6B060)
#define OIDPMKIOJGK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE6AA90)
#define OIDPMKIOJGK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE6AA60)
#define OIDPMKIOJGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE6AA50)
#define OIDPMKIOJGK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE6ABC0)
#define OIDPMKIOJGK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE6AAF0)
#define OIDPMKIOJGK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE6AD30)
#define OIDPMKIOJGK_JJCBOFBONPO_OFFSET UNITYSDK_OFFSET(0x1DE6AAE0)
#define OIDPMKIOJGK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE6AA10)
#define OIDPMKIOJGK_LCNGCANAPPJ_OFFSET UNITYSDK_OFFSET(0x1DE6AAD0)
#define OIDPMKIOJGK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE6AF00)
#define OIDPMKIOJGK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE6AED0)
#define OIDPMKIOJGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE6AA40)
#define OIDPMKIOJGK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE6AD60)
#define OIDPMKIOJGK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE6ADC0)

inline static constexpr unsigned int OIDPMKIOJGK_TypeDefinitionIndex = 31085;

	class OIDPMKIOJGK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LMBGHCAGODP; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OIDPMKIOJGK")->GetStaticField(0x1BD70);
		}

		// static const ::System::Object AGMNNNMDIPG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDPMKIOJGK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OIDPMKIOJGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIDPMKIOJGK*))((::PBYTE)hIl2Cpp + OIDPMKIOJGK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIDPMKIOJGK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OIDPMKIOJGK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDPMKIOJGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OIDPMKIOJGK* Clone()
		{
			return ((::OIDPMKIOJGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDPMKIOJGK_CLONE_OFFSET))(this);
		}

		::System::UInt32 LCNGCANAPPJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDPMKIOJGK_LCNGCANAPPJ_OFFSET))(this);
		}

		::System::Void JJCBOFBONPO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIDPMKIOJGK_JJCBOFBONPO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIDPMKIOJGK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OIDPMKIOJGK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OIDPMKIOJGK*))((::PBYTE)hIl2Cpp + OIDPMKIOJGK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDPMKIOJGK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDPMKIOJGK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OIDPMKIOJGK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDPMKIOJGK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OIDPMKIOJGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIDPMKIOJGK*))((::PBYTE)hIl2Cpp + OIDPMKIOJGK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OIDPMKIOJGK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
