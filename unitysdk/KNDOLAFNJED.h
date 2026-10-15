#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNDOLAFNJED;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KNDOLAFNJED_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8A0A20)
#define KNDOLAFNJED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A0AC0)
#define KNDOLAFNJED_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8A0710)
#define KNDOLAFNJED_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8A06E0)
#define KNDOLAFNJED_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A06D0)
#define KNDOLAFNJED_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8A0820)
#define KNDOLAFNJED_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8A0750)
#define KNDOLAFNJED_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8A0980)
#define KNDOLAFNJED_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8A0690)
#define KNDOLAFNJED_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8A0A70)
#define KNDOLAFNJED_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8A0A40)
#define KNDOLAFNJED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8A06C0)
#define KNDOLAFNJED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8A09B0)
#define KNDOLAFNJED_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8A0A10)

inline static constexpr unsigned int KNDOLAFNJED_TypeDefinitionIndex = 29348;

	class KNDOLAFNJED : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::KNDOLAFNJED*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KNDOLAFNJED*>**)UnitySDK::FromName("", "KNDOLAFNJED")->GetStaticField(0x237B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDOLAFNJED_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KNDOLAFNJED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNDOLAFNJED*))((::PBYTE)hIl2Cpp + KNDOLAFNJED_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNDOLAFNJED_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KNDOLAFNJED*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KNDOLAFNJED*>*(*)())((::PBYTE)hIl2Cpp + KNDOLAFNJED_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDOLAFNJED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KNDOLAFNJED* Clone()
		{
			return ((::KNDOLAFNJED*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDOLAFNJED_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KNDOLAFNJED_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KNDOLAFNJED* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KNDOLAFNJED*))((::PBYTE)hIl2Cpp + KNDOLAFNJED_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDOLAFNJED_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDOLAFNJED_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KNDOLAFNJED_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDOLAFNJED_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KNDOLAFNJED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNDOLAFNJED*))((::PBYTE)hIl2Cpp + KNDOLAFNJED_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KNDOLAFNJED_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
