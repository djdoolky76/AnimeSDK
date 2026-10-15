#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGCPEPBPMNG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MGCPEPBPMNG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9F41A0)
#define MGCPEPBPMNG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9F4470)
#define MGCPEPBPMNG_CDHEPOFDMPP_OFFSET UNITYSDK_OFFSET(0x1E9F3E20)
#define MGCPEPBPMNG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9F3DA0)
#define MGCPEPBPMNG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9F3D70)
#define MGCPEPBPMNG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9F3D60)
#define MGCPEPBPMNG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9F3F60)
#define MGCPEPBPMNG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9F3E50)
#define MGCPEPBPMNG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9F4030)
#define MGCPEPBPMNG_JHBKBFPJGPB_OFFSET UNITYSDK_OFFSET(0x1E9F3E10)
#define MGCPEPBPMNG_JJDKOEONGHO_OFFSET UNITYSDK_OFFSET(0x1E9F3E40)
#define MGCPEPBPMNG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9F3CF0)
#define MGCPEPBPMNG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9F42F0)
#define MGCPEPBPMNG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9F42B0)
#define MGCPEPBPMNG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9F3D50)
#define MGCPEPBPMNG_PKFKJCPLLOM_OFFSET UNITYSDK_OFFSET(0x1E9F3E30)
#define MGCPEPBPMNG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9F4060)
#define MGCPEPBPMNG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9F40C0)

inline static constexpr unsigned int MGCPEPBPMNG_TypeDefinitionIndex = 31702;

	class MGCPEPBPMNG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OGCMNCBOEJG; // 0x18
		::System::UInt32 LAPNIOGIGPL; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::MGCPEPBPMNG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MGCPEPBPMNG*>**)UnitySDK::FromName("", "MGCPEPBPMNG")->GetStaticField(0x4BC20);
		}

		// static const ::System::Object HDGKLMKGNND; // 0x0
		// static const ::System::Object ODHBDFKGPJO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCPEPBPMNG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MGCPEPBPMNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGCPEPBPMNG*))((::PBYTE)hIl2Cpp + MGCPEPBPMNG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGCPEPBPMNG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MGCPEPBPMNG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MGCPEPBPMNG*>*(*)())((::PBYTE)hIl2Cpp + MGCPEPBPMNG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCPEPBPMNG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MGCPEPBPMNG* Clone()
		{
			return ((::MGCPEPBPMNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCPEPBPMNG_CLONE_OFFSET))(this);
		}

		::System::UInt32 JHBKBFPJGPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCPEPBPMNG_JHBKBFPJGPB_OFFSET))(this);
		}

		::System::Void CDHEPOFDMPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGCPEPBPMNG_CDHEPOFDMPP_OFFSET))(this, a1);
		}

		::System::UInt32 PKFKJCPLLOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCPEPBPMNG_PKFKJCPLLOM_OFFSET))(this);
		}

		::System::Void JJDKOEONGHO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGCPEPBPMNG_JJDKOEONGHO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGCPEPBPMNG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MGCPEPBPMNG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGCPEPBPMNG*))((::PBYTE)hIl2Cpp + MGCPEPBPMNG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCPEPBPMNG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCPEPBPMNG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MGCPEPBPMNG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCPEPBPMNG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MGCPEPBPMNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGCPEPBPMNG*))((::PBYTE)hIl2Cpp + MGCPEPBPMNG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MGCPEPBPMNG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
