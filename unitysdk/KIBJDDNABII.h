#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIBJDDNABII;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KIBJDDNABII_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8272E0)
#define KIBJDDNABII_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E827380)
#define KIBJDDNABII_CLONE_OFFSET UNITYSDK_OFFSET(0x1E826FD0)
#define KIBJDDNABII_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E826FA0)
#define KIBJDDNABII_CTOR_OFFSET UNITYSDK_OFFSET(0x1E826F90)
#define KIBJDDNABII_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8270E0)
#define KIBJDDNABII_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E827010)
#define KIBJDDNABII_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E827240)
#define KIBJDDNABII_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E826F50)
#define KIBJDDNABII_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E827330)
#define KIBJDDNABII_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E827300)
#define KIBJDDNABII_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E826F80)
#define KIBJDDNABII_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E827270)
#define KIBJDDNABII_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8272D0)

inline static constexpr unsigned int KIBJDDNABII_TypeDefinitionIndex = 26388;

	class KIBJDDNABII : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::KIBJDDNABII*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KIBJDDNABII*>**)UnitySDK::FromName("", "KIBJDDNABII")->GetStaticField(0x17B50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBJDDNABII_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KIBJDDNABII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIBJDDNABII*))((::PBYTE)hIl2Cpp + KIBJDDNABII_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIBJDDNABII_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KIBJDDNABII*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KIBJDDNABII*>*(*)())((::PBYTE)hIl2Cpp + KIBJDDNABII_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBJDDNABII_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KIBJDDNABII* Clone()
		{
			return ((::KIBJDDNABII*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBJDDNABII_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIBJDDNABII_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KIBJDDNABII* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KIBJDDNABII*))((::PBYTE)hIl2Cpp + KIBJDDNABII_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBJDDNABII_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBJDDNABII_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KIBJDDNABII_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBJDDNABII_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KIBJDDNABII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIBJDDNABII*))((::PBYTE)hIl2Cpp + KIBJDDNABII_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KIBJDDNABII_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
