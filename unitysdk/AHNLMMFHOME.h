#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHNLMMFHOME;
class MMBBHFNJILI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AHNLMMFHOME_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20503510)
#define AHNLMMFHOME_CCTOR_OFFSET UNITYSDK_OFFSET(0x20503760)
#define AHNLMMFHOME_CLONE_OFFSET UNITYSDK_OFFSET(0x20502DF0)
#define AHNLMMFHOME_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20502D20)
#define AHNLMMFHOME_CTOR_OFFSET UNITYSDK_OFFSET(0x20502D10)
#define AHNLMMFHOME_EJAPAHJLPLE_OFFSET UNITYSDK_OFFSET(0x20502F00)
#define AHNLMMFHOME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x205030C0)
#define AHNLMMFHOME_EQUALS_OFFSET UNITYSDK_OFFSET(0x20502F20)
#define AHNLMMFHOME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20503390)
#define AHNLMMFHOME_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20502CA0)
#define AHNLMMFHOME_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x205035E0)
#define AHNLMMFHOME_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20503570)
#define AHNLMMFHOME_MKNLMEJDKPC_OFFSET UNITYSDK_OFFSET(0x20502F10)
#define AHNLMMFHOME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20502D00)
#define AHNLMMFHOME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20503420)
#define AHNLMMFHOME_WRITETO_OFFSET UNITYSDK_OFFSET(0x20503480)

inline static constexpr unsigned int AHNLMMFHOME_TypeDefinitionIndex = 34006;

	class AHNLMMFHOME : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::MMBBHFNJILI* HMDHAMHMGNJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AHNLMMFHOME*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AHNLMMFHOME*>**)UnitySDK::FromName("", "AHNLMMFHOME")->GetStaticField(0x30E30);
		}

		// static const ::System::Object HLGGAHDLNEA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNLMMFHOME_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AHNLMMFHOME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHNLMMFHOME*))((::PBYTE)hIl2Cpp + AHNLMMFHOME_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHNLMMFHOME_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AHNLMMFHOME*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AHNLMMFHOME*>*(*)())((::PBYTE)hIl2Cpp + AHNLMMFHOME_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNLMMFHOME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AHNLMMFHOME* Clone()
		{
			return ((::AHNLMMFHOME*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNLMMFHOME_CLONE_OFFSET))(this);
		}

		::MMBBHFNJILI* EJAPAHJLPLE()
		{
			return ((::MMBBHFNJILI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNLMMFHOME_EJAPAHJLPLE_OFFSET))(this);
		}

		::System::Void MKNLMEJDKPC(::MMBBHFNJILI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMBBHFNJILI*))((::PBYTE)hIl2Cpp + AHNLMMFHOME_MKNLMEJDKPC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AHNLMMFHOME_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AHNLMMFHOME* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AHNLMMFHOME*))((::PBYTE)hIl2Cpp + AHNLMMFHOME_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNLMMFHOME_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNLMMFHOME_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AHNLMMFHOME_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNLMMFHOME_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AHNLMMFHOME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHNLMMFHOME*))((::PBYTE)hIl2Cpp + AHNLMMFHOME_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AHNLMMFHOME_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
