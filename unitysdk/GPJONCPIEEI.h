#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPJONCPIEEI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GPJONCPIEEI_AEFBCEOMCEM_OFFSET UNITYSDK_OFFSET(0x1E4CD1F0)
#define GPJONCPIEEI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4CD520)
#define GPJONCPIEEI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4CD7F0)
#define GPJONCPIEEI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4CD170)
#define GPJONCPIEEI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4CD140)
#define GPJONCPIEEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4CD130)
#define GPJONCPIEEI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4CD2E0)
#define GPJONCPIEEI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4CD200)
#define GPJONCPIEEI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4CD3B0)
#define GPJONCPIEEI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4CD0F0)
#define GPJONCPIEEI_KEFLCJPPJAO_OFFSET UNITYSDK_OFFSET(0x1E4CD1E0)
#define GPJONCPIEEI_KGLIPAJLDMC_OFFSET UNITYSDK_OFFSET(0x1E4CD1C0)
#define GPJONCPIEEI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4CD670)
#define GPJONCPIEEI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4CD630)
#define GPJONCPIEEI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4CD120)
#define GPJONCPIEEI_PIGCJIAOIKA_OFFSET UNITYSDK_OFFSET(0x1E4CD1D0)
#define GPJONCPIEEI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4CD3E0)
#define GPJONCPIEEI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4CD440)

inline static constexpr unsigned int GPJONCPIEEI_TypeDefinitionIndex = 34570;

	class GPJONCPIEEI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KMJKJFJEDBF; // 0x18
		::System::UInt32 KNLKJFIKFCG; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::GPJONCPIEEI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GPJONCPIEEI*>**)UnitySDK::FromName("", "GPJONCPIEEI")->GetStaticField(0x24030);
		}

		// static const ::System::Object EEDDEINLCCA; // 0x0
		// static const ::System::Object PGLBLGGFDJF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJONCPIEEI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GPJONCPIEEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPJONCPIEEI*))((::PBYTE)hIl2Cpp + GPJONCPIEEI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPJONCPIEEI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GPJONCPIEEI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GPJONCPIEEI*>*(*)())((::PBYTE)hIl2Cpp + GPJONCPIEEI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJONCPIEEI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GPJONCPIEEI* Clone()
		{
			return ((::GPJONCPIEEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJONCPIEEI_CLONE_OFFSET))(this);
		}

		::System::UInt32 KGLIPAJLDMC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJONCPIEEI_KGLIPAJLDMC_OFFSET))(this);
		}

		::System::Void PIGCJIAOIKA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPJONCPIEEI_PIGCJIAOIKA_OFFSET))(this, a1);
		}

		::System::UInt32 KEFLCJPPJAO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJONCPIEEI_KEFLCJPPJAO_OFFSET))(this);
		}

		::System::Void AEFBCEOMCEM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPJONCPIEEI_AEFBCEOMCEM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GPJONCPIEEI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GPJONCPIEEI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GPJONCPIEEI*))((::PBYTE)hIl2Cpp + GPJONCPIEEI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJONCPIEEI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJONCPIEEI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GPJONCPIEEI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJONCPIEEI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GPJONCPIEEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPJONCPIEEI*))((::PBYTE)hIl2Cpp + GPJONCPIEEI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GPJONCPIEEI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
