#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKCJLICDPMD;
class HIIIBFIMIIE;
class KDMEFGANLKI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIIIBFIMIIE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x205214E0)
#define HIIIBFIMIIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x20521860)
#define HIIIBFIMIIE_CLONE_OFFSET UNITYSDK_OFFSET(0x20520DC0)
#define HIIIBFIMIIE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20520D00)
#define HIIIBFIMIIE_CTOR_OFFSET UNITYSDK_OFFSET(0x20520CF0)
#define HIIIBFIMIIE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20521100)
#define HIIIBFIMIIE_EQUALS_OFFSET UNITYSDK_OFFSET(0x20520ED0)
#define HIIIBFIMIIE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20521330)
#define HIIIBFIMIIE_IJCFMGLPOKE_OFFSET UNITYSDK_OFFSET(0x20520EA0)
#define HIIIBFIMIIE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20520CB0)
#define HIIIBFIMIIE_LPHIKLPBHFM_OFFSET UNITYSDK_OFFSET(0x20520E90)
#define HIIIBFIMIIE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x205216C0)
#define HIIIBFIMIIE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20521570)
#define HIIIBFIMIIE_NKAGGKJADGE_OFFSET UNITYSDK_OFFSET(0x20520EB0)
#define HIIIBFIMIIE_NKOJGOEDHOE_OFFSET UNITYSDK_OFFSET(0x20520EC0)
#define HIIIBFIMIIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20520CE0)
#define HIIIBFIMIIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x205213A0)
#define HIIIBFIMIIE_WRITETO_OFFSET UNITYSDK_OFFSET(0x20521400)

inline static constexpr unsigned int HIIIBFIMIIE_TypeDefinitionIndex = 33235;

	class HIIIBFIMIIE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::BKCJLICDPMD* ADNLAMBJPOP; // 0x18
		::KDMEFGANLKI* MLFOAEKAMLL; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HIIIBFIMIIE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HIIIBFIMIIE*>**)UnitySDK::FromName("", "HIIIBFIMIIE")->GetStaticField(0x2FA00);
		}

		// static const ::System::Object HFEBBECCNDA; // 0x0
		// static const ::System::Object LCFLBEFAOGI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIIBFIMIIE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HIIIBFIMIIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIIIBFIMIIE*))((::PBYTE)hIl2Cpp + HIIIBFIMIIE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIIIBFIMIIE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HIIIBFIMIIE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HIIIBFIMIIE*>*(*)())((::PBYTE)hIl2Cpp + HIIIBFIMIIE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIIBFIMIIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HIIIBFIMIIE* Clone()
		{
			return ((::HIIIBFIMIIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIIBFIMIIE_CLONE_OFFSET))(this);
		}

		::KDMEFGANLKI* LPHIKLPBHFM()
		{
			return ((::KDMEFGANLKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIIBFIMIIE_LPHIKLPBHFM_OFFSET))(this);
		}

		::System::Void IJCFMGLPOKE(::KDMEFGANLKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDMEFGANLKI*))((::PBYTE)hIl2Cpp + HIIIBFIMIIE_IJCFMGLPOKE_OFFSET))(this, a1);
		}

		::BKCJLICDPMD* NKAGGKJADGE()
		{
			return ((::BKCJLICDPMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIIBFIMIIE_NKAGGKJADGE_OFFSET))(this);
		}

		::System::Void NKOJGOEDHOE(::BKCJLICDPMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKCJLICDPMD*))((::PBYTE)hIl2Cpp + HIIIBFIMIIE_NKOJGOEDHOE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIIIBFIMIIE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HIIIBFIMIIE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIIIBFIMIIE*))((::PBYTE)hIl2Cpp + HIIIBFIMIIE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIIBFIMIIE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIIBFIMIIE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HIIIBFIMIIE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIIBFIMIIE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HIIIBFIMIIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIIIBFIMIIE*))((::PBYTE)hIl2Cpp + HIIIBFIMIIE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HIIIBFIMIIE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
