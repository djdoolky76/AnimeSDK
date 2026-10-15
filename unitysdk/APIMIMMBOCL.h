#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APIMIMMBOCL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define APIMIMMBOCL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E64A1C0)
#define APIMIMMBOCL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E64A490)
#define APIMIMMBOCL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E649E10)
#define APIMIMMBOCL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E649DE0)
#define APIMIMMBOCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E649DD0)
#define APIMIMMBOCL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E649F80)
#define APIMIMMBOCL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E649EA0)
#define APIMIMMBOCL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E649E70)
#define APIMIMMBOCL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E64A050)
#define APIMIMMBOCL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E649D90)
#define APIMIMMBOCL_JNFBHFOFHFO_OFFSET UNITYSDK_OFFSET(0x1E649E90)
#define APIMIMMBOCL_KLKAIAKLHMF_OFFSET UNITYSDK_OFFSET(0x1E649E80)
#define APIMIMMBOCL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E64A310)
#define APIMIMMBOCL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E64A2D0)
#define APIMIMMBOCL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E649E60)
#define APIMIMMBOCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E649DC0)
#define APIMIMMBOCL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E64A080)
#define APIMIMMBOCL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E64A0E0)

inline static constexpr unsigned int APIMIMMBOCL_TypeDefinitionIndex = 34041;

	class APIMIMMBOCL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 AMOPIFLCGOO; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::APIMIMMBOCL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::APIMIMMBOCL*>**)UnitySDK::FromName("", "APIMIMMBOCL")->GetStaticField(0x4A810);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object KKHPBDAEOLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APIMIMMBOCL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::APIMIMMBOCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APIMIMMBOCL*))((::PBYTE)hIl2Cpp + APIMIMMBOCL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APIMIMMBOCL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::APIMIMMBOCL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::APIMIMMBOCL*>*(*)())((::PBYTE)hIl2Cpp + APIMIMMBOCL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + APIMIMMBOCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::APIMIMMBOCL* Clone()
		{
			return ((::APIMIMMBOCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + APIMIMMBOCL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + APIMIMMBOCL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APIMIMMBOCL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 KLKAIAKLHMF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + APIMIMMBOCL_KLKAIAKLHMF_OFFSET))(this);
		}

		::System::Void JNFBHFOFHFO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APIMIMMBOCL_JNFBHFOFHFO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + APIMIMMBOCL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::APIMIMMBOCL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::APIMIMMBOCL*))((::PBYTE)hIl2Cpp + APIMIMMBOCL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APIMIMMBOCL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APIMIMMBOCL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + APIMIMMBOCL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APIMIMMBOCL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::APIMIMMBOCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APIMIMMBOCL*))((::PBYTE)hIl2Cpp + APIMIMMBOCL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + APIMIMMBOCL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
