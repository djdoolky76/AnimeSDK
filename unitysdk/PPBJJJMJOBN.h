#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPBJJJMJOBN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PPBJJJMJOBN_BPHBNAOLIFI_OFFSET UNITYSDK_OFFSET(0x1DFD3DF0)
#define PPBJJJMJOBN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFD4170)
#define PPBJJJMJOBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFD4440)
#define PPBJJJMJOBN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFD3D70)
#define PPBJJJMJOBN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFD3D40)
#define PPBJJJMJOBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFD3D30)
#define PPBJJJMJOBN_DDHPDLDBIFC_OFFSET UNITYSDK_OFFSET(0x1DFD3DE0)
#define PPBJJJMJOBN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFD3F30)
#define PPBJJJMJOBN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFD3E20)
#define PPBJJJMJOBN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFD4000)
#define PPBJJJMJOBN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFD3CC0)
#define PPBJJJMJOBN_LNMMCPNGGGA_OFFSET UNITYSDK_OFFSET(0x1DFD3E10)
#define PPBJJJMJOBN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFD42C0)
#define PPBJJJMJOBN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFD4280)
#define PPBJJJMJOBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFD3D20)
#define PPBJJJMJOBN_PIDCPPLLEJN_OFFSET UNITYSDK_OFFSET(0x1DFD3E00)
#define PPBJJJMJOBN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFD4030)
#define PPBJJJMJOBN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFD4090)

inline static constexpr unsigned int PPBJJJMJOBN_TypeDefinitionIndex = 29322;

	class PPBJJJMJOBN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DLBFFMEHFBD; // 0x18
		::System::UInt32 CKCEAFIJLAA; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PPBJJJMJOBN")->GetStaticField(0x43650);
		}

		// static const ::System::Object MEJGAEIPAOP; // 0x0
		// static const ::System::Object KKPJKIGGCIF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBJJJMJOBN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PPBJJJMJOBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPBJJJMJOBN*))((::PBYTE)hIl2Cpp + PPBJJJMJOBN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPBJJJMJOBN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PPBJJJMJOBN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBJJJMJOBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PPBJJJMJOBN* Clone()
		{
			return ((::PPBJJJMJOBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBJJJMJOBN_CLONE_OFFSET))(this);
		}

		::System::UInt32 DDHPDLDBIFC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBJJJMJOBN_DDHPDLDBIFC_OFFSET))(this);
		}

		::System::Void BPHBNAOLIFI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PPBJJJMJOBN_BPHBNAOLIFI_OFFSET))(this, a1);
		}

		::System::UInt32 PIDCPPLLEJN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBJJJMJOBN_PIDCPPLLEJN_OFFSET))(this);
		}

		::System::Void LNMMCPNGGGA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PPBJJJMJOBN_LNMMCPNGGGA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPBJJJMJOBN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PPBJJJMJOBN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PPBJJJMJOBN*))((::PBYTE)hIl2Cpp + PPBJJJMJOBN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBJJJMJOBN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBJJJMJOBN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PPBJJJMJOBN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBJJJMJOBN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PPBJJJMJOBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPBJJJMJOBN*))((::PBYTE)hIl2Cpp + PPBJJJMJOBN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PPBJJJMJOBN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
