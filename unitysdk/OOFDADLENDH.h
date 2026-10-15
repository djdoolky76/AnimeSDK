#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOFDADLENDH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OOFDADLENDH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEAA510)
#define OOFDADLENDH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEAA5B0)
#define OOFDADLENDH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEAA200)
#define OOFDADLENDH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEAA1D0)
#define OOFDADLENDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEAA1C0)
#define OOFDADLENDH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEAA310)
#define OOFDADLENDH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEAA240)
#define OOFDADLENDH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEAA470)
#define OOFDADLENDH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEAA180)
#define OOFDADLENDH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEAA560)
#define OOFDADLENDH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEAA530)
#define OOFDADLENDH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEAA1B0)
#define OOFDADLENDH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEAA4A0)
#define OOFDADLENDH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEAA500)

inline static constexpr unsigned int OOFDADLENDH_TypeDefinitionIndex = 34013;

	class OOFDADLENDH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::OOFDADLENDH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OOFDADLENDH*>**)UnitySDK::FromName("", "OOFDADLENDH")->GetStaticField(0x29FA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFDADLENDH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OOFDADLENDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOFDADLENDH*))((::PBYTE)hIl2Cpp + OOFDADLENDH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOFDADLENDH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OOFDADLENDH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OOFDADLENDH*>*(*)())((::PBYTE)hIl2Cpp + OOFDADLENDH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFDADLENDH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OOFDADLENDH* Clone()
		{
			return ((::OOFDADLENDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFDADLENDH_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OOFDADLENDH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OOFDADLENDH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OOFDADLENDH*))((::PBYTE)hIl2Cpp + OOFDADLENDH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFDADLENDH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFDADLENDH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OOFDADLENDH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFDADLENDH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OOFDADLENDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOFDADLENDH*))((::PBYTE)hIl2Cpp + OOFDADLENDH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OOFDADLENDH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
