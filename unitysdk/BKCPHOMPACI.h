#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKCPHOMPACI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BKCPHOMPACI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF22160)
#define BKCPHOMPACI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF22200)
#define BKCPHOMPACI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF21E50)
#define BKCPHOMPACI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF21E20)
#define BKCPHOMPACI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF21E10)
#define BKCPHOMPACI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF21F60)
#define BKCPHOMPACI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF21E90)
#define BKCPHOMPACI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF220C0)
#define BKCPHOMPACI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF21DD0)
#define BKCPHOMPACI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF221B0)
#define BKCPHOMPACI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF22180)
#define BKCPHOMPACI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF21E00)
#define BKCPHOMPACI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF220F0)
#define BKCPHOMPACI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF22150)

inline static constexpr unsigned int BKCPHOMPACI_TypeDefinitionIndex = 31382;

	class BKCPHOMPACI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::BKCPHOMPACI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BKCPHOMPACI*>**)UnitySDK::FromName("", "BKCPHOMPACI")->GetStaticField(0x5A270);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCPHOMPACI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BKCPHOMPACI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKCPHOMPACI*))((::PBYTE)hIl2Cpp + BKCPHOMPACI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKCPHOMPACI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BKCPHOMPACI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BKCPHOMPACI*>*(*)())((::PBYTE)hIl2Cpp + BKCPHOMPACI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCPHOMPACI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BKCPHOMPACI* Clone()
		{
			return ((::BKCPHOMPACI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCPHOMPACI_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BKCPHOMPACI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BKCPHOMPACI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BKCPHOMPACI*))((::PBYTE)hIl2Cpp + BKCPHOMPACI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCPHOMPACI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCPHOMPACI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BKCPHOMPACI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCPHOMPACI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BKCPHOMPACI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKCPHOMPACI*))((::PBYTE)hIl2Cpp + BKCPHOMPACI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BKCPHOMPACI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
