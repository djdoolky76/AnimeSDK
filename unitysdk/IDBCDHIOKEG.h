#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JIIEHEBIBMO.h"
#include "unitysdk/System/Object.h"
class IDBCDHIOKEG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IDBCDHIOKEG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6280E0)
#define IDBCDHIOKEG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6283F0)
#define IDBCDHIOKEG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E627D20)
#define IDBCDHIOKEG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E627CF0)
#define IDBCDHIOKEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E627CE0)
#define IDBCDHIOKEG_EKPPNLFGKHJ_OFFSET UNITYSDK_OFFSET(0x1E627D70)
#define IDBCDHIOKEG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E627E90)
#define IDBCDHIOKEG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E627DB0)
#define IDBCDHIOKEG_GAIKIHDIOBM_OFFSET UNITYSDK_OFFSET(0x1E627DA0)
#define IDBCDHIOKEG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E627F60)
#define IDBCDHIOKEG_JBENBABCOGB_OFFSET UNITYSDK_OFFSET(0x1E627D90)
#define IDBCDHIOKEG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E627CA0)
#define IDBCDHIOKEG_JLELLOJIIPM_OFFSET UNITYSDK_OFFSET(0x1E627D80)
#define IDBCDHIOKEG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E628270)
#define IDBCDHIOKEG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E628230)
#define IDBCDHIOKEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E627CD0)
#define IDBCDHIOKEG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E627F90)
#define IDBCDHIOKEG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E627FF0)

	class IDBCDHIOKEG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PLBOMJNAIPM; // 0x18
		::JIIEHEBIBMO AFHHMCKLLAJ; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IDBCDHIOKEG")->GetStaticField(0x14800);
		}

		// static const ::System::Object DKPPGPOJLHJ; // 0x0
		// static const ::System::Object LFMHICIGAPC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBCDHIOKEG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IDBCDHIOKEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDBCDHIOKEG*))((::PBYTE)hIl2Cpp + IDBCDHIOKEG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDBCDHIOKEG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IDBCDHIOKEG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBCDHIOKEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IDBCDHIOKEG* Clone()
		{
			return ((::IDBCDHIOKEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBCDHIOKEG_CLONE_OFFSET))(this);
		}

		::System::UInt32 EKPPNLFGKHJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBCDHIOKEG_EKPPNLFGKHJ_OFFSET))(this);
		}

		::System::Void JLELLOJIIPM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IDBCDHIOKEG_JLELLOJIIPM_OFFSET))(this, a1);
		}

		::JIIEHEBIBMO JBENBABCOGB()
		{
			return ((::JIIEHEBIBMO(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBCDHIOKEG_JBENBABCOGB_OFFSET))(this);
		}

		::System::Void GAIKIHDIOBM(::JIIEHEBIBMO a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIIEHEBIBMO))((::PBYTE)hIl2Cpp + IDBCDHIOKEG_GAIKIHDIOBM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDBCDHIOKEG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IDBCDHIOKEG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDBCDHIOKEG*))((::PBYTE)hIl2Cpp + IDBCDHIOKEG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBCDHIOKEG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBCDHIOKEG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IDBCDHIOKEG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBCDHIOKEG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IDBCDHIOKEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDBCDHIOKEG*))((::PBYTE)hIl2Cpp + IDBCDHIOKEG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IDBCDHIOKEG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
