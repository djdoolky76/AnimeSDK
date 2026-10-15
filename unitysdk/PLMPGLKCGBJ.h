#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLMPGLKCGBJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PLMPGLKCGBJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFA3CD0)
#define PLMPGLKCGBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFA3D70)
#define PLMPGLKCGBJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFA39C0)
#define PLMPGLKCGBJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFA3990)
#define PLMPGLKCGBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFA3980)
#define PLMPGLKCGBJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFA3AD0)
#define PLMPGLKCGBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFA3A00)
#define PLMPGLKCGBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFA3C30)
#define PLMPGLKCGBJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFA3940)
#define PLMPGLKCGBJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFA3D20)
#define PLMPGLKCGBJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFA3CF0)
#define PLMPGLKCGBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFA3970)
#define PLMPGLKCGBJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFA3C60)
#define PLMPGLKCGBJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFA3CC0)

inline static constexpr unsigned int PLMPGLKCGBJ_TypeDefinitionIndex = 27146;

	class PLMPGLKCGBJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::PLMPGLKCGBJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PLMPGLKCGBJ*>**)UnitySDK::FromName("", "PLMPGLKCGBJ")->GetStaticField(0x4C1B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMPGLKCGBJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PLMPGLKCGBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLMPGLKCGBJ*))((::PBYTE)hIl2Cpp + PLMPGLKCGBJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLMPGLKCGBJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PLMPGLKCGBJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PLMPGLKCGBJ*>*(*)())((::PBYTE)hIl2Cpp + PLMPGLKCGBJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMPGLKCGBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PLMPGLKCGBJ* Clone()
		{
			return ((::PLMPGLKCGBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMPGLKCGBJ_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PLMPGLKCGBJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PLMPGLKCGBJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PLMPGLKCGBJ*))((::PBYTE)hIl2Cpp + PLMPGLKCGBJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMPGLKCGBJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMPGLKCGBJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PLMPGLKCGBJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMPGLKCGBJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PLMPGLKCGBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLMPGLKCGBJ*))((::PBYTE)hIl2Cpp + PLMPGLKCGBJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PLMPGLKCGBJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
