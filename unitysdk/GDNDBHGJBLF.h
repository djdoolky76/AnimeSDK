#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDNDBHGJBLF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GDNDBHGJBLF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2023AF30)
#define GDNDBHGJBLF_CCTOR_OFFSET UNITYSDK_OFFSET(0x2023B150)
#define GDNDBHGJBLF_CLONE_OFFSET UNITYSDK_OFFSET(0x2023AB20)
#define GDNDBHGJBLF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2023AAF0)
#define GDNDBHGJBLF_CTOR_OFFSET UNITYSDK_OFFSET(0x2023AAE0)
#define GDNDBHGJBLF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2023ACB0)
#define GDNDBHGJBLF_EQUALS_OFFSET UNITYSDK_OFFSET(0x2023ABB0)
#define GDNDBHGJBLF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2023AE20)
#define GDNDBHGJBLF_IKDPGIGDDDC_OFFSET UNITYSDK_OFFSET(0x2023AB90)
#define GDNDBHGJBLF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2023AA70)
#define GDNDBHGJBLF_KLCGEBLIANF_OFFSET UNITYSDK_OFFSET(0x2023ABA0)
#define GDNDBHGJBLF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2023AFF0)
#define GDNDBHGJBLF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2023AFC0)
#define GDNDBHGJBLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2023AAD0)
#define GDNDBHGJBLF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2023AE50)
#define GDNDBHGJBLF_WRITETO_OFFSET UNITYSDK_OFFSET(0x2023AEB0)

inline static constexpr unsigned int GDNDBHGJBLF_TypeDefinitionIndex = 32627;

	class GDNDBHGJBLF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BJCGANEHKEO; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GDNDBHGJBLF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GDNDBHGJBLF*>**)UnitySDK::FromName("", "GDNDBHGJBLF")->GetStaticField(0x5D260);
		}

		// static const ::System::Object AFKPGOJFAFJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GDNDBHGJBLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDNDBHGJBLF*))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDNDBHGJBLF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GDNDBHGJBLF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GDNDBHGJBLF*>*(*)())((::PBYTE)hIl2Cpp + GDNDBHGJBLF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GDNDBHGJBLF* Clone()
		{
			return ((::GDNDBHGJBLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_CLONE_OFFSET))(this);
		}

		::System::UInt32 IKDPGIGDDDC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_IKDPGIGDDDC_OFFSET))(this);
		}

		::System::Void KLCGEBLIANF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_KLCGEBLIANF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GDNDBHGJBLF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GDNDBHGJBLF*))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GDNDBHGJBLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDNDBHGJBLF*))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
