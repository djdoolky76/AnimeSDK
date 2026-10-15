#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGLIOOODBPN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KGLIOOODBPN_ACOPGEADOMN_OFFSET UNITYSDK_OFFSET(0x1E8395C0)
#define KGLIOOODBPN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E839A60)
#define KGLIOOODBPN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E839D40)
#define KGLIOOODBPN_CHMCFLAIMPM_OFFSET UNITYSDK_OFFSET(0x1E8395B0)
#define KGLIOOODBPN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E839550)
#define KGLIOOODBPN_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E8395D0)
#define KGLIOOODBPN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8394C0)
#define KGLIOOODBPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E839470)
#define KGLIOOODBPN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E839690)
#define KGLIOOODBPN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8395F0)
#define KGLIOOODBPN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E839790)
#define KGLIOOODBPN_IKJLJHJLHPF_OFFSET UNITYSDK_OFFSET(0x1E8395A0)
#define KGLIOOODBPN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E839400)
#define KGLIOOODBPN_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E8395E0)
#define KGLIOOODBPN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E839C60)
#define KGLIOOODBPN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E839C00)
#define KGLIOOODBPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E839460)
#define KGLIOOODBPN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E839890)
#define KGLIOOODBPN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8398F0)

inline static constexpr unsigned int KGLIOOODBPN_TypeDefinitionIndex = 33164;

	class KGLIOOODBPN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GPONMGIMFLF; // 0x18
		::System::UInt32 KMLIKNNALPB; // 0x20
		::System::UInt32 DNKADAFBILN; // 0x24
		static ::Google::Protobuf::FieldCodec** StaticGet_MANIDPEEOIJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KGLIOOODBPN")->GetStaticField(0x160A0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KGLIOOODBPN")->GetStaticField(0x160A8);
		}

		// static const ::System::Object ECBDGIEHJIP; // 0x0
		// static const ::System::Object GLHOIPCCHAH; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLIOOODBPN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KGLIOOODBPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGLIOOODBPN*))((::PBYTE)hIl2Cpp + KGLIOOODBPN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGLIOOODBPN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KGLIOOODBPN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLIOOODBPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KGLIOOODBPN* Clone()
		{
			return ((::KGLIOOODBPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLIOOODBPN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IKJLJHJLHPF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLIOOODBPN_IKJLJHJLHPF_OFFSET))(this);
		}

		::System::UInt32 CHMCFLAIMPM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLIOOODBPN_CHMCFLAIMPM_OFFSET))(this);
		}

		::System::Void ACOPGEADOMN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGLIOOODBPN_ACOPGEADOMN_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLIOOODBPN_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGLIOOODBPN_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGLIOOODBPN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KGLIOOODBPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KGLIOOODBPN*))((::PBYTE)hIl2Cpp + KGLIOOODBPN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLIOOODBPN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLIOOODBPN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KGLIOOODBPN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLIOOODBPN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KGLIOOODBPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGLIOOODBPN*))((::PBYTE)hIl2Cpp + KGLIOOODBPN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KGLIOOODBPN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
