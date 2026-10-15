#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAJHAKEBDBG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EAJHAKEBDBG_BAHCDLCBGHK_OFFSET UNITYSDK_OFFSET(0x1E22C710)
#define EAJHAKEBDBG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E22CA80)
#define EAJHAKEBDBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E22CCA0)
#define EAJHAKEBDBG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E22C6D0)
#define EAJHAKEBDBG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E22C6A0)
#define EAJHAKEBDBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E22C690)
#define EAJHAKEBDBG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E22C800)
#define EAJHAKEBDBG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E22C730)
#define EAJHAKEBDBG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E22C970)
#define EAJHAKEBDBG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E22C650)
#define EAJHAKEBDBG_KDKFDHIMJCN_OFFSET UNITYSDK_OFFSET(0x1E22C720)
#define EAJHAKEBDBG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E22CB40)
#define EAJHAKEBDBG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E22CB10)
#define EAJHAKEBDBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E22C680)
#define EAJHAKEBDBG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E22C9A0)
#define EAJHAKEBDBG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E22CA00)

	class EAJHAKEBDBG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KHNEMPCDLJC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EAJHAKEBDBG")->GetStaticField(0x49690);
		}

		// static const ::System::Object OIFMPNNBOBO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJHAKEBDBG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EAJHAKEBDBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAJHAKEBDBG*))((::PBYTE)hIl2Cpp + EAJHAKEBDBG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAJHAKEBDBG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EAJHAKEBDBG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJHAKEBDBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EAJHAKEBDBG* Clone()
		{
			return ((::EAJHAKEBDBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJHAKEBDBG_CLONE_OFFSET))(this);
		}

		::System::UInt32 BAHCDLCBGHK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJHAKEBDBG_BAHCDLCBGHK_OFFSET))(this);
		}

		::System::Void KDKFDHIMJCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAJHAKEBDBG_KDKFDHIMJCN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EAJHAKEBDBG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EAJHAKEBDBG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EAJHAKEBDBG*))((::PBYTE)hIl2Cpp + EAJHAKEBDBG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJHAKEBDBG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJHAKEBDBG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EAJHAKEBDBG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJHAKEBDBG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EAJHAKEBDBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAJHAKEBDBG*))((::PBYTE)hIl2Cpp + EAJHAKEBDBG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EAJHAKEBDBG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
