#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIGKGOOHGAG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CIGKGOOHGAG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0D2BB0)
#define CIGKGOOHGAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D2DD0)
#define CIGKGOOHGAG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0D2800)
#define CIGKGOOHGAG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0D27D0)
#define CIGKGOOHGAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D27C0)
#define CIGKGOOHGAG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0D2930)
#define CIGKGOOHGAG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0D2860)
#define CIGKGOOHGAG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0D2AA0)
#define CIGKGOOHGAG_GGLMBPNJHHA_OFFSET UNITYSDK_OFFSET(0x1E0D2840)
#define CIGKGOOHGAG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0D2780)
#define CIGKGOOHGAG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0D2C70)
#define CIGKGOOHGAG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0D2C40)
#define CIGKGOOHGAG_OHAKKMNJOAH_OFFSET UNITYSDK_OFFSET(0x1E0D2850)
#define CIGKGOOHGAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0D27B0)
#define CIGKGOOHGAG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0D2AD0)
#define CIGKGOOHGAG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0D2B30)

	class CIGKGOOHGAG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ANNNLFKJBFP; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CIGKGOOHGAG")->GetStaticField(0x17520);
		}

		// static const ::System::Object BCOGHKKLFFA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGKGOOHGAG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CIGKGOOHGAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIGKGOOHGAG*))((::PBYTE)hIl2Cpp + CIGKGOOHGAG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIGKGOOHGAG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CIGKGOOHGAG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGKGOOHGAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CIGKGOOHGAG* Clone()
		{
			return ((::CIGKGOOHGAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGKGOOHGAG_CLONE_OFFSET))(this);
		}

		::System::UInt32 GGLMBPNJHHA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGKGOOHGAG_GGLMBPNJHHA_OFFSET))(this);
		}

		::System::Void OHAKKMNJOAH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CIGKGOOHGAG_OHAKKMNJOAH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIGKGOOHGAG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CIGKGOOHGAG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CIGKGOOHGAG*))((::PBYTE)hIl2Cpp + CIGKGOOHGAG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGKGOOHGAG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGKGOOHGAG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CIGKGOOHGAG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGKGOOHGAG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CIGKGOOHGAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIGKGOOHGAG*))((::PBYTE)hIl2Cpp + CIGKGOOHGAG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CIGKGOOHGAG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
