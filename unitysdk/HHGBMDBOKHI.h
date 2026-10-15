#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHGBMDBOKHI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HHGBMDBOKHI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E55A160)
#define HHGBMDBOKHI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E55A380)
#define HHGBMDBOKHI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E559DB0)
#define HHGBMDBOKHI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E559D80)
#define HHGBMDBOKHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E559D70)
#define HHGBMDBOKHI_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E559DF0)
#define HHGBMDBOKHI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E559EE0)
#define HHGBMDBOKHI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E559E10)
#define HHGBMDBOKHI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E55A050)
#define HHGBMDBOKHI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E559D30)
#define HHGBMDBOKHI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E55A220)
#define HHGBMDBOKHI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E55A1F0)
#define HHGBMDBOKHI_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E559E00)
#define HHGBMDBOKHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E559D60)
#define HHGBMDBOKHI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E55A080)
#define HHGBMDBOKHI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E55A0E0)

inline static constexpr unsigned int HHGBMDBOKHI_TypeDefinitionIndex = 26827;

	class HHGBMDBOKHI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FLBKCMIIFFP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HHGBMDBOKHI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HHGBMDBOKHI*>**)UnitySDK::FromName("", "HHGBMDBOKHI")->GetStaticField(0x31DC0);
		}

		// static const ::System::Object IEAPGPOMBIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGBMDBOKHI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HHGBMDBOKHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHGBMDBOKHI*))((::PBYTE)hIl2Cpp + HHGBMDBOKHI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHGBMDBOKHI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HHGBMDBOKHI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HHGBMDBOKHI*>*(*)())((::PBYTE)hIl2Cpp + HHGBMDBOKHI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGBMDBOKHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HHGBMDBOKHI* Clone()
		{
			return ((::HHGBMDBOKHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGBMDBOKHI_CLONE_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGBMDBOKHI_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HHGBMDBOKHI_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HHGBMDBOKHI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HHGBMDBOKHI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HHGBMDBOKHI*))((::PBYTE)hIl2Cpp + HHGBMDBOKHI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGBMDBOKHI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGBMDBOKHI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HHGBMDBOKHI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGBMDBOKHI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HHGBMDBOKHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHGBMDBOKHI*))((::PBYTE)hIl2Cpp + HHGBMDBOKHI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HHGBMDBOKHI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
