#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECPDDMCOJNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ECPDDMCOJNM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E259270)
#define ECPDDMCOJNM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E259550)
#define ECPDDMCOJNM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E258D90)
#define ECPDDMCOJNM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E258D50)
#define ECPDDMCOJNM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E258D40)
#define ECPDDMCOJNM_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E258DF0)
#define ECPDDMCOJNM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E258F70)
#define ECPDDMCOJNM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E258E70)
#define ECPDDMCOJNM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E259070)
#define ECPDDMCOJNM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E258D00)
#define ECPDDMCOJNM_KMPPMJDLKFG_OFFSET UNITYSDK_OFFSET(0x1E258E10)
#define ECPDDMCOJNM_LKCNFLPFNBH_OFFSET UNITYSDK_OFFSET(0x1E258E20)
#define ECPDDMCOJNM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2593A0)
#define ECPDDMCOJNM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E259350)
#define ECPDDMCOJNM_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E258E00)
#define ECPDDMCOJNM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E258D30)
#define ECPDDMCOJNM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E259120)
#define ECPDDMCOJNM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E259180)

	class ECPDDMCOJNM : public ::System::Object
	{
	public:
		::System::String* KNMOCKHLHIJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 FLBKCMIIFFP; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ECPDDMCOJNM")->GetStaticField(0x18150);
		}

		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object BIGDFAFLLNG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPDDMCOJNM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ECPDDMCOJNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECPDDMCOJNM*))((::PBYTE)hIl2Cpp + ECPDDMCOJNM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECPDDMCOJNM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ECPDDMCOJNM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPDDMCOJNM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ECPDDMCOJNM* Clone()
		{
			return ((::ECPDDMCOJNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPDDMCOJNM_CLONE_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPDDMCOJNM_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECPDDMCOJNM_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::String* KMPPMJDLKFG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPDDMCOJNM_KMPPMJDLKFG_OFFSET))(this);
		}

		::System::Void LKCNFLPFNBH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ECPDDMCOJNM_LKCNFLPFNBH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECPDDMCOJNM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ECPDDMCOJNM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ECPDDMCOJNM*))((::PBYTE)hIl2Cpp + ECPDDMCOJNM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPDDMCOJNM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPDDMCOJNM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ECPDDMCOJNM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPDDMCOJNM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ECPDDMCOJNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECPDDMCOJNM*))((::PBYTE)hIl2Cpp + ECPDDMCOJNM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ECPDDMCOJNM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
