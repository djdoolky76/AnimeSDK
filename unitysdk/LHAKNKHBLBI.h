#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLAKIACAACO;
class KHNBFDNKLHE;
class LHAKNKHBLBI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LHAKNKHBLBI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E92DE90)
#define LHAKNKHBLBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E92E2B0)
#define LHAKNKHBLBI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E92D700)
#define LHAKNKHBLBI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E92D640)
#define LHAKNKHBLBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E92D630)
#define LHAKNKHBLBI_EGHNAGOJFJD_OFFSET UNITYSDK_OFFSET(0x1E92D7F0)
#define LHAKNKHBLBI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E92DA60)
#define LHAKNKHBLBI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E92D830)
#define LHAKNKHBLBI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E92D820)
#define LHAKNKHBLBI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E92DC90)
#define LHAKNKHBLBI_HGCCNJAMBPK_OFFSET UNITYSDK_OFFSET(0x1E92D800)
#define LHAKNKHBLBI_IPFDMFDOKHJ_OFFSET UNITYSDK_OFFSET(0x1E92D7E0)
#define LHAKNKHBLBI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E92D5F0)
#define LHAKNKHBLBI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E92E0B0)
#define LHAKNKHBLBI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E92DFA0)
#define LHAKNKHBLBI_NDGJGMEFMLH_OFFSET UNITYSDK_OFFSET(0x1E92D7D0)
#define LHAKNKHBLBI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E92D810)
#define LHAKNKHBLBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E92D620)
#define LHAKNKHBLBI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E92DCF0)
#define LHAKNKHBLBI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E92DD50)

inline static constexpr unsigned int LHAKNKHBLBI_TypeDefinitionIndex = 26947;

	class LHAKNKHBLBI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KHNBFDNKLHE* CHFNJJAMCCO; // 0x18
		::CLAKIACAACO* IDJNJDDEECN; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::LHAKNKHBLBI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LHAKNKHBLBI*>**)UnitySDK::FromName("", "LHAKNKHBLBI")->GetStaticField(0x35D30);
		}

		// static const ::System::Object CJDOLCNNPKL; // 0x0
		// static const ::System::Object BEIENNFBJPB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAKNKHBLBI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LHAKNKHBLBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHAKNKHBLBI*))((::PBYTE)hIl2Cpp + LHAKNKHBLBI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHAKNKHBLBI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LHAKNKHBLBI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LHAKNKHBLBI*>*(*)())((::PBYTE)hIl2Cpp + LHAKNKHBLBI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAKNKHBLBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LHAKNKHBLBI* Clone()
		{
			return ((::LHAKNKHBLBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAKNKHBLBI_CLONE_OFFSET))(this);
		}

		::KHNBFDNKLHE* NDGJGMEFMLH()
		{
			return ((::KHNBFDNKLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAKNKHBLBI_NDGJGMEFMLH_OFFSET))(this);
		}

		::System::Void IPFDMFDOKHJ(::KHNBFDNKLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + LHAKNKHBLBI_IPFDMFDOKHJ_OFFSET))(this, a1);
		}

		::CLAKIACAACO* EGHNAGOJFJD()
		{
			return ((::CLAKIACAACO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAKNKHBLBI_EGHNAGOJFJD_OFFSET))(this);
		}

		::System::Void HGCCNJAMBPK(::CLAKIACAACO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLAKIACAACO*))((::PBYTE)hIl2Cpp + LHAKNKHBLBI_HGCCNJAMBPK_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAKNKHBLBI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LHAKNKHBLBI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LHAKNKHBLBI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LHAKNKHBLBI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LHAKNKHBLBI*))((::PBYTE)hIl2Cpp + LHAKNKHBLBI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAKNKHBLBI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAKNKHBLBI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LHAKNKHBLBI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAKNKHBLBI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LHAKNKHBLBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHAKNKHBLBI*))((::PBYTE)hIl2Cpp + LHAKNKHBLBI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LHAKNKHBLBI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
