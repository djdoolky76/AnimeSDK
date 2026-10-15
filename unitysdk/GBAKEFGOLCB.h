#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBAKEFGOLCB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GBAKEFGOLCB_BGIGOBPGPNO_OFFSET UNITYSDK_OFFSET(0x1E3F9690)
#define GBAKEFGOLCB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3F99F0)
#define GBAKEFGOLCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3F9CC0)
#define GBAKEFGOLCB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3F95F0)
#define GBAKEFGOLCB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3F95C0)
#define GBAKEFGOLCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F95B0)
#define GBAKEFGOLCB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3F97B0)
#define GBAKEFGOLCB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3F96A0)
#define GBAKEFGOLCB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3F9880)
#define GBAKEFGOLCB_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1E3F9670)
#define GBAKEFGOLCB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3F9540)
#define GBAKEFGOLCB_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1E3F9660)
#define GBAKEFGOLCB_KGPCNLCHALL_OFFSET UNITYSDK_OFFSET(0x1E3F9680)
#define GBAKEFGOLCB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3F9B40)
#define GBAKEFGOLCB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3F9B00)
#define GBAKEFGOLCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3F95A0)
#define GBAKEFGOLCB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3F98B0)
#define GBAKEFGOLCB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3F9910)

inline static constexpr unsigned int GBAKEFGOLCB_TypeDefinitionIndex = 25789;

	class GBAKEFGOLCB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FLEPJCNLLEG; // 0x18
		::System::UInt32 HJEGLCJEOKC; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::GBAKEFGOLCB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GBAKEFGOLCB*>**)UnitySDK::FromName("", "GBAKEFGOLCB")->GetStaticField(0xB990);
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

		static ::Google::Protobuf::MessageParser_1<::GBAKEFGOLCB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GBAKEFGOLCB*>*(*)())((::PBYTE)hIl2Cpp + GBAKEFGOLCB_JJGHOBBFNJD_OFFSET))();
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
