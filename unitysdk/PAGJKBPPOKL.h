#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFMCKLEMOMP;
class PAGJKBPPOKL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PAGJKBPPOKL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEECDB0)
#define PAGJKBPPOKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEED080)
#define PAGJKBPPOKL_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEEC790)
#define PAGJKBPPOKL_CODEMDIJDDI_OFFSET UNITYSDK_OFFSET(0x1DEEC820)
#define PAGJKBPPOKL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEEC720)
#define PAGJKBPPOKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEEC710)
#define PAGJKBPPOKL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEEC9A0)
#define PAGJKBPPOKL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEEC830)
#define PAGJKBPPOKL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEECC70)
#define PAGJKBPPOKL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEEC6D0)
#define PAGJKBPPOKL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEECEB0)
#define PAGJKBPPOKL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEECE10)
#define PAGJKBPPOKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEEC700)
#define PAGJKBPPOKL_PNMFHKDBJMM_OFFSET UNITYSDK_OFFSET(0x1DEEC810)
#define PAGJKBPPOKL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEECCC0)
#define PAGJKBPPOKL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEECD20)

inline static constexpr unsigned int PAGJKBPPOKL_TypeDefinitionIndex = 33063;

	class PAGJKBPPOKL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::OFMCKLEMOMP* AJCJMNPJCOJ; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PAGJKBPPOKL")->GetStaticField(0x31930);
		}

		// static const ::System::Object HDBOFDMMOKM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGJKBPPOKL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PAGJKBPPOKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAGJKBPPOKL*))((::PBYTE)hIl2Cpp + PAGJKBPPOKL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAGJKBPPOKL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PAGJKBPPOKL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGJKBPPOKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PAGJKBPPOKL* Clone()
		{
			return ((::PAGJKBPPOKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGJKBPPOKL_CLONE_OFFSET))(this);
		}

		::OFMCKLEMOMP* PNMFHKDBJMM()
		{
			return ((::OFMCKLEMOMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGJKBPPOKL_PNMFHKDBJMM_OFFSET))(this);
		}

		::System::Void CODEMDIJDDI(::OFMCKLEMOMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFMCKLEMOMP*))((::PBYTE)hIl2Cpp + PAGJKBPPOKL_CODEMDIJDDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PAGJKBPPOKL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PAGJKBPPOKL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PAGJKBPPOKL*))((::PBYTE)hIl2Cpp + PAGJKBPPOKL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGJKBPPOKL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGJKBPPOKL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PAGJKBPPOKL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGJKBPPOKL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PAGJKBPPOKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAGJKBPPOKL*))((::PBYTE)hIl2Cpp + PAGJKBPPOKL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PAGJKBPPOKL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
