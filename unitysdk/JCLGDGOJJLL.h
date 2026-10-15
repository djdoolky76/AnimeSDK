#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCLGDGOJJLL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JCLGDGOJJLL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6D6860)
#define JCLGDGOJJLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6D6900)
#define JCLGDGOJJLL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6D6550)
#define JCLGDGOJJLL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6D6520)
#define JCLGDGOJJLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D6510)
#define JCLGDGOJJLL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6D6660)
#define JCLGDGOJJLL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6D6590)
#define JCLGDGOJJLL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6D67C0)
#define JCLGDGOJJLL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6D64D0)
#define JCLGDGOJJLL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6D68B0)
#define JCLGDGOJJLL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6D6880)
#define JCLGDGOJJLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6D6500)
#define JCLGDGOJJLL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6D67F0)
#define JCLGDGOJJLL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6D6850)

inline static constexpr unsigned int JCLGDGOJJLL_TypeDefinitionIndex = 27485;

	class JCLGDGOJJLL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::JCLGDGOJJLL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JCLGDGOJJLL*>**)UnitySDK::FromName("", "JCLGDGOJJLL")->GetStaticField(0x5A350);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLGDGOJJLL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JCLGDGOJJLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCLGDGOJJLL*))((::PBYTE)hIl2Cpp + JCLGDGOJJLL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCLGDGOJJLL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JCLGDGOJJLL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JCLGDGOJJLL*>*(*)())((::PBYTE)hIl2Cpp + JCLGDGOJJLL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLGDGOJJLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JCLGDGOJJLL* Clone()
		{
			return ((::JCLGDGOJJLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLGDGOJJLL_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCLGDGOJJLL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JCLGDGOJJLL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JCLGDGOJJLL*))((::PBYTE)hIl2Cpp + JCLGDGOJJLL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLGDGOJJLL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLGDGOJJLL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JCLGDGOJJLL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLGDGOJJLL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JCLGDGOJJLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCLGDGOJJLL*))((::PBYTE)hIl2Cpp + JCLGDGOJJLL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JCLGDGOJJLL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
