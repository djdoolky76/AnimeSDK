#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBAKEFGOLCB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GBAKEFGOLCB_BGIGOBPGPNO_OFFSET UNITYSDK_OFFSET(0x1E426D60)
#define GBAKEFGOLCB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4270C0)
#define GBAKEFGOLCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E427390)
#define GBAKEFGOLCB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E426CC0)
#define GBAKEFGOLCB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E426C90)
#define GBAKEFGOLCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E426C80)
#define GBAKEFGOLCB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E426E80)
#define GBAKEFGOLCB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E426D70)
#define GBAKEFGOLCB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E426F50)
#define GBAKEFGOLCB_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1E426D40)
#define GBAKEFGOLCB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E426C10)
#define GBAKEFGOLCB_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1E426D30)
#define GBAKEFGOLCB_KGPCNLCHALL_OFFSET UNITYSDK_OFFSET(0x1E426D50)
#define GBAKEFGOLCB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E427210)
#define GBAKEFGOLCB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4271D0)
#define GBAKEFGOLCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E426C70)
#define GBAKEFGOLCB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E426F80)
#define GBAKEFGOLCB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E426FE0)

inline static constexpr unsigned int GBAKEFGOLCB_TypeDefinitionIndex = 25789;

	class GBAKEFGOLCB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FLEPJCNLLEG; // 0x18
		::System::UInt32 HJEGLCJEOKC; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GBAKEFGOLCB")->GetStaticField(0xC910);
		}

		// static const ::System::Object IEIFMNNMINA; // 0x0
		// static const ::System::Object AFLOAOCPKGH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBAKEFGOLCB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GBAKEFGOLCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBAKEFGOLCB*))((::PBYTE)hIl2Cpp + GBAKEFGOLCB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBAKEFGOLCB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GBAKEFGOLCB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBAKEFGOLCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GBAKEFGOLCB* Clone()
		{
			return ((::GBAKEFGOLCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBAKEFGOLCB_CLONE_OFFSET))(this);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBAKEFGOLCB_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GBAKEFGOLCB_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::System::UInt32 KGPCNLCHALL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBAKEFGOLCB_KGPCNLCHALL_OFFSET))(this);
		}

		::System::Void BGIGOBPGPNO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GBAKEFGOLCB_BGIGOBPGPNO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBAKEFGOLCB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GBAKEFGOLCB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GBAKEFGOLCB*))((::PBYTE)hIl2Cpp + GBAKEFGOLCB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBAKEFGOLCB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBAKEFGOLCB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GBAKEFGOLCB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBAKEFGOLCB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GBAKEFGOLCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBAKEFGOLCB*))((::PBYTE)hIl2Cpp + GBAKEFGOLCB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GBAKEFGOLCB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
