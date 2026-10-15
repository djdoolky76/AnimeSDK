#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJILPJOJOIF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CJILPJOJOIF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0B2DE0)
#define CJILPJOJOIF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0B2E80)
#define CJILPJOJOIF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0B2AD0)
#define CJILPJOJOIF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0B2AA0)
#define CJILPJOJOIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B2A90)
#define CJILPJOJOIF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0B2BE0)
#define CJILPJOJOIF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0B2B10)
#define CJILPJOJOIF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0B2D40)
#define CJILPJOJOIF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0B2A50)
#define CJILPJOJOIF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0B2E30)
#define CJILPJOJOIF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0B2E00)
#define CJILPJOJOIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0B2A80)
#define CJILPJOJOIF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0B2D70)
#define CJILPJOJOIF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0B2DD0)

inline static constexpr unsigned int CJILPJOJOIF_TypeDefinitionIndex = 26886;

	class CJILPJOJOIF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::CJILPJOJOIF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CJILPJOJOIF*>**)UnitySDK::FromName("", "CJILPJOJOIF")->GetStaticField(0x18590);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJILPJOJOIF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CJILPJOJOIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJILPJOJOIF*))((::PBYTE)hIl2Cpp + CJILPJOJOIF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJILPJOJOIF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CJILPJOJOIF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CJILPJOJOIF*>*(*)())((::PBYTE)hIl2Cpp + CJILPJOJOIF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJILPJOJOIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CJILPJOJOIF* Clone()
		{
			return ((::CJILPJOJOIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJILPJOJOIF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJILPJOJOIF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CJILPJOJOIF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJILPJOJOIF*))((::PBYTE)hIl2Cpp + CJILPJOJOIF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJILPJOJOIF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJILPJOJOIF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CJILPJOJOIF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJILPJOJOIF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CJILPJOJOIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJILPJOJOIF*))((::PBYTE)hIl2Cpp + CJILPJOJOIF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CJILPJOJOIF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
