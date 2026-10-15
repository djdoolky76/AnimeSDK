#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFKNBJPPOGC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LFKNBJPPOGC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9431A0)
#define LFKNBJPPOGC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9433C0)
#define LFKNBJPPOGC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E942DF0)
#define LFKNBJPPOGC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E942DC0)
#define LFKNBJPPOGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E942DB0)
#define LFKNBJPPOGC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E942F20)
#define LFKNBJPPOGC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E942E50)
#define LFKNBJPPOGC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E942E40)
#define LFKNBJPPOGC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E943090)
#define LFKNBJPPOGC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E942D70)
#define LFKNBJPPOGC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E943260)
#define LFKNBJPPOGC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E943230)
#define LFKNBJPPOGC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E942E30)
#define LFKNBJPPOGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E942DA0)
#define LFKNBJPPOGC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9430C0)
#define LFKNBJPPOGC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E943120)

inline static constexpr unsigned int LFKNBJPPOGC_TypeDefinitionIndex = 26326;

	class LFKNBJPPOGC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LFKNBJPPOGC")->GetStaticField(0x3BAF0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKNBJPPOGC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LFKNBJPPOGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFKNBJPPOGC*))((::PBYTE)hIl2Cpp + LFKNBJPPOGC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFKNBJPPOGC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LFKNBJPPOGC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKNBJPPOGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LFKNBJPPOGC* Clone()
		{
			return ((::LFKNBJPPOGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKNBJPPOGC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKNBJPPOGC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFKNBJPPOGC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFKNBJPPOGC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LFKNBJPPOGC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LFKNBJPPOGC*))((::PBYTE)hIl2Cpp + LFKNBJPPOGC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKNBJPPOGC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKNBJPPOGC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LFKNBJPPOGC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKNBJPPOGC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LFKNBJPPOGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFKNBJPPOGC*))((::PBYTE)hIl2Cpp + LFKNBJPPOGC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LFKNBJPPOGC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
