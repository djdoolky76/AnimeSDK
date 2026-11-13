#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICJOOGHDGDC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ICJOOGHDGDC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2012DC90)
#define ICJOOGHDGDC_CCTOR_OFFSET UNITYSDK_OFFSET(0x2012DD30)
#define ICJOOGHDGDC_CLONE_OFFSET UNITYSDK_OFFSET(0x2012D930)
#define ICJOOGHDGDC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2012D900)
#define ICJOOGHDGDC_CTOR_OFFSET UNITYSDK_OFFSET(0x2012D8F0)
#define ICJOOGHDGDC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2012DA90)
#define ICJOOGHDGDC_EQUALS_OFFSET UNITYSDK_OFFSET(0x2012D9A0)
#define ICJOOGHDGDC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2012DBF0)
#define ICJOOGHDGDC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2012D880)
#define ICJOOGHDGDC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2012DCE0)
#define ICJOOGHDGDC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2012DCB0)
#define ICJOOGHDGDC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2012D8E0)
#define ICJOOGHDGDC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2012DC20)
#define ICJOOGHDGDC_WRITETO_OFFSET UNITYSDK_OFFSET(0x2012DC80)

inline static constexpr unsigned int ICJOOGHDGDC_TypeDefinitionIndex = 30013;

	class ICJOOGHDGDC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::ICJOOGHDGDC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ICJOOGHDGDC*>**)UnitySDK::FromName("", "ICJOOGHDGDC")->GetStaticField(0x48E60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJOOGHDGDC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ICJOOGHDGDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICJOOGHDGDC*))((::PBYTE)hIl2Cpp + ICJOOGHDGDC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICJOOGHDGDC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ICJOOGHDGDC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ICJOOGHDGDC*>*(*)())((::PBYTE)hIl2Cpp + ICJOOGHDGDC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJOOGHDGDC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ICJOOGHDGDC* Clone()
		{
			return ((::ICJOOGHDGDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJOOGHDGDC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ICJOOGHDGDC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ICJOOGHDGDC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ICJOOGHDGDC*))((::PBYTE)hIl2Cpp + ICJOOGHDGDC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJOOGHDGDC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJOOGHDGDC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ICJOOGHDGDC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJOOGHDGDC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ICJOOGHDGDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICJOOGHDGDC*))((::PBYTE)hIl2Cpp + ICJOOGHDGDC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ICJOOGHDGDC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
