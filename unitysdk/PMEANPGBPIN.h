#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMEANPGBPIN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PMEANPGBPIN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFA9C70)
#define PMEANPGBPIN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFA9D10)
#define PMEANPGBPIN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFA9960)
#define PMEANPGBPIN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFA9930)
#define PMEANPGBPIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFA9920)
#define PMEANPGBPIN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFA9A70)
#define PMEANPGBPIN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFA99A0)
#define PMEANPGBPIN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFA9BD0)
#define PMEANPGBPIN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFA98E0)
#define PMEANPGBPIN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFA9CC0)
#define PMEANPGBPIN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFA9C90)
#define PMEANPGBPIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFA9910)
#define PMEANPGBPIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFA9C00)
#define PMEANPGBPIN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFA9C60)

inline static constexpr unsigned int PMEANPGBPIN_TypeDefinitionIndex = 34158;

	class PMEANPGBPIN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::PMEANPGBPIN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PMEANPGBPIN*>**)UnitySDK::FromName("", "PMEANPGBPIN")->GetStaticField(0x4D1E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEANPGBPIN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PMEANPGBPIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMEANPGBPIN*))((::PBYTE)hIl2Cpp + PMEANPGBPIN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMEANPGBPIN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PMEANPGBPIN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PMEANPGBPIN*>*(*)())((::PBYTE)hIl2Cpp + PMEANPGBPIN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEANPGBPIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PMEANPGBPIN* Clone()
		{
			return ((::PMEANPGBPIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEANPGBPIN_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMEANPGBPIN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PMEANPGBPIN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PMEANPGBPIN*))((::PBYTE)hIl2Cpp + PMEANPGBPIN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEANPGBPIN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEANPGBPIN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PMEANPGBPIN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEANPGBPIN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PMEANPGBPIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMEANPGBPIN*))((::PBYTE)hIl2Cpp + PMEANPGBPIN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PMEANPGBPIN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
