#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDDMLHPGOOL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PDDMLHPGOOL_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x1F1D78A0)
#define PDDMLHPGOOL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F1D7C30)
#define PDDMLHPGOOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1D7E50)
#define PDDMLHPGOOL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F1D7820)
#define PDDMLHPGOOL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F1D77F0)
#define PDDMLHPGOOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1D77E0)
#define PDDMLHPGOOL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F1D79B0)
#define PDDMLHPGOOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F1D78B0)
#define PDDMLHPGOOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F1D7B20)
#define PDDMLHPGOOL_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x1F1D7890)
#define PDDMLHPGOOL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F1D7770)
#define PDDMLHPGOOL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F1D7CF0)
#define PDDMLHPGOOL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F1D7CC0)
#define PDDMLHPGOOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F1D77D0)
#define PDDMLHPGOOL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F1D7B50)
#define PDDMLHPGOOL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F1D7BB0)

inline static constexpr unsigned int PDDMLHPGOOL_TypeDefinitionIndex = 30317;

	class PDDMLHPGOOL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PPNELLDGNPC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PDDMLHPGOOL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PDDMLHPGOOL*>**)UnitySDK::FromName("", "PDDMLHPGOOL")->GetStaticField(0x2E150);
		}

		// static const ::System::Object GLIJLPOGDAK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDMLHPGOOL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PDDMLHPGOOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDDMLHPGOOL*))((::PBYTE)hIl2Cpp + PDDMLHPGOOL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDDMLHPGOOL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PDDMLHPGOOL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PDDMLHPGOOL*>*(*)())((::PBYTE)hIl2Cpp + PDDMLHPGOOL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDMLHPGOOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PDDMLHPGOOL* Clone()
		{
			return ((::PDDMLHPGOOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDMLHPGOOL_CLONE_OFFSET))(this);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDMLHPGOOL_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDDMLHPGOOL_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PDDMLHPGOOL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PDDMLHPGOOL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PDDMLHPGOOL*))((::PBYTE)hIl2Cpp + PDDMLHPGOOL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDMLHPGOOL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDMLHPGOOL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PDDMLHPGOOL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDMLHPGOOL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PDDMLHPGOOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDDMLHPGOOL*))((::PBYTE)hIl2Cpp + PDDMLHPGOOL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PDDMLHPGOOL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
