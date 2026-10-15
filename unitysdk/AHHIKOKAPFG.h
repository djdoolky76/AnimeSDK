#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHHIKOKAPFG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AHHIKOKAPFG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E26EF80)
#define AHHIKOKAPFG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E26F1A0)
#define AHHIKOKAPFG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E26EBD0)
#define AHHIKOKAPFG_CPCMJBDMODO_OFFSET UNITYSDK_OFFSET(0x1E26EC20)
#define AHHIKOKAPFG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E26EBA0)
#define AHHIKOKAPFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E26EB90)
#define AHHIKOKAPFG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E26ED00)
#define AHHIKOKAPFG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E26EC30)
#define AHHIKOKAPFG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E26EE70)
#define AHHIKOKAPFG_GOPLCGGEACN_OFFSET UNITYSDK_OFFSET(0x1E26EC10)
#define AHHIKOKAPFG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E26EB50)
#define AHHIKOKAPFG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E26F040)
#define AHHIKOKAPFG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E26F010)
#define AHHIKOKAPFG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E26EB80)
#define AHHIKOKAPFG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E26EEA0)
#define AHHIKOKAPFG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E26EF00)

inline static constexpr unsigned int AHHIKOKAPFG_TypeDefinitionIndex = 33869;

	class AHHIKOKAPFG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CKHHCDKNCID; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AHHIKOKAPFG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AHHIKOKAPFG*>**)UnitySDK::FromName("", "AHHIKOKAPFG")->GetStaticField(0x31C40);
		}

		// static const ::System::Object MJGKNNHCJCH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHHIKOKAPFG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AHHIKOKAPFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHHIKOKAPFG*))((::PBYTE)hIl2Cpp + AHHIKOKAPFG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHHIKOKAPFG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AHHIKOKAPFG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AHHIKOKAPFG*>*(*)())((::PBYTE)hIl2Cpp + AHHIKOKAPFG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHHIKOKAPFG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AHHIKOKAPFG* Clone()
		{
			return ((::AHHIKOKAPFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHHIKOKAPFG_CLONE_OFFSET))(this);
		}

		::System::UInt32 GOPLCGGEACN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHHIKOKAPFG_GOPLCGGEACN_OFFSET))(this);
		}

		::System::Void CPCMJBDMODO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHHIKOKAPFG_CPCMJBDMODO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AHHIKOKAPFG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AHHIKOKAPFG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AHHIKOKAPFG*))((::PBYTE)hIl2Cpp + AHHIKOKAPFG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHHIKOKAPFG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHHIKOKAPFG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AHHIKOKAPFG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHHIKOKAPFG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AHHIKOKAPFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHHIKOKAPFG*))((::PBYTE)hIl2Cpp + AHHIKOKAPFG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AHHIKOKAPFG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
