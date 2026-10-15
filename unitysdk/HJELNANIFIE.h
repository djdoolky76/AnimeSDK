#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJELNANIFIE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HJELNANIFIE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E579630)
#define HJELNANIFIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E579900)
#define HJELNANIFIE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E579280)
#define HJELNANIFIE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E579250)
#define HJELNANIFIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E579240)
#define HJELNANIFIE_EPKBJLAPPJO_OFFSET UNITYSDK_OFFSET(0x1E5792F0)
#define HJELNANIFIE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5793F0)
#define HJELNANIFIE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E579310)
#define HJELNANIFIE_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1E5792D0)
#define HJELNANIFIE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5794C0)
#define HJELNANIFIE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E579200)
#define HJELNANIFIE_KPNLALAHHGF_OFFSET UNITYSDK_OFFSET(0x1E579300)
#define HJELNANIFIE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E579780)
#define HJELNANIFIE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E579740)
#define HJELNANIFIE_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1E5792E0)
#define HJELNANIFIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E579230)
#define HJELNANIFIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5794F0)
#define HJELNANIFIE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E579550)

inline static constexpr unsigned int HJELNANIFIE_TypeDefinitionIndex = 31485;

	class HJELNANIFIE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MBPJCGEFHPJ; // 0x18
		::System::UInt32 OPPNMFMNMGC; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::HJELNANIFIE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HJELNANIFIE*>**)UnitySDK::FromName("", "HJELNANIFIE")->GetStaticField(0x35730);
		}

		// static const ::System::Object BOIGPPCIPFF; // 0x0
		// static const ::System::Object HOIIALLCKAA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJELNANIFIE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HJELNANIFIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJELNANIFIE*))((::PBYTE)hIl2Cpp + HJELNANIFIE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJELNANIFIE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HJELNANIFIE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HJELNANIFIE*>*(*)())((::PBYTE)hIl2Cpp + HJELNANIFIE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJELNANIFIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HJELNANIFIE* Clone()
		{
			return ((::HJELNANIFIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJELNANIFIE_CLONE_OFFSET))(this);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJELNANIFIE_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJELNANIFIE_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::UInt32 EPKBJLAPPJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJELNANIFIE_EPKBJLAPPJO_OFFSET))(this);
		}

		::System::Void KPNLALAHHGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJELNANIFIE_KPNLALAHHGF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HJELNANIFIE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HJELNANIFIE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HJELNANIFIE*))((::PBYTE)hIl2Cpp + HJELNANIFIE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJELNANIFIE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJELNANIFIE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HJELNANIFIE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJELNANIFIE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HJELNANIFIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJELNANIFIE*))((::PBYTE)hIl2Cpp + HJELNANIFIE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HJELNANIFIE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
