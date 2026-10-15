#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFKAOMCJIKK;
class OICAPCABFNK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OICAPCABFNK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE68F70)
#define OICAPCABFNK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE691F0)
#define OICAPCABFNK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE68940)
#define OICAPCABFNK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE688F0)
#define OICAPCABFNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE688E0)
#define OICAPCABFNK_DBBLODPCIHA_OFFSET UNITYSDK_OFFSET(0x1DE689A0)
#define OICAPCABFNK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE68B30)
#define OICAPCABFNK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE689C0)
#define OICAPCABFNK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE68E00)
#define OICAPCABFNK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE688A0)
#define OICAPCABFNK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE69060)
#define OICAPCABFNK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE68FD0)
#define OICAPCABFNK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE688D0)
#define OICAPCABFNK_PKLEFEJCHPG_OFFSET UNITYSDK_OFFSET(0x1DE689B0)
#define OICAPCABFNK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE68E80)
#define OICAPCABFNK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE68EE0)

inline static constexpr unsigned int OICAPCABFNK_TypeDefinitionIndex = 28357;

	class OICAPCABFNK : public ::System::Object
	{
	public:
		::JFKAOMCJIKK* CMEPPEIDMOO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OICAPCABFNK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OICAPCABFNK*>**)UnitySDK::FromName("", "OICAPCABFNK")->GetStaticField(0x1BA50);
		}

		// static const ::System::Object CELPMCOEMLK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OICAPCABFNK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OICAPCABFNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OICAPCABFNK*))((::PBYTE)hIl2Cpp + OICAPCABFNK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OICAPCABFNK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OICAPCABFNK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OICAPCABFNK*>*(*)())((::PBYTE)hIl2Cpp + OICAPCABFNK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OICAPCABFNK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OICAPCABFNK* Clone()
		{
			return ((::OICAPCABFNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OICAPCABFNK_CLONE_OFFSET))(this);
		}

		::JFKAOMCJIKK* DBBLODPCIHA()
		{
			return ((::JFKAOMCJIKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OICAPCABFNK_DBBLODPCIHA_OFFSET))(this);
		}

		::System::Void PKLEFEJCHPG(::JFKAOMCJIKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFKAOMCJIKK*))((::PBYTE)hIl2Cpp + OICAPCABFNK_PKLEFEJCHPG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OICAPCABFNK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OICAPCABFNK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OICAPCABFNK*))((::PBYTE)hIl2Cpp + OICAPCABFNK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OICAPCABFNK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OICAPCABFNK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OICAPCABFNK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OICAPCABFNK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OICAPCABFNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OICAPCABFNK*))((::PBYTE)hIl2Cpp + OICAPCABFNK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OICAPCABFNK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
