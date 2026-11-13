#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOCDIMHKAMH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KOCDIMHKAMH_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x205AC170)
#define KOCDIMHKAMH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x205AC490)
#define KOCDIMHKAMH_CCTOR_OFFSET UNITYSDK_OFFSET(0x205AC820)
#define KOCDIMHKAMH_CLONE_OFFSET UNITYSDK_OFFSET(0x205AC0A0)
#define KOCDIMHKAMH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x205AC060)
#define KOCDIMHKAMH_CTOR_OFFSET UNITYSDK_OFFSET(0x205AC050)
#define KOCDIMHKAMH_ECLJEIOLMND_OFFSET UNITYSDK_OFFSET(0x205AC140)
#define KOCDIMHKAMH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x205AC200)
#define KOCDIMHKAMH_EQUALS_OFFSET UNITYSDK_OFFSET(0x205AC180)
#define KOCDIMHKAMH_FPOEBIDLKIA_OFFSET UNITYSDK_OFFSET(0x205AC130)
#define KOCDIMHKAMH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x205AC2D0)
#define KOCDIMHKAMH_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x205AC160)
#define KOCDIMHKAMH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x205ABFE0)
#define KOCDIMHKAMH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x205AC670)
#define KOCDIMHKAMH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x205AC620)
#define KOCDIMHKAMH_NNJHAPKDPOD_OFFSET UNITYSDK_OFFSET(0x205AC120)
#define KOCDIMHKAMH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x205AC040)
#define KOCDIMHKAMH_PDJIOGFEPLI_OFFSET UNITYSDK_OFFSET(0x205AC150)
#define KOCDIMHKAMH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x205AC300)
#define KOCDIMHKAMH_WRITETO_OFFSET UNITYSDK_OFFSET(0x205AC360)

inline static constexpr unsigned int KOCDIMHKAMH_TypeDefinitionIndex = 25998;

	class KOCDIMHKAMH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CBOMNGIOFOE; // 0x18
		::System::UInt32 PPNELLDGNPC; // 0x1C
		::System::UInt32 NNLJKKAEICI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KOCDIMHKAMH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KOCDIMHKAMH*>**)UnitySDK::FromName("", "KOCDIMHKAMH")->GetStaticField(0x207D0);
		}

		// static const ::System::Object EDKKMEICPDE; // 0x0
		// static const ::System::Object BFMLFALLFGN; // 0x0
		// static const ::System::Object GLIJLPOGDAK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCDIMHKAMH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KOCDIMHKAMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOCDIMHKAMH*))((::PBYTE)hIl2Cpp + KOCDIMHKAMH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOCDIMHKAMH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KOCDIMHKAMH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KOCDIMHKAMH*>*(*)())((::PBYTE)hIl2Cpp + KOCDIMHKAMH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCDIMHKAMH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KOCDIMHKAMH* Clone()
		{
			return ((::KOCDIMHKAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCDIMHKAMH_CLONE_OFFSET))(this);
		}

		::System::UInt32 NNJHAPKDPOD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCDIMHKAMH_NNJHAPKDPOD_OFFSET))(this);
		}

		::System::Void FPOEBIDLKIA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KOCDIMHKAMH_FPOEBIDLKIA_OFFSET))(this, a1);
		}

		::System::UInt32 ECLJEIOLMND()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCDIMHKAMH_ECLJEIOLMND_OFFSET))(this);
		}

		::System::Void PDJIOGFEPLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KOCDIMHKAMH_PDJIOGFEPLI_OFFSET))(this, a1);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCDIMHKAMH_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KOCDIMHKAMH_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KOCDIMHKAMH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KOCDIMHKAMH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KOCDIMHKAMH*))((::PBYTE)hIl2Cpp + KOCDIMHKAMH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCDIMHKAMH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCDIMHKAMH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KOCDIMHKAMH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCDIMHKAMH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KOCDIMHKAMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOCDIMHKAMH*))((::PBYTE)hIl2Cpp + KOCDIMHKAMH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KOCDIMHKAMH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
