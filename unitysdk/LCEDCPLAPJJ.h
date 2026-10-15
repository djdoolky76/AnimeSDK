#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGPIEEKIEME;
class LCEDCPLAPJJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LCEDCPLAPJJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8E91A0)
#define LCEDCPLAPJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8E9470)
#define LCEDCPLAPJJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8E8BA0)
#define LCEDCPLAPJJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8E8A80)
#define LCEDCPLAPJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8E8A70)
#define LCEDCPLAPJJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8E8E90)
#define LCEDCPLAPJJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8E8D10)
#define LCEDCPLAPJJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8E8D00)
#define LCEDCPLAPJJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8E9010)
#define LCEDCPLAPJJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8E8A30)
#define LCEDCPLAPJJ_LHNDAGFGPLH_OFFSET UNITYSDK_OFFSET(0x1E8E8CD0)
#define LCEDCPLAPJJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8E92E0)
#define LCEDCPLAPJJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8E9270)
#define LCEDCPLAPJJ_OAOHAFBDDMA_OFFSET UNITYSDK_OFFSET(0x1E8E8CE0)
#define LCEDCPLAPJJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8E8CF0)
#define LCEDCPLAPJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8E8A60)
#define LCEDCPLAPJJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8E9060)
#define LCEDCPLAPJJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8E90C0)

	class LCEDCPLAPJJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KGPIEEKIEME* HLJKHOMPDAF; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LCEDCPLAPJJ")->GetStaticField(0x32440);
		}

		// static const ::System::Object NLMACHMELAD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LCEDCPLAPJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCEDCPLAPJJ*))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LCEDCPLAPJJ* Clone()
		{
			return ((::LCEDCPLAPJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_CLONE_OFFSET))(this);
		}

		::KGPIEEKIEME* LHNDAGFGPLH()
		{
			return ((::KGPIEEKIEME*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_LHNDAGFGPLH_OFFSET))(this);
		}

		::System::Void OAOHAFBDDMA(::KGPIEEKIEME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGPIEEKIEME*))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_OAOHAFBDDMA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LCEDCPLAPJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LCEDCPLAPJJ*))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LCEDCPLAPJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCEDCPLAPJJ*))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
