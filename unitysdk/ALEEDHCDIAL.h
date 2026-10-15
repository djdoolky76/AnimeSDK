#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALEEDHCDIAL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ALEEDHCDIAL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3AB710)
#define ALEEDHCDIAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3AB7B0)
#define ALEEDHCDIAL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3AB400)
#define ALEEDHCDIAL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3AB3D0)
#define ALEEDHCDIAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3AB3C0)
#define ALEEDHCDIAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3AB510)
#define ALEEDHCDIAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3AB440)
#define ALEEDHCDIAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3AB670)
#define ALEEDHCDIAL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3AB380)
#define ALEEDHCDIAL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3AB760)
#define ALEEDHCDIAL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3AB730)
#define ALEEDHCDIAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3AB3B0)
#define ALEEDHCDIAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3AB6A0)
#define ALEEDHCDIAL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3AB700)

inline static constexpr unsigned int ALEEDHCDIAL_TypeDefinitionIndex = 28021;

	class ALEEDHCDIAL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::ALEEDHCDIAL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ALEEDHCDIAL*>**)UnitySDK::FromName("", "ALEEDHCDIAL")->GetStaticField(0x412B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEEDHCDIAL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ALEEDHCDIAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALEEDHCDIAL*))((::PBYTE)hIl2Cpp + ALEEDHCDIAL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALEEDHCDIAL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ALEEDHCDIAL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ALEEDHCDIAL*>*(*)())((::PBYTE)hIl2Cpp + ALEEDHCDIAL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEEDHCDIAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ALEEDHCDIAL* Clone()
		{
			return ((::ALEEDHCDIAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEEDHCDIAL_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALEEDHCDIAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ALEEDHCDIAL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALEEDHCDIAL*))((::PBYTE)hIl2Cpp + ALEEDHCDIAL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEEDHCDIAL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEEDHCDIAL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ALEEDHCDIAL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEEDHCDIAL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ALEEDHCDIAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALEEDHCDIAL*))((::PBYTE)hIl2Cpp + ALEEDHCDIAL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ALEEDHCDIAL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
