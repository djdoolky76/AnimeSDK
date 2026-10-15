#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLPHCNIKCJK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MLPHCNIKCJK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA89E10)
#define MLPHCNIKCJK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA8A030)
#define MLPHCNIKCJK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA89A60)
#define MLPHCNIKCJK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA89A30)
#define MLPHCNIKCJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA89A20)
#define MLPHCNIKCJK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA89B90)
#define MLPHCNIKCJK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA89AC0)
#define MLPHCNIKCJK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA89AB0)
#define MLPHCNIKCJK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA89D00)
#define MLPHCNIKCJK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA899E0)
#define MLPHCNIKCJK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA89ED0)
#define MLPHCNIKCJK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA89EA0)
#define MLPHCNIKCJK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA89AA0)
#define MLPHCNIKCJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA89A10)
#define MLPHCNIKCJK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA89D30)
#define MLPHCNIKCJK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA89D90)

inline static constexpr unsigned int MLPHCNIKCJK_TypeDefinitionIndex = 26364;

	class MLPHCNIKCJK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MLPHCNIKCJK")->GetStaticField(0x58660);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPHCNIKCJK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MLPHCNIKCJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLPHCNIKCJK*))((::PBYTE)hIl2Cpp + MLPHCNIKCJK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLPHCNIKCJK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MLPHCNIKCJK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPHCNIKCJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MLPHCNIKCJK* Clone()
		{
			return ((::MLPHCNIKCJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPHCNIKCJK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPHCNIKCJK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLPHCNIKCJK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MLPHCNIKCJK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MLPHCNIKCJK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MLPHCNIKCJK*))((::PBYTE)hIl2Cpp + MLPHCNIKCJK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPHCNIKCJK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPHCNIKCJK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MLPHCNIKCJK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPHCNIKCJK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MLPHCNIKCJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLPHCNIKCJK*))((::PBYTE)hIl2Cpp + MLPHCNIKCJK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MLPHCNIKCJK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
