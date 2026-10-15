#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEAIKEEANDP.h"
#include "unitysdk/System/Object.h"
class DINGDGLKHIP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DINGDGLKHIP_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E1952D0)
#define DINGDGLKHIP_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E1952E0)
#define DINGDGLKHIP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E195640)
#define DINGDGLKHIP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E195950)
#define DINGDGLKHIP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E195280)
#define DINGDGLKHIP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E195250)
#define DINGDGLKHIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E195240)
#define DINGDGLKHIP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1953F0)
#define DINGDGLKHIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E195310)
#define DINGDGLKHIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1954C0)
#define DINGDGLKHIP_IPDFIMHLLAO_OFFSET UNITYSDK_OFFSET(0x1E195300)
#define DINGDGLKHIP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E195200)
#define DINGDGLKHIP_MENGBBOIKNB_OFFSET UNITYSDK_OFFSET(0x1E1952F0)
#define DINGDGLKHIP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1957D0)
#define DINGDGLKHIP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E195790)
#define DINGDGLKHIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E195230)
#define DINGDGLKHIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1954F0)
#define DINGDGLKHIP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E195550)

inline static constexpr unsigned int DINGDGLKHIP_TypeDefinitionIndex = 33419;

	class DINGDGLKHIP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		::BEAIKEEANDP AJLLIPFGCCP; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::DINGDGLKHIP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DINGDGLKHIP*>**)UnitySDK::FromName("", "DINGDGLKHIP")->GetStaticField(0x31BD0);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object BOBCCDBHMDP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINGDGLKHIP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DINGDGLKHIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DINGDGLKHIP*))((::PBYTE)hIl2Cpp + DINGDGLKHIP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DINGDGLKHIP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DINGDGLKHIP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DINGDGLKHIP*>*(*)())((::PBYTE)hIl2Cpp + DINGDGLKHIP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DINGDGLKHIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DINGDGLKHIP* Clone()
		{
			return ((::DINGDGLKHIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DINGDGLKHIP_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DINGDGLKHIP_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DINGDGLKHIP_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::BEAIKEEANDP MENGBBOIKNB()
		{
			return ((::BEAIKEEANDP(*)(::PVOID))((::PBYTE)hIl2Cpp + DINGDGLKHIP_MENGBBOIKNB_OFFSET))(this);
		}

		::System::Void IPDFIMHLLAO(::BEAIKEEANDP a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEAIKEEANDP))((::PBYTE)hIl2Cpp + DINGDGLKHIP_IPDFIMHLLAO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DINGDGLKHIP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DINGDGLKHIP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DINGDGLKHIP*))((::PBYTE)hIl2Cpp + DINGDGLKHIP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DINGDGLKHIP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DINGDGLKHIP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DINGDGLKHIP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DINGDGLKHIP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DINGDGLKHIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DINGDGLKHIP*))((::PBYTE)hIl2Cpp + DINGDGLKHIP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DINGDGLKHIP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
