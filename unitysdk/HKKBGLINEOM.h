#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKKBGLINEOM;
class PFPPACPMFDJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HKKBGLINEOM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5B3CF0)
#define HKKBGLINEOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B4030)
#define HKKBGLINEOM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5B3780)
#define HKKBGLINEOM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5B36F0)
#define HKKBGLINEOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B36E0)
#define HKKBGLINEOM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5B39E0)
#define HKKBGLINEOM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5B3860)
#define HKKBGLINEOM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5B3B60)
#define HKKBGLINEOM_JGKHEAFJLOI_OFFSET UNITYSDK_OFFSET(0x1E5B3830)
#define HKKBGLINEOM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5B36A0)
#define HKKBGLINEOM_MAEMCJNKMOI_OFFSET UNITYSDK_OFFSET(0x1E5B3820)
#define HKKBGLINEOM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5B3E80)
#define HKKBGLINEOM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5B3DC0)
#define HKKBGLINEOM_MPMEHKKCFFI_OFFSET UNITYSDK_OFFSET(0x1E5B3850)
#define HKKBGLINEOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5B36D0)
#define HKKBGLINEOM_PICFCPNEKOF_OFFSET UNITYSDK_OFFSET(0x1E5B3840)
#define HKKBGLINEOM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5B3BB0)
#define HKKBGLINEOM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5B3C10)

inline static constexpr unsigned int HKKBGLINEOM_TypeDefinitionIndex = 27102;

	class HKKBGLINEOM : public ::System::Object
	{
	public:
		::PFPPACPMFDJ* LPEIKENFOCD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 BPHAEJMMPGF; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HKKBGLINEOM")->GetStaticField(0x45890);
		}

		// static const ::System::Object OJBCBIEJBOJ; // 0x0
		// static const ::System::Object OCJHKKAGDCI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKBGLINEOM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HKKBGLINEOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKKBGLINEOM*))((::PBYTE)hIl2Cpp + HKKBGLINEOM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKKBGLINEOM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HKKBGLINEOM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKBGLINEOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HKKBGLINEOM* Clone()
		{
			return ((::HKKBGLINEOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKBGLINEOM_CLONE_OFFSET))(this);
		}

		::System::UInt32 MAEMCJNKMOI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKBGLINEOM_MAEMCJNKMOI_OFFSET))(this);
		}

		::System::Void JGKHEAFJLOI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKKBGLINEOM_JGKHEAFJLOI_OFFSET))(this, a1);
		}

		::PFPPACPMFDJ* PICFCPNEKOF()
		{
			return ((::PFPPACPMFDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKBGLINEOM_PICFCPNEKOF_OFFSET))(this);
		}

		::System::Void MPMEHKKCFFI(::PFPPACPMFDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFPPACPMFDJ*))((::PBYTE)hIl2Cpp + HKKBGLINEOM_MPMEHKKCFFI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKKBGLINEOM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HKKBGLINEOM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HKKBGLINEOM*))((::PBYTE)hIl2Cpp + HKKBGLINEOM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKBGLINEOM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKBGLINEOM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HKKBGLINEOM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKBGLINEOM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HKKBGLINEOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKKBGLINEOM*))((::PBYTE)hIl2Cpp + HKKBGLINEOM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HKKBGLINEOM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
