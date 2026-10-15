#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPNHGDGLICN;
class PJPKKAKEFNB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PJPKKAKEFNB_BLHGBHCEFLN_OFFSET UNITYSDK_OFFSET(0x1DF83E30)
#define PJPKKAKEFNB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF84340)
#define PJPKKAKEFNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF84780)
#define PJPKKAKEFNB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF83DF0)
#define PJPKKAKEFNB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF83D30)
#define PJPKKAKEFNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF83CE0)
#define PJPKKAKEFNB_EPIENJKDHCK_OFFSET UNITYSDK_OFFSET(0x1DF83E40)
#define PJPKKAKEFNB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF83FD0)
#define PJPKKAKEFNB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF83E70)
#define PJPKKAKEFNB_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1DF83E50)
#define PJPKKAKEFNB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF84100)
#define PJPKKAKEFNB_GHCGEKBALOO_OFFSET UNITYSDK_OFFSET(0x1DF83E20)
#define PJPKKAKEFNB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF83CA0)
#define PJPKKAKEFNB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF84590)
#define PJPKKAKEFNB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF844E0)
#define PJPKKAKEFNB_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1DF83E60)
#define PJPKKAKEFNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF83CD0)
#define PJPKKAKEFNB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF84170)
#define PJPKKAKEFNB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF841D0)

inline static constexpr unsigned int PJPKKAKEFNB_TypeDefinitionIndex = 28823;

	class PJPKKAKEFNB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::KPNHGDGLICN*>* PEABHFALEPB; // 0x18
		::System::UInt32 CIPIJNMEMIL; // 0x20
		::System::UInt32 OPPNMFMNMGC; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::KPNHGDGLICN*>** StaticGet_HAOLOFKJJGD()
		{
			return (::Google::Protobuf::FieldCodec_1<::KPNHGDGLICN*>**)UnitySDK::FromName("", "PJPKKAKEFNB")->GetStaticField(0x477A0);
		}

		static ::Google::Protobuf::MessageParser_1<::PJPKKAKEFNB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PJPKKAKEFNB*>**)UnitySDK::FromName("", "PJPKKAKEFNB")->GetStaticField(0x477A8);
		}

		// static const ::System::Object JEHOHPBICNN; // 0x0
		// static const ::System::Object PAAEMNPPDGG; // 0x0
		// static const ::System::Object BOIGPPCIPFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPKKAKEFNB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PJPKKAKEFNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJPKKAKEFNB*))((::PBYTE)hIl2Cpp + PJPKKAKEFNB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJPKKAKEFNB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PJPKKAKEFNB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PJPKKAKEFNB*>*(*)())((::PBYTE)hIl2Cpp + PJPKKAKEFNB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPKKAKEFNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PJPKKAKEFNB* Clone()
		{
			return ((::PJPKKAKEFNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPKKAKEFNB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KPNHGDGLICN*>* GHCGEKBALOO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KPNHGDGLICN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPKKAKEFNB_GHCGEKBALOO_OFFSET))(this);
		}

		::System::UInt32 BLHGBHCEFLN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPKKAKEFNB_BLHGBHCEFLN_OFFSET))(this);
		}

		::System::Void EPIENJKDHCK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJPKKAKEFNB_EPIENJKDHCK_OFFSET))(this, a1);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPKKAKEFNB_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJPKKAKEFNB_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJPKKAKEFNB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PJPKKAKEFNB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PJPKKAKEFNB*))((::PBYTE)hIl2Cpp + PJPKKAKEFNB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPKKAKEFNB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPKKAKEFNB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PJPKKAKEFNB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPKKAKEFNB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PJPKKAKEFNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJPKKAKEFNB*))((::PBYTE)hIl2Cpp + PJPKKAKEFNB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PJPKKAKEFNB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
