#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEBMBMMMCGG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DEBMBMMMCGG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E18F550)
#define DEBMBMMMCGG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E18F5F0)
#define DEBMBMMMCGG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E18F240)
#define DEBMBMMMCGG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E18F210)
#define DEBMBMMMCGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E18F200)
#define DEBMBMMMCGG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E18F350)
#define DEBMBMMMCGG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E18F280)
#define DEBMBMMMCGG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E18F4B0)
#define DEBMBMMMCGG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E18F1C0)
#define DEBMBMMMCGG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E18F5A0)
#define DEBMBMMMCGG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E18F570)
#define DEBMBMMMCGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E18F1F0)
#define DEBMBMMMCGG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E18F4E0)
#define DEBMBMMMCGG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E18F540)

inline static constexpr unsigned int DEBMBMMMCGG_TypeDefinitionIndex = 33782;

	class DEBMBMMMCGG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::DEBMBMMMCGG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DEBMBMMMCGG*>**)UnitySDK::FromName("", "DEBMBMMMCGG")->GetStaticField(0x30390);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBMBMMMCGG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DEBMBMMMCGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEBMBMMMCGG*))((::PBYTE)hIl2Cpp + DEBMBMMMCGG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEBMBMMMCGG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DEBMBMMMCGG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DEBMBMMMCGG*>*(*)())((::PBYTE)hIl2Cpp + DEBMBMMMCGG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBMBMMMCGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DEBMBMMMCGG* Clone()
		{
			return ((::DEBMBMMMCGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBMBMMMCGG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEBMBMMMCGG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DEBMBMMMCGG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEBMBMMMCGG*))((::PBYTE)hIl2Cpp + DEBMBMMMCGG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBMBMMMCGG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBMBMMMCGG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DEBMBMMMCGG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBMBMMMCGG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DEBMBMMMCGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEBMBMMMCGG*))((::PBYTE)hIl2Cpp + DEBMBMMMCGG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DEBMBMMMCGG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
