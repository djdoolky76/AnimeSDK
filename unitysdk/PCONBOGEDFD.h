#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCONBOGEDFD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PCONBOGEDFD_APEBNMIIMAJ_OFFSET UNITYSDK_OFFSET(0x1DF0B3B0)
#define PCONBOGEDFD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF0B710)
#define PCONBOGEDFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF0B9E0)
#define PCONBOGEDFD_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF0B310)
#define PCONBOGEDFD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF0B2E0)
#define PCONBOGEDFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF0B2D0)
#define PCONBOGEDFD_EDKENABJCJB_OFFSET UNITYSDK_OFFSET(0x1DF0B390)
#define PCONBOGEDFD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF0B4D0)
#define PCONBOGEDFD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF0B3C0)
#define PCONBOGEDFD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF0B5A0)
#define PCONBOGEDFD_JHAJEBEHFOE_OFFSET UNITYSDK_OFFSET(0x1DF0B3A0)
#define PCONBOGEDFD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF0B260)
#define PCONBOGEDFD_JKHKADCKNAM_OFFSET UNITYSDK_OFFSET(0x1DF0B380)
#define PCONBOGEDFD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF0B860)
#define PCONBOGEDFD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF0B820)
#define PCONBOGEDFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF0B2C0)
#define PCONBOGEDFD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF0B5D0)
#define PCONBOGEDFD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF0B630)

	class PCONBOGEDFD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GIHLJDIOAGE; // 0x18
		::System::UInt32 HOPJIJGFELG; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PCONBOGEDFD")->GetStaticField(0x36730);
		}

		// static const ::System::Object EGBFLIAJLDK; // 0x0
		// static const ::System::Object KCPJFBNHFEP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCONBOGEDFD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PCONBOGEDFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCONBOGEDFD*))((::PBYTE)hIl2Cpp + PCONBOGEDFD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCONBOGEDFD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PCONBOGEDFD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCONBOGEDFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PCONBOGEDFD* Clone()
		{
			return ((::PCONBOGEDFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCONBOGEDFD_CLONE_OFFSET))(this);
		}

		::System::UInt32 JKHKADCKNAM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCONBOGEDFD_JKHKADCKNAM_OFFSET))(this);
		}

		::System::Void EDKENABJCJB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PCONBOGEDFD_EDKENABJCJB_OFFSET))(this, a1);
		}

		::System::UInt32 JHAJEBEHFOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCONBOGEDFD_JHAJEBEHFOE_OFFSET))(this);
		}

		::System::Void APEBNMIIMAJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PCONBOGEDFD_APEBNMIIMAJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PCONBOGEDFD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PCONBOGEDFD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PCONBOGEDFD*))((::PBYTE)hIl2Cpp + PCONBOGEDFD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCONBOGEDFD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCONBOGEDFD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PCONBOGEDFD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCONBOGEDFD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PCONBOGEDFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCONBOGEDFD*))((::PBYTE)hIl2Cpp + PCONBOGEDFD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PCONBOGEDFD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
