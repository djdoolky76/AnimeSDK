#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBGHCHPONOH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DBGHCHPONOH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E15BD30)
#define DBGHCHPONOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E15BF50)
#define DBGHCHPONOH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E15B980)
#define DBGHCHPONOH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E15B950)
#define DBGHCHPONOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E15B940)
#define DBGHCHPONOH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E15BAB0)
#define DBGHCHPONOH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E15B9E0)
#define DBGHCHPONOH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E15B9D0)
#define DBGHCHPONOH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E15BC20)
#define DBGHCHPONOH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E15B900)
#define DBGHCHPONOH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E15BDF0)
#define DBGHCHPONOH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E15BDC0)
#define DBGHCHPONOH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E15B9C0)
#define DBGHCHPONOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E15B930)
#define DBGHCHPONOH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E15BC50)
#define DBGHCHPONOH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E15BCB0)

inline static constexpr unsigned int DBGHCHPONOH_TypeDefinitionIndex = 34871;

	class DBGHCHPONOH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DBGHCHPONOH")->GetStaticField(0x25CC0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGHCHPONOH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DBGHCHPONOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBGHCHPONOH*))((::PBYTE)hIl2Cpp + DBGHCHPONOH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBGHCHPONOH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DBGHCHPONOH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGHCHPONOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DBGHCHPONOH* Clone()
		{
			return ((::DBGHCHPONOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGHCHPONOH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGHCHPONOH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBGHCHPONOH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBGHCHPONOH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DBGHCHPONOH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DBGHCHPONOH*))((::PBYTE)hIl2Cpp + DBGHCHPONOH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGHCHPONOH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGHCHPONOH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DBGHCHPONOH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGHCHPONOH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DBGHCHPONOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBGHCHPONOH*))((::PBYTE)hIl2Cpp + DBGHCHPONOH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DBGHCHPONOH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
