#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGHAIFPHMPE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OGHAIFPHMPE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE52E60)
#define OGHAIFPHMPE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE53190)
#define OGHAIFPHMPE_CLCBBEPKCLG_OFFSET UNITYSDK_OFFSET(0x1DE52A70)
#define OGHAIFPHMPE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE529A0)
#define OGHAIFPHMPE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE52970)
#define OGHAIFPHMPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE52960)
#define OGHAIFPHMPE_DAPIGFJPPDG_OFFSET UNITYSDK_OFFSET(0x1DE52A80)
#define OGHAIFPHMPE_EGIHNHMLJPG_OFFSET UNITYSDK_OFFSET(0x1DE52A60)
#define OGHAIFPHMPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE52B20)
#define OGHAIFPHMPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE52A90)
#define OGHAIFPHMPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE52C00)
#define OGHAIFPHMPE_IEFCKNCCFJN_OFFSET UNITYSDK_OFFSET(0x1DE52A10)
#define OGHAIFPHMPE_IFLIEDBFBOI_OFFSET UNITYSDK_OFFSET(0x1DE52A30)
#define OGHAIFPHMPE_JIKKIBPNKLD_OFFSET UNITYSDK_OFFSET(0x1DE52A50)
#define OGHAIFPHMPE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE528F0)
#define OGHAIFPHMPE_KKCMPKEKHLI_OFFSET UNITYSDK_OFFSET(0x1DE52A20)
#define OGHAIFPHMPE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE530F0)
#define OGHAIFPHMPE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE530A0)
#define OGHAIFPHMPE_OLFNEJCLCNP_OFFSET UNITYSDK_OFFSET(0x1DE52A40)
#define OGHAIFPHMPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE52950)
#define OGHAIFPHMPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE52C40)
#define OGHAIFPHMPE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE52CA0)

	class OGHAIFPHMPE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int32 JONOMPHJBJA; // 0x18
		::System::UInt32 PHGJPDBBAFF; // 0x1C
		::System::Int32 PMBAHGLJFNL; // 0x20
		::System::UInt32 PGMIFKLNEFA; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OGHAIFPHMPE")->GetStaticField(0x18930);
		}

		// static const ::System::Object BBKOHMKHCLP; // 0x0
		// static const ::System::Object MBPODFCBHOH; // 0x0
		// static const ::System::Object EJBECGFOCAC; // 0x0
		// static const ::System::Object MGFADCMIFJM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHAIFPHMPE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OGHAIFPHMPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGHAIFPHMPE*))((::PBYTE)hIl2Cpp + OGHAIFPHMPE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGHAIFPHMPE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OGHAIFPHMPE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHAIFPHMPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OGHAIFPHMPE* Clone()
		{
			return ((::OGHAIFPHMPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHAIFPHMPE_CLONE_OFFSET))(this);
		}

		::System::UInt32 IEFCKNCCFJN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHAIFPHMPE_IEFCKNCCFJN_OFFSET))(this);
		}

		::System::Void KKCMPKEKHLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OGHAIFPHMPE_KKCMPKEKHLI_OFFSET))(this, a1);
		}

		::System::Int32 IFLIEDBFBOI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHAIFPHMPE_IFLIEDBFBOI_OFFSET))(this);
		}

		::System::Void OLFNEJCLCNP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OGHAIFPHMPE_OLFNEJCLCNP_OFFSET))(this, a1);
		}

		::System::Int32 JIKKIBPNKLD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHAIFPHMPE_JIKKIBPNKLD_OFFSET))(this);
		}

		::System::Void EGIHNHMLJPG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OGHAIFPHMPE_EGIHNHMLJPG_OFFSET))(this, a1);
		}

		::System::UInt32 CLCBBEPKCLG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHAIFPHMPE_CLCBBEPKCLG_OFFSET))(this);
		}

		::System::Void DAPIGFJPPDG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OGHAIFPHMPE_DAPIGFJPPDG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OGHAIFPHMPE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OGHAIFPHMPE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OGHAIFPHMPE*))((::PBYTE)hIl2Cpp + OGHAIFPHMPE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHAIFPHMPE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHAIFPHMPE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OGHAIFPHMPE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHAIFPHMPE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OGHAIFPHMPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGHAIFPHMPE*))((::PBYTE)hIl2Cpp + OGHAIFPHMPE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OGHAIFPHMPE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
