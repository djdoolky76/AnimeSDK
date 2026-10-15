#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJDFPFHBFJM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AJDFPFHBFJM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3BF970)
#define AJDFPFHBFJM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3BFA10)
#define AJDFPFHBFJM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3BF610)
#define AJDFPFHBFJM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3BF5E0)
#define AJDFPFHBFJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3BF5D0)
#define AJDFPFHBFJM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3BF770)
#define AJDFPFHBFJM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3BF680)
#define AJDFPFHBFJM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3BF8D0)
#define AJDFPFHBFJM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3BF560)
#define AJDFPFHBFJM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3BF9C0)
#define AJDFPFHBFJM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3BF990)
#define AJDFPFHBFJM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3BF5C0)
#define AJDFPFHBFJM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3BF900)
#define AJDFPFHBFJM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3BF960)

inline static constexpr unsigned int AJDFPFHBFJM_TypeDefinitionIndex = 29539;

	class AJDFPFHBFJM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::AJDFPFHBFJM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AJDFPFHBFJM*>**)UnitySDK::FromName("", "AJDFPFHBFJM")->GetStaticField(0x34CF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDFPFHBFJM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AJDFPFHBFJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJDFPFHBFJM*))((::PBYTE)hIl2Cpp + AJDFPFHBFJM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJDFPFHBFJM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AJDFPFHBFJM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AJDFPFHBFJM*>*(*)())((::PBYTE)hIl2Cpp + AJDFPFHBFJM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDFPFHBFJM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AJDFPFHBFJM* Clone()
		{
			return ((::AJDFPFHBFJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDFPFHBFJM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AJDFPFHBFJM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AJDFPFHBFJM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJDFPFHBFJM*))((::PBYTE)hIl2Cpp + AJDFPFHBFJM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDFPFHBFJM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDFPFHBFJM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AJDFPFHBFJM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDFPFHBFJM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AJDFPFHBFJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJDFPFHBFJM*))((::PBYTE)hIl2Cpp + AJDFPFHBFJM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AJDFPFHBFJM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
