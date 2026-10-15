#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCCGPNAFMHP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PCCGPNAFMHP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF05EE0)
#define PCCGPNAFMHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF06100)
#define PCCGPNAFMHP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF05AD0)
#define PCCGPNAFMHP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF05AA0)
#define PCCGPNAFMHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF05A90)
#define PCCGPNAFMHP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF05C60)
#define PCCGPNAFMHP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF05B60)
#define PCCGPNAFMHP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF05DD0)
#define PCCGPNAFMHP_JCDMOEJDBHN_OFFSET UNITYSDK_OFFSET(0x1DF05B40)
#define PCCGPNAFMHP_JIOGHONJOFF_OFFSET UNITYSDK_OFFSET(0x1DF05B50)
#define PCCGPNAFMHP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF05A20)
#define PCCGPNAFMHP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF05FA0)
#define PCCGPNAFMHP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF05F70)
#define PCCGPNAFMHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF05A80)
#define PCCGPNAFMHP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF05E00)
#define PCCGPNAFMHP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF05E60)

inline static constexpr unsigned int PCCGPNAFMHP_TypeDefinitionIndex = 29521;

	class PCCGPNAFMHP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DIAEIJEMDHP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PCCGPNAFMHP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PCCGPNAFMHP*>**)UnitySDK::FromName("", "PCCGPNAFMHP")->GetStaticField(0x358D0);
		}

		// static const ::System::Object KHENDMLMNMB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCGPNAFMHP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PCCGPNAFMHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCCGPNAFMHP*))((::PBYTE)hIl2Cpp + PCCGPNAFMHP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCCGPNAFMHP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PCCGPNAFMHP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PCCGPNAFMHP*>*(*)())((::PBYTE)hIl2Cpp + PCCGPNAFMHP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCGPNAFMHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PCCGPNAFMHP* Clone()
		{
			return ((::PCCGPNAFMHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCGPNAFMHP_CLONE_OFFSET))(this);
		}

		::System::UInt32 JCDMOEJDBHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCGPNAFMHP_JCDMOEJDBHN_OFFSET))(this);
		}

		::System::Void JIOGHONJOFF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PCCGPNAFMHP_JIOGHONJOFF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PCCGPNAFMHP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PCCGPNAFMHP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PCCGPNAFMHP*))((::PBYTE)hIl2Cpp + PCCGPNAFMHP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCGPNAFMHP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCGPNAFMHP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PCCGPNAFMHP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCGPNAFMHP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PCCGPNAFMHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCCGPNAFMHP*))((::PBYTE)hIl2Cpp + PCCGPNAFMHP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PCCGPNAFMHP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
