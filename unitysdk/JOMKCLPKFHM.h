#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOMKCLPKFHM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JOMKCLPKFHM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F8D2A30)
#define JOMKCLPKFHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8D2C50)
#define JOMKCLPKFHM_CLONE_OFFSET UNITYSDK_OFFSET(0x1F8D2680)
#define JOMKCLPKFHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8D2650)
#define JOMKCLPKFHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8D2640)
#define JOMKCLPKFHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F8D27B0)
#define JOMKCLPKFHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F8D26E0)
#define JOMKCLPKFHM_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1F8D26C0)
#define JOMKCLPKFHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F8D2920)
#define JOMKCLPKFHM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x200149B0)
#define JOMKCLPKFHM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F8D2AF0)
#define JOMKCLPKFHM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F8D2AC0)
#define JOMKCLPKFHM_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1F8D26D0)
#define JOMKCLPKFHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x200149E0)
#define JOMKCLPKFHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F8D2950)
#define JOMKCLPKFHM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F8D29B0)

inline static constexpr unsigned int JOMKCLPKFHM_TypeDefinitionIndex = 27767;

	class JOMKCLPKFHM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OPPNMFMNMGC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JOMKCLPKFHM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JOMKCLPKFHM*>**)UnitySDK::FromName("", "JOMKCLPKFHM")->GetStaticField(0x68460);
		}

		// static const ::System::Object BOIGPPCIPFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JOMKCLPKFHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOMKCLPKFHM*))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOMKCLPKFHM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JOMKCLPKFHM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JOMKCLPKFHM*>*(*)())((::PBYTE)hIl2Cpp + JOMKCLPKFHM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JOMKCLPKFHM* Clone()
		{
			return ((::JOMKCLPKFHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_CLONE_OFFSET))(this);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JOMKCLPKFHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOMKCLPKFHM*))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JOMKCLPKFHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOMKCLPKFHM*))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
