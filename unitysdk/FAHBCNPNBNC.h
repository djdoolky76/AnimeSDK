#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAHBCNPNBNC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FAHBCNPNBNC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E31EE60)
#define FAHBCNPNBNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E31F080)
#define FAHBCNPNBNC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E31EA50)
#define FAHBCNPNBNC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E31EA20)
#define FAHBCNPNBNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E31EA10)
#define FAHBCNPNBNC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E31EBE0)
#define FAHBCNPNBNC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E31EAE0)
#define FAHBCNPNBNC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E31ED50)
#define FAHBCNPNBNC_IGKKCOMNCIA_OFFSET UNITYSDK_OFFSET(0x1E31EAC0)
#define FAHBCNPNBNC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E31E9A0)
#define FAHBCNPNBNC_JNFGMFKDIGO_OFFSET UNITYSDK_OFFSET(0x1E31EAD0)
#define FAHBCNPNBNC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E31EF20)
#define FAHBCNPNBNC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E31EEF0)
#define FAHBCNPNBNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E31EA00)
#define FAHBCNPNBNC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E31ED80)
#define FAHBCNPNBNC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E31EDE0)

inline static constexpr unsigned int FAHBCNPNBNC_TypeDefinitionIndex = 34852;

	class FAHBCNPNBNC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JHFLPNLAOKM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FAHBCNPNBNC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FAHBCNPNBNC*>**)UnitySDK::FromName("", "FAHBCNPNBNC")->GetStaticField(0x57610);
		}

		// static const ::System::Object JPGAHJEAJAP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHBCNPNBNC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FAHBCNPNBNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAHBCNPNBNC*))((::PBYTE)hIl2Cpp + FAHBCNPNBNC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAHBCNPNBNC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FAHBCNPNBNC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FAHBCNPNBNC*>*(*)())((::PBYTE)hIl2Cpp + FAHBCNPNBNC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHBCNPNBNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FAHBCNPNBNC* Clone()
		{
			return ((::FAHBCNPNBNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHBCNPNBNC_CLONE_OFFSET))(this);
		}

		::System::UInt32 IGKKCOMNCIA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHBCNPNBNC_IGKKCOMNCIA_OFFSET))(this);
		}

		::System::Void JNFGMFKDIGO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FAHBCNPNBNC_JNFGMFKDIGO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FAHBCNPNBNC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FAHBCNPNBNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FAHBCNPNBNC*))((::PBYTE)hIl2Cpp + FAHBCNPNBNC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHBCNPNBNC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHBCNPNBNC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FAHBCNPNBNC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHBCNPNBNC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FAHBCNPNBNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAHBCNPNBNC*))((::PBYTE)hIl2Cpp + FAHBCNPNBNC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FAHBCNPNBNC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
