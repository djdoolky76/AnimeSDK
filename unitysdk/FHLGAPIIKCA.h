#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHLGAPIIKCA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FHLGAPIIKCA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3625A0)
#define FHLGAPIIKCA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E362640)
#define FHLGAPIIKCA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E362290)
#define FHLGAPIIKCA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E362260)
#define FHLGAPIIKCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E362250)
#define FHLGAPIIKCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3623A0)
#define FHLGAPIIKCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3622D0)
#define FHLGAPIIKCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E362500)
#define FHLGAPIIKCA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E362210)
#define FHLGAPIIKCA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3625F0)
#define FHLGAPIIKCA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3625C0)
#define FHLGAPIIKCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E362240)
#define FHLGAPIIKCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E362530)
#define FHLGAPIIKCA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E362590)

inline static constexpr unsigned int FHLGAPIIKCA_TypeDefinitionIndex = 34123;

	class FHLGAPIIKCA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::FHLGAPIIKCA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FHLGAPIIKCA*>**)UnitySDK::FromName("", "FHLGAPIIKCA")->GetStaticField(0x56E20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLGAPIIKCA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FHLGAPIIKCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHLGAPIIKCA*))((::PBYTE)hIl2Cpp + FHLGAPIIKCA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHLGAPIIKCA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FHLGAPIIKCA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FHLGAPIIKCA*>*(*)())((::PBYTE)hIl2Cpp + FHLGAPIIKCA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLGAPIIKCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FHLGAPIIKCA* Clone()
		{
			return ((::FHLGAPIIKCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLGAPIIKCA_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHLGAPIIKCA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FHLGAPIIKCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHLGAPIIKCA*))((::PBYTE)hIl2Cpp + FHLGAPIIKCA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLGAPIIKCA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLGAPIIKCA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FHLGAPIIKCA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLGAPIIKCA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FHLGAPIIKCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHLGAPIIKCA*))((::PBYTE)hIl2Cpp + FHLGAPIIKCA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FHLGAPIIKCA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
