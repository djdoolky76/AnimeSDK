#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APJNPPGJELG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define APJNPPGJELG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E678120)
#define APJNPPGJELG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E678340)
#define APJNPPGJELG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E677D70)
#define APJNPPGJELG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E677D40)
#define APJNPPGJELG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E677D30)
#define APJNPPGJELG_EKOLEGAFLKP_OFFSET UNITYSDK_OFFSET(0x1E677DB0)
#define APJNPPGJELG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E677EA0)
#define APJNPPGJELG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E677DD0)
#define APJNPPGJELG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E678010)
#define APJNPPGJELG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E677CF0)
#define APJNPPGJELG_MCOJGMEPKLM_OFFSET UNITYSDK_OFFSET(0x1E677DC0)
#define APJNPPGJELG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6781E0)
#define APJNPPGJELG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6781B0)
#define APJNPPGJELG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E677D20)
#define APJNPPGJELG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E678040)
#define APJNPPGJELG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6780A0)

	class APJNPPGJELG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IIAMIHLDDPI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "APJNPPGJELG")->GetStaticField(0x42450);
		}

		// static const ::System::Object OBOHIPEGAGM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APJNPPGJELG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::APJNPPGJELG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APJNPPGJELG*))((::PBYTE)hIl2Cpp + APJNPPGJELG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APJNPPGJELG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + APJNPPGJELG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + APJNPPGJELG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::APJNPPGJELG* Clone()
		{
			return ((::APJNPPGJELG*(*)(::PVOID))((::PBYTE)hIl2Cpp + APJNPPGJELG_CLONE_OFFSET))(this);
		}

		::System::UInt32 EKOLEGAFLKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + APJNPPGJELG_EKOLEGAFLKP_OFFSET))(this);
		}

		::System::Void MCOJGMEPKLM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APJNPPGJELG_MCOJGMEPKLM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + APJNPPGJELG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::APJNPPGJELG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::APJNPPGJELG*))((::PBYTE)hIl2Cpp + APJNPPGJELG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APJNPPGJELG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APJNPPGJELG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + APJNPPGJELG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APJNPPGJELG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::APJNPPGJELG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APJNPPGJELG*))((::PBYTE)hIl2Cpp + APJNPPGJELG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + APJNPPGJELG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
