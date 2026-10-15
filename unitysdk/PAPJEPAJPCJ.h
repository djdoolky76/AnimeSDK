#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PAPJEPAJPCJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PAPJEPAJPCJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEF3320)
#define PAPJEPAJPCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEF3610)
#define PAPJEPAJPCJ_CGOGCHMOMJK_OFFSET UNITYSDK_OFFSET(0x1DEF2E90)
#define PAPJEPAJPCJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEF2E30)
#define PAPJEPAJPCJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEF2DF0)
#define PAPJEPAJPCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF2DE0)
#define PAPJEPAJPCJ_DKDLBLLMPNE_OFFSET UNITYSDK_OFFSET(0x1DEF2EC0)
#define PAPJEPAJPCJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEF3010)
#define PAPJEPAJPCJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEF2F10)
#define PAPJEPAJPCJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEF3110)
#define PAPJEPAJPCJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEF2DA0)
#define PAPJEPAJPCJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEF3460)
#define PAPJEPAJPCJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEF3410)
#define PAPJEPAJPCJ_MNLDMBGAJIF_OFFSET UNITYSDK_OFFSET(0x1DEF2EB0)
#define PAPJEPAJPCJ_OPBEJBCJMHA_OFFSET UNITYSDK_OFFSET(0x1DEF2EA0)
#define PAPJEPAJPCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEF2DD0)
#define PAPJEPAJPCJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEF31C0)
#define PAPJEPAJPCJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEF3220)

inline static constexpr unsigned int PAPJEPAJPCJ_TypeDefinitionIndex = 25439;

	class PAPJEPAJPCJ : public ::System::Object
	{
	public:
		::System::String* DFKHBNCHKBI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Int32 LFKLHAEEDJB; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PAPJEPAJPCJ")->GetStaticField(0x32CC0);
		}

		// static const ::System::Object IHEJPPEONCG; // 0x0
		// static const ::System::Object JLAAHBJNEML; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PAPJEPAJPCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAPJEPAJPCJ*))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PAPJEPAJPCJ* Clone()
		{
			return ((::PAPJEPAJPCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_CLONE_OFFSET))(this);
		}

		::System::Int32 CGOGCHMOMJK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_CGOGCHMOMJK_OFFSET))(this);
		}

		::System::Void OPBEJBCJMHA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_OPBEJBCJMHA_OFFSET))(this, a1);
		}

		::System::String* MNLDMBGAJIF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_MNLDMBGAJIF_OFFSET))(this);
		}

		::System::Void DKDLBLLMPNE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_DKDLBLLMPNE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PAPJEPAJPCJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PAPJEPAJPCJ*))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PAPJEPAJPCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAPJEPAJPCJ*))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
