#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOECDMPJMCM.h"
#include "unitysdk/System/Object.h"
class BALHBDBHHON;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BALHBDBHHON_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7BB000)
#define BALHBDBHHON_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7BB260)
#define BALHBDBHHON_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7BABD0)
#define BALHBDBHHON_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7BABA0)
#define BALHBDBHHON_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BAB90)
#define BALHBDBHHON_EFKBDEJHOKP_OFFSET UNITYSDK_OFFSET(0x1E7BAC40)
#define BALHBDBHHON_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7BAD60)
#define BALHBDBHHON_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7BAC60)
#define BALHBDBHHON_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7BAED0)
#define BALHBDBHHON_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7BAB20)
#define BALHBDBHHON_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7BB100)
#define BALHBDBHHON_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7BB0D0)
#define BALHBDBHHON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7BAB80)
#define BALHBDBHHON_PLJCDFCMJDM_OFFSET UNITYSDK_OFFSET(0x1E7BAC50)
#define BALHBDBHHON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7BAF00)
#define BALHBDBHHON_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7BAF60)

inline static constexpr unsigned int BALHBDBHHON_TypeDefinitionIndex = 25686;

	class BALHBDBHHON : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GOECDMPJMCM KOAEJKCBOEB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BALHBDBHHON")->GetStaticField(0x45F90);
		}

		// static const ::System::Object LMCELBGLALB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BALHBDBHHON_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BALHBDBHHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BALHBDBHHON*))((::PBYTE)hIl2Cpp + BALHBDBHHON_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BALHBDBHHON_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BALHBDBHHON_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALHBDBHHON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BALHBDBHHON* Clone()
		{
			return ((::BALHBDBHHON*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALHBDBHHON_CLONE_OFFSET))(this);
		}

		::GOECDMPJMCM EFKBDEJHOKP()
		{
			return ((::GOECDMPJMCM(*)(::PVOID))((::PBYTE)hIl2Cpp + BALHBDBHHON_EFKBDEJHOKP_OFFSET))(this);
		}

		::System::Void PLJCDFCMJDM(::GOECDMPJMCM a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOECDMPJMCM))((::PBYTE)hIl2Cpp + BALHBDBHHON_PLJCDFCMJDM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BALHBDBHHON_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BALHBDBHHON* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BALHBDBHHON*))((::PBYTE)hIl2Cpp + BALHBDBHHON_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BALHBDBHHON_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALHBDBHHON_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BALHBDBHHON_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BALHBDBHHON_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BALHBDBHHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BALHBDBHHON*))((::PBYTE)hIl2Cpp + BALHBDBHHON_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BALHBDBHHON_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
