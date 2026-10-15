#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALEEDHCDIAL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ALEEDHCDIAL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3D8DE0)
#define ALEEDHCDIAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3D8E80)
#define ALEEDHCDIAL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3D8AD0)
#define ALEEDHCDIAL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3D8AA0)
#define ALEEDHCDIAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D8A90)
#define ALEEDHCDIAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3D8BE0)
#define ALEEDHCDIAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3D8B10)
#define ALEEDHCDIAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3D8D40)
#define ALEEDHCDIAL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3D8A50)
#define ALEEDHCDIAL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3D8E30)
#define ALEEDHCDIAL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3D8E00)
#define ALEEDHCDIAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3D8A80)
#define ALEEDHCDIAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3D8D70)
#define ALEEDHCDIAL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3D8DD0)

inline static constexpr unsigned int ALEEDHCDIAL_TypeDefinitionIndex = 28021;

	class ALEEDHCDIAL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ALEEDHCDIAL")->GetStaticField(0x38590);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ALEEDHCDIAL_JJGHOBBFNJD_OFFSET))();
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
