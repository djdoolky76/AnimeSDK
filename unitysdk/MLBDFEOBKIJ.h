#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLBDFEOBKIJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MLBDFEOBKIJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA7EA60)
#define MLBDFEOBKIJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA7EC80)
#define MLBDFEOBKIJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA7E6B0)
#define MLBDFEOBKIJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA7E680)
#define MLBDFEOBKIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA7E670)
#define MLBDFEOBKIJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA7E7E0)
#define MLBDFEOBKIJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA7E710)
#define MLBDFEOBKIJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA7E700)
#define MLBDFEOBKIJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA7E950)
#define MLBDFEOBKIJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA7E630)
#define MLBDFEOBKIJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA7EB20)
#define MLBDFEOBKIJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA7EAF0)
#define MLBDFEOBKIJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA7E6F0)
#define MLBDFEOBKIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA7E660)
#define MLBDFEOBKIJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA7E980)
#define MLBDFEOBKIJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA7E9E0)

inline static constexpr unsigned int MLBDFEOBKIJ_TypeDefinitionIndex = 31165;

	class MLBDFEOBKIJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MLBDFEOBKIJ")->GetStaticField(0x57AE0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBDFEOBKIJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MLBDFEOBKIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLBDFEOBKIJ*))((::PBYTE)hIl2Cpp + MLBDFEOBKIJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLBDFEOBKIJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MLBDFEOBKIJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBDFEOBKIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MLBDFEOBKIJ* Clone()
		{
			return ((::MLBDFEOBKIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBDFEOBKIJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBDFEOBKIJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLBDFEOBKIJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MLBDFEOBKIJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MLBDFEOBKIJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MLBDFEOBKIJ*))((::PBYTE)hIl2Cpp + MLBDFEOBKIJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBDFEOBKIJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBDFEOBKIJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MLBDFEOBKIJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBDFEOBKIJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MLBDFEOBKIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLBDFEOBKIJ*))((::PBYTE)hIl2Cpp + MLBDFEOBKIJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MLBDFEOBKIJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
