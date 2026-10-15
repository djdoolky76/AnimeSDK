#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOENFCDKGMJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MOENFCDKGMJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA79AA0)
#define MOENFCDKGMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA79CC0)
#define MOENFCDKGMJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA79690)
#define MOENFCDKGMJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA79660)
#define MOENFCDKGMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA79650)
#define MOENFCDKGMJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA79820)
#define MOENFCDKGMJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA79720)
#define MOENFCDKGMJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA79990)
#define MOENFCDKGMJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA795E0)
#define MOENFCDKGMJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA79B60)
#define MOENFCDKGMJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA79B30)
#define MOENFCDKGMJ_NCOKKJBNOHA_OFFSET UNITYSDK_OFFSET(0x1EA79710)
#define MOENFCDKGMJ_PBDCPINNEHB_OFFSET UNITYSDK_OFFSET(0x1EA79700)
#define MOENFCDKGMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA79640)
#define MOENFCDKGMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA799C0)
#define MOENFCDKGMJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA79A20)

inline static constexpr unsigned int MOENFCDKGMJ_TypeDefinitionIndex = 29370;

	class MOENFCDKGMJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GFKCJLGPJIF; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MOENFCDKGMJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MOENFCDKGMJ*>**)UnitySDK::FromName("", "MOENFCDKGMJ")->GetStaticField(0x5A680);
		}

		// static const ::System::Object OAAJLFDLHMP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MOENFCDKGMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOENFCDKGMJ*))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOENFCDKGMJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MOENFCDKGMJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MOENFCDKGMJ*>*(*)())((::PBYTE)hIl2Cpp + MOENFCDKGMJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MOENFCDKGMJ* Clone()
		{
			return ((::MOENFCDKGMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 PBDCPINNEHB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_PBDCPINNEHB_OFFSET))(this);
		}

		::System::Void NCOKKJBNOHA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_NCOKKJBNOHA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MOENFCDKGMJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MOENFCDKGMJ*))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MOENFCDKGMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOENFCDKGMJ*))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MOENFCDKGMJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
