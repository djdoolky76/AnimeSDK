#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPNIHNAJNLJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DPNIHNAJNLJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1EEDC0)
#define DPNIHNAJNLJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1EEFE0)
#define DPNIHNAJNLJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1EEA10)
#define DPNIHNAJNLJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1EE9E0)
#define DPNIHNAJNLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1EE9D0)
#define DPNIHNAJNLJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1EEB40)
#define DPNIHNAJNLJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1EEA70)
#define DPNIHNAJNLJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1EEA60)
#define DPNIHNAJNLJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1EECB0)
#define DPNIHNAJNLJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1EE990)
#define DPNIHNAJNLJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1EEE80)
#define DPNIHNAJNLJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1EEE50)
#define DPNIHNAJNLJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1EEA50)
#define DPNIHNAJNLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1EE9C0)
#define DPNIHNAJNLJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1EECE0)
#define DPNIHNAJNLJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1EED40)

inline static constexpr unsigned int DPNIHNAJNLJ_TypeDefinitionIndex = 26747;

	class DPNIHNAJNLJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DPNIHNAJNLJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DPNIHNAJNLJ*>**)UnitySDK::FromName("", "DPNIHNAJNLJ")->GetStaticField(0x3B290);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DPNIHNAJNLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPNIHNAJNLJ*))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DPNIHNAJNLJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DPNIHNAJNLJ*>*(*)())((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DPNIHNAJNLJ* Clone()
		{
			return ((::DPNIHNAJNLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DPNIHNAJNLJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DPNIHNAJNLJ*))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DPNIHNAJNLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPNIHNAJNLJ*))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
