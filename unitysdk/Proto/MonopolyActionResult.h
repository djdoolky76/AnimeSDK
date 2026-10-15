#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAKAELIMIJI.h"
#include "unitysdk/System/Object.h"
class GPPKIMDCPBM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class MonopolyActionResult; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_MONOPOLYACTIONRESULT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E006330)
#define PROTO_MONOPOLYACTIONRESULT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0068A0)
#define PROTO_MONOPOLYACTIONRESULT_CLONE_OFFSET UNITYSDK_OFFSET(0x1E005CE0)
#define PROTO_MONOPOLYACTIONRESULT_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E005C50)
#define PROTO_MONOPOLYACTIONRESULT_CTOR_OFFSET UNITYSDK_OFFSET(0x1E005C40)
#define PROTO_MONOPOLYACTIONRESULT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E005F40)
#define PROTO_MONOPOLYACTIONRESULT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E005E90)
#define PROTO_MONOPOLYACTIONRESULT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E005FC0)
#define PROTO_MONOPOLYACTIONRESULT_GET_CLICKCELLID_OFFSET UNITYSDK_OFFSET(0x1E005E10)
#define PROTO_MONOPOLYACTIONRESULT_GET_CLICKMAPID_OFFSET UNITYSDK_OFFSET(0x1E005E50)
#define PROTO_MONOPOLYACTIONRESULT_GET_DETAIL_OFFSET UNITYSDK_OFFSET(0x1E005E70)
#define PROTO_MONOPOLYACTIONRESULT_GET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1E005DB0)
#define PROTO_MONOPOLYACTIONRESULT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1E005BD0)
#define PROTO_MONOPOLYACTIONRESULT_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x1E005E30)
#define PROTO_MONOPOLYACTIONRESULT_GET_TRIGGERCELLID_OFFSET UNITYSDK_OFFSET(0x1E005DF0)
#define PROTO_MONOPOLYACTIONRESULT_GET_TRIGGERMAPID_OFFSET UNITYSDK_OFFSET(0x1E005DD0)
#define PROTO_MONOPOLYACTIONRESULT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E006770)
#define PROTO_MONOPOLYACTIONRESULT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0066A0)
#define PROTO_MONOPOLYACTIONRESULT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E005C30)
#define PROTO_MONOPOLYACTIONRESULT_SET_CLICKCELLID_OFFSET UNITYSDK_OFFSET(0x1E005E20)
#define PROTO_MONOPOLYACTIONRESULT_SET_CLICKMAPID_OFFSET UNITYSDK_OFFSET(0x1E005E60)
#define PROTO_MONOPOLYACTIONRESULT_SET_DETAIL_OFFSET UNITYSDK_OFFSET(0x1E005E80)
#define PROTO_MONOPOLYACTIONRESULT_SET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1E005DC0)
#define PROTO_MONOPOLYACTIONRESULT_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x1E005E40)
#define PROTO_MONOPOLYACTIONRESULT_SET_TRIGGERCELLID_OFFSET UNITYSDK_OFFSET(0x1E005E00)
#define PROTO_MONOPOLYACTIONRESULT_SET_TRIGGERMAPID_OFFSET UNITYSDK_OFFSET(0x1E005DE0)
#define PROTO_MONOPOLYACTIONRESULT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E006010)
#define PROTO_MONOPOLYACTIONRESULT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E006070)

namespace Proto
{
	inline static constexpr unsigned int MonopolyActionResult_TypeDefinitionIndex = 31093;

	class MonopolyActionResult : public ::System::Object
	{
	public:
		::GPPKIMDCPBM* detail_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::BAKAELIMIJI sourceType_; // 0x20
		::System::UInt32 triggerCellId_; // 0x24
		::System::UInt32 effectType_; // 0x28
		::System::UInt32 clickMapId_; // 0x2C
		::System::UInt32 clickCellId_; // 0x30
		::System::UInt32 triggerMapId_; // 0x34
		static ::Google::Protobuf::MessageParser** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("Proto", "MonopolyActionResult")->GetStaticField(0x31880);
		}

		// static const ::System::Object EffectTypeFieldNumber; // 0x0
		// static const ::System::Object TriggerMapIdFieldNumber; // 0x0
		// static const ::System::Object TriggerCellIdFieldNumber; // 0x0
		// static const ::System::Object ClickCellIdFieldNumber; // 0x0
		// static const ::System::Object SourceTypeFieldNumber; // 0x0
		// static const ::System::Object ClickMapIdFieldNumber; // 0x0
		// static const ::System::Object DetailFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::MonopolyActionResult* Clone()
		{
			return ((::Proto::MonopolyActionResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_EffectType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_GET_EFFECTTYPE_OFFSET))(this);
		}

		::System::Void set_EffectType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_SET_EFFECTTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_TriggerMapId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_GET_TRIGGERMAPID_OFFSET))(this);
		}

		::System::Void set_TriggerMapId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_SET_TRIGGERMAPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TriggerCellId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_GET_TRIGGERCELLID_OFFSET))(this);
		}

		::System::Void set_TriggerCellId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_SET_TRIGGERCELLID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ClickCellId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_GET_CLICKCELLID_OFFSET))(this);
		}

		::System::Void set_ClickCellId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_SET_CLICKCELLID_OFFSET))(this, a1);
		}

		::BAKAELIMIJI get_SourceType()
		{
			return ((::BAKAELIMIJI(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_GET_SOURCETYPE_OFFSET))(this);
		}

		::System::Void set_SourceType(::BAKAELIMIJI a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAKAELIMIJI))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_SET_SOURCETYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ClickMapId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_GET_CLICKMAPID_OFFSET))(this);
		}

		::System::Void set_ClickMapId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_SET_CLICKMAPID_OFFSET))(this, a1);
		}

		::GPPKIMDCPBM* get_Detail()
		{
			return ((::GPPKIMDCPBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_GET_DETAIL_OFFSET))(this);
		}

		::System::Void set_Detail(::GPPKIMDCPBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPPKIMDCPBM*))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_SET_DETAIL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
