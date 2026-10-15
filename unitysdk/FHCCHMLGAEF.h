#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHCCHMLGAEF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FHCCHMLGAEF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E35A980)
#define FHCCHMLGAEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E35AA20)
#define FHCCHMLGAEF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E35A670)
#define FHCCHMLGAEF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E35A640)
#define FHCCHMLGAEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E35A630)
#define FHCCHMLGAEF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E35A780)
#define FHCCHMLGAEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E35A6B0)
#define FHCCHMLGAEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E35A8E0)
#define FHCCHMLGAEF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E35A5F0)
#define FHCCHMLGAEF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E35A9D0)
#define FHCCHMLGAEF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E35A9A0)
#define FHCCHMLGAEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E35A620)
#define FHCCHMLGAEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E35A910)
#define FHCCHMLGAEF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E35A970)

inline static constexpr unsigned int FHCCHMLGAEF_TypeDefinitionIndex = 31942;

	class FHCCHMLGAEF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::FHCCHMLGAEF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FHCCHMLGAEF*>**)UnitySDK::FromName("", "FHCCHMLGAEF")->GetStaticField(0x564F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCCHMLGAEF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FHCCHMLGAEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHCCHMLGAEF*))((::PBYTE)hIl2Cpp + FHCCHMLGAEF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHCCHMLGAEF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FHCCHMLGAEF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FHCCHMLGAEF*>*(*)())((::PBYTE)hIl2Cpp + FHCCHMLGAEF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCCHMLGAEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FHCCHMLGAEF* Clone()
		{
			return ((::FHCCHMLGAEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCCHMLGAEF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHCCHMLGAEF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FHCCHMLGAEF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHCCHMLGAEF*))((::PBYTE)hIl2Cpp + FHCCHMLGAEF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCCHMLGAEF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCCHMLGAEF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FHCCHMLGAEF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCCHMLGAEF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FHCCHMLGAEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHCCHMLGAEF*))((::PBYTE)hIl2Cpp + FHCCHMLGAEF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FHCCHMLGAEF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
