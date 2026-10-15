#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKCJLICDPMD;
class HIIIBFIMIIE;
class KDMEFGANLKI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIIIBFIMIIE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E596B70)
#define HIIIBFIMIIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E596F20)
#define HIIIBFIMIIE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E596450)
#define HIIIBFIMIIE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E596390)
#define HIIIBFIMIIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E596380)
#define HIIIBFIMIIE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E596790)
#define HIIIBFIMIIE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E596560)
#define HIIIBFIMIIE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5969C0)
#define HIIIBFIMIIE_IJCFMGLPOKE_OFFSET UNITYSDK_OFFSET(0x1E596550)
#define HIIIBFIMIIE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E596340)
#define HIIIBFIMIIE_LPHIKLPBHFM_OFFSET UNITYSDK_OFFSET(0x1E596540)
#define HIIIBFIMIIE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E596D80)
#define HIIIBFIMIIE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E596C00)
#define HIIIBFIMIIE_NKAGGKJADGE_OFFSET UNITYSDK_OFFSET(0x1E596520)
#define HIIIBFIMIIE_NKOJGOEDHOE_OFFSET UNITYSDK_OFFSET(0x1E596530)
#define HIIIBFIMIIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E596370)
#define HIIIBFIMIIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E596A30)
#define HIIIBFIMIIE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E596A90)

	class HIIIBFIMIIE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KDMEFGANLKI* MLFOAEKAMLL; // 0x18
		::BKCJLICDPMD* ADNLAMBJPOP; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HIIIBFIMIIE")->GetStaticField(0x3D080);
		}

		// static const ::System::Object LCFLBEFAOGI; // 0x0
		// static const ::System::Object HFEBBECCNDA; // 0x0
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HIIIBFIMIIE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIIBFIMIIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HIIIBFIMIIE* Clone()
		{
			return ((::HIIIBFIMIIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIIBFIMIIE_CLONE_OFFSET))(this);
		}

		::BKCJLICDPMD* NKAGGKJADGE()
		{
			return ((::BKCJLICDPMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIIBFIMIIE_NKAGGKJADGE_OFFSET))(this);
		}

		::System::Void NKOJGOEDHOE(::BKCJLICDPMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKCJLICDPMD*))((::PBYTE)hIl2Cpp + HIIIBFIMIIE_NKOJGOEDHOE_OFFSET))(this, a1);
		}

		::KDMEFGANLKI* LPHIKLPBHFM()
		{
			return ((::KDMEFGANLKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIIBFIMIIE_LPHIKLPBHFM_OFFSET))(this);
		}

		::System::Void IJCFMGLPOKE(::KDMEFGANLKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDMEFGANLKI*))((::PBYTE)hIl2Cpp + HIIIBFIMIIE_IJCFMGLPOKE_OFFSET))(this, a1);
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
