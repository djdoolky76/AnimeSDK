#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCFAAGEJGBG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LCFAAGEJGBG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8EBCD0)
#define LCFAAGEJGBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8EBEF0)
#define LCFAAGEJGBG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8EB920)
#define LCFAAGEJGBG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8EB8F0)
#define LCFAAGEJGBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8EB8E0)
#define LCFAAGEJGBG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8EBA50)
#define LCFAAGEJGBG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8EB980)
#define LCFAAGEJGBG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8EB970)
#define LCFAAGEJGBG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8EBBC0)
#define LCFAAGEJGBG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8EB8A0)
#define LCFAAGEJGBG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8EBD90)
#define LCFAAGEJGBG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8EBD60)
#define LCFAAGEJGBG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8EB960)
#define LCFAAGEJGBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8EB8D0)
#define LCFAAGEJGBG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8EBBF0)
#define LCFAAGEJGBG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8EBC50)

inline static constexpr unsigned int LCFAAGEJGBG_TypeDefinitionIndex = 29611;

	class LCFAAGEJGBG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LCFAAGEJGBG")->GetStaticField(0x32700);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LCFAAGEJGBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCFAAGEJGBG*))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCFAAGEJGBG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LCFAAGEJGBG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LCFAAGEJGBG* Clone()
		{
			return ((::LCFAAGEJGBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LCFAAGEJGBG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LCFAAGEJGBG*))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LCFAAGEJGBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCFAAGEJGBG*))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
