#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNPIEPGLNPC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GNPIEPGLNPC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4E8460)
#define GNPIEPGLNPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4E8680)
#define GNPIEPGLNPC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4E80B0)
#define GNPIEPGLNPC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4E8080)
#define GNPIEPGLNPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E8070)
#define GNPIEPGLNPC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4E81E0)
#define GNPIEPGLNPC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4E8110)
#define GNPIEPGLNPC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4E8100)
#define GNPIEPGLNPC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4E8350)
#define GNPIEPGLNPC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4E8030)
#define GNPIEPGLNPC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4E8520)
#define GNPIEPGLNPC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4E84F0)
#define GNPIEPGLNPC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4E80F0)
#define GNPIEPGLNPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4E8060)
#define GNPIEPGLNPC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4E8380)
#define GNPIEPGLNPC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4E83E0)

inline static constexpr unsigned int GNPIEPGLNPC_TypeDefinitionIndex = 30350;

	class GNPIEPGLNPC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GNPIEPGLNPC")->GetStaticField(0x24410);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPIEPGLNPC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GNPIEPGLNPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNPIEPGLNPC*))((::PBYTE)hIl2Cpp + GNPIEPGLNPC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNPIEPGLNPC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GNPIEPGLNPC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPIEPGLNPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GNPIEPGLNPC* Clone()
		{
			return ((::GNPIEPGLNPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPIEPGLNPC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPIEPGLNPC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GNPIEPGLNPC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNPIEPGLNPC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GNPIEPGLNPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GNPIEPGLNPC*))((::PBYTE)hIl2Cpp + GNPIEPGLNPC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPIEPGLNPC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPIEPGLNPC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GNPIEPGLNPC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPIEPGLNPC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GNPIEPGLNPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNPIEPGLNPC*))((::PBYTE)hIl2Cpp + GNPIEPGLNPC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GNPIEPGLNPC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
