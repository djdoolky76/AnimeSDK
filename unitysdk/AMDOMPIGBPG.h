#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMDOMPIGBPG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AMDOMPIGBPG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4ED230)
#define AMDOMPIGBPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4ED2D0)
#define AMDOMPIGBPG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4ECF20)
#define AMDOMPIGBPG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4ECEF0)
#define AMDOMPIGBPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4ECEE0)
#define AMDOMPIGBPG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4ED030)
#define AMDOMPIGBPG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4ECF60)
#define AMDOMPIGBPG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4ED190)
#define AMDOMPIGBPG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4ECEA0)
#define AMDOMPIGBPG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4ED280)
#define AMDOMPIGBPG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4ED250)
#define AMDOMPIGBPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4ECED0)
#define AMDOMPIGBPG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4ED1C0)
#define AMDOMPIGBPG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4ED220)

inline static constexpr unsigned int AMDOMPIGBPG_TypeDefinitionIndex = 34869;

	class AMDOMPIGBPG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::AMDOMPIGBPG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AMDOMPIGBPG*>**)UnitySDK::FromName("", "AMDOMPIGBPG")->GetStaticField(0x447C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDOMPIGBPG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AMDOMPIGBPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMDOMPIGBPG*))((::PBYTE)hIl2Cpp + AMDOMPIGBPG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMDOMPIGBPG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AMDOMPIGBPG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AMDOMPIGBPG*>*(*)())((::PBYTE)hIl2Cpp + AMDOMPIGBPG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDOMPIGBPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AMDOMPIGBPG* Clone()
		{
			return ((::AMDOMPIGBPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDOMPIGBPG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMDOMPIGBPG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AMDOMPIGBPG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AMDOMPIGBPG*))((::PBYTE)hIl2Cpp + AMDOMPIGBPG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDOMPIGBPG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDOMPIGBPG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AMDOMPIGBPG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDOMPIGBPG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AMDOMPIGBPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMDOMPIGBPG*))((::PBYTE)hIl2Cpp + AMDOMPIGBPG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AMDOMPIGBPG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
