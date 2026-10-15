#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDEFINBJPAG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NDEFINBJPAG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAB8400)
#define NDEFINBJPAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAB8620)
#define NDEFINBJPAG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAB8050)
#define NDEFINBJPAG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAB8020)
#define NDEFINBJPAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB8010)
#define NDEFINBJPAG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAB8180)
#define NDEFINBJPAG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAB80B0)
#define NDEFINBJPAG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAB82F0)
#define NDEFINBJPAG_IDFPOJEAHHL_OFFSET UNITYSDK_OFFSET(0x1EAB80A0)
#define NDEFINBJPAG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAB7FD0)
#define NDEFINBJPAG_JKKFGIDGBCO_OFFSET UNITYSDK_OFFSET(0x1EAB8090)
#define NDEFINBJPAG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAB84C0)
#define NDEFINBJPAG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAB8490)
#define NDEFINBJPAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAB8000)
#define NDEFINBJPAG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAB8320)
#define NDEFINBJPAG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAB8380)

inline static constexpr unsigned int NDEFINBJPAG_TypeDefinitionIndex = 28092;

	class NDEFINBJPAG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FBNENCHBKPP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NDEFINBJPAG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NDEFINBJPAG*>**)UnitySDK::FromName("", "NDEFINBJPAG")->GetStaticField(0x5F750);
		}

		// static const ::System::Object ADJKBKAGGHO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEFINBJPAG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NDEFINBJPAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDEFINBJPAG*))((::PBYTE)hIl2Cpp + NDEFINBJPAG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDEFINBJPAG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NDEFINBJPAG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NDEFINBJPAG*>*(*)())((::PBYTE)hIl2Cpp + NDEFINBJPAG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEFINBJPAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NDEFINBJPAG* Clone()
		{
			return ((::NDEFINBJPAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEFINBJPAG_CLONE_OFFSET))(this);
		}

		::System::UInt32 JKKFGIDGBCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEFINBJPAG_JKKFGIDGBCO_OFFSET))(this);
		}

		::System::Void IDFPOJEAHHL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDEFINBJPAG_IDFPOJEAHHL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NDEFINBJPAG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NDEFINBJPAG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NDEFINBJPAG*))((::PBYTE)hIl2Cpp + NDEFINBJPAG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEFINBJPAG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEFINBJPAG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NDEFINBJPAG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEFINBJPAG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NDEFINBJPAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDEFINBJPAG*))((::PBYTE)hIl2Cpp + NDEFINBJPAG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NDEFINBJPAG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
