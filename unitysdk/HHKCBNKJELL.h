#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHKCBNKJELL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HHKCBNKJELL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E55C180)
#define HHKCBNKJELL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E55C220)
#define HHKCBNKJELL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E55BE70)
#define HHKCBNKJELL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E55BE40)
#define HHKCBNKJELL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E55BE30)
#define HHKCBNKJELL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E55BF80)
#define HHKCBNKJELL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E55BEB0)
#define HHKCBNKJELL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E55C0E0)
#define HHKCBNKJELL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E55BDF0)
#define HHKCBNKJELL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E55C1D0)
#define HHKCBNKJELL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E55C1A0)
#define HHKCBNKJELL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E55BE20)
#define HHKCBNKJELL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E55C110)
#define HHKCBNKJELL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E55C170)

inline static constexpr unsigned int HHKCBNKJELL_TypeDefinitionIndex = 33798;

	class HHKCBNKJELL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::HHKCBNKJELL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HHKCBNKJELL*>**)UnitySDK::FromName("", "HHKCBNKJELL")->GetStaticField(0x32340);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKCBNKJELL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HHKCBNKJELL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHKCBNKJELL*))((::PBYTE)hIl2Cpp + HHKCBNKJELL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHKCBNKJELL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HHKCBNKJELL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HHKCBNKJELL*>*(*)())((::PBYTE)hIl2Cpp + HHKCBNKJELL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKCBNKJELL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HHKCBNKJELL* Clone()
		{
			return ((::HHKCBNKJELL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKCBNKJELL_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HHKCBNKJELL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HHKCBNKJELL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HHKCBNKJELL*))((::PBYTE)hIl2Cpp + HHKCBNKJELL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKCBNKJELL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKCBNKJELL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HHKCBNKJELL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKCBNKJELL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HHKCBNKJELL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHKCBNKJELL*))((::PBYTE)hIl2Cpp + HHKCBNKJELL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HHKCBNKJELL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
