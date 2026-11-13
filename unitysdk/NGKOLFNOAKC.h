#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGKOLFNOAKC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NGKOLFNOAKC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20404CD0)
#define NGKOLFNOAKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x20404D70)
#define NGKOLFNOAKC_CLONE_OFFSET UNITYSDK_OFFSET(0x204049C0)
#define NGKOLFNOAKC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20404990)
#define NGKOLFNOAKC_CTOR_OFFSET UNITYSDK_OFFSET(0x20404980)
#define NGKOLFNOAKC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20404AD0)
#define NGKOLFNOAKC_EQUALS_OFFSET UNITYSDK_OFFSET(0x20404A00)
#define NGKOLFNOAKC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20404C30)
#define NGKOLFNOAKC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20404940)
#define NGKOLFNOAKC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20404D20)
#define NGKOLFNOAKC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20404CF0)
#define NGKOLFNOAKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20404970)
#define NGKOLFNOAKC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20404C60)
#define NGKOLFNOAKC_WRITETO_OFFSET UNITYSDK_OFFSET(0x20404CC0)

inline static constexpr unsigned int NGKOLFNOAKC_TypeDefinitionIndex = 33436;

	class NGKOLFNOAKC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::NGKOLFNOAKC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NGKOLFNOAKC*>**)UnitySDK::FromName("", "NGKOLFNOAKC")->GetStaticField(0x60500);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKOLFNOAKC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NGKOLFNOAKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGKOLFNOAKC*))((::PBYTE)hIl2Cpp + NGKOLFNOAKC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGKOLFNOAKC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NGKOLFNOAKC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NGKOLFNOAKC*>*(*)())((::PBYTE)hIl2Cpp + NGKOLFNOAKC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKOLFNOAKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NGKOLFNOAKC* Clone()
		{
			return ((::NGKOLFNOAKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKOLFNOAKC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGKOLFNOAKC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NGKOLFNOAKC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGKOLFNOAKC*))((::PBYTE)hIl2Cpp + NGKOLFNOAKC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKOLFNOAKC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKOLFNOAKC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NGKOLFNOAKC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKOLFNOAKC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NGKOLFNOAKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGKOLFNOAKC*))((::PBYTE)hIl2Cpp + NGKOLFNOAKC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NGKOLFNOAKC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
