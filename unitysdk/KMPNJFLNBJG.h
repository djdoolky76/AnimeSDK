#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMPNJFLNBJG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KMPNJFLNBJG_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1FBB8C10)
#define KMPNJFLNBJG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FBB8FB0)
#define KMPNJFLNBJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBB91D0)
#define KMPNJFLNBJG_CLONE_OFFSET UNITYSDK_OFFSET(0x1FBB8BA0)
#define KMPNJFLNBJG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBB8B70)
#define KMPNJFLNBJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBB8B60)
#define KMPNJFLNBJG_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1FBB8C20)
#define KMPNJFLNBJG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FBB8D30)
#define KMPNJFLNBJG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FBB8C30)
#define KMPNJFLNBJG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FBB8EA0)
#define KMPNJFLNBJG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FBB8AF0)
#define KMPNJFLNBJG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FBB9070)
#define KMPNJFLNBJG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FBB9040)
#define KMPNJFLNBJG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FBB8B50)
#define KMPNJFLNBJG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FBB8ED0)
#define KMPNJFLNBJG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FBB8F30)

inline static constexpr unsigned int KMPNJFLNBJG_TypeDefinitionIndex = 30370;

	class KMPNJFLNBJG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NPFBAFODCBI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KMPNJFLNBJG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KMPNJFLNBJG*>**)UnitySDK::FromName("", "KMPNJFLNBJG")->GetStaticField(0x1B3C0);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMPNJFLNBJG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KMPNJFLNBJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMPNJFLNBJG*))((::PBYTE)hIl2Cpp + KMPNJFLNBJG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMPNJFLNBJG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KMPNJFLNBJG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KMPNJFLNBJG*>*(*)())((::PBYTE)hIl2Cpp + KMPNJFLNBJG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMPNJFLNBJG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KMPNJFLNBJG* Clone()
		{
			return ((::KMPNJFLNBJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMPNJFLNBJG_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMPNJFLNBJG_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMPNJFLNBJG_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMPNJFLNBJG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KMPNJFLNBJG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KMPNJFLNBJG*))((::PBYTE)hIl2Cpp + KMPNJFLNBJG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMPNJFLNBJG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMPNJFLNBJG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KMPNJFLNBJG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMPNJFLNBJG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KMPNJFLNBJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMPNJFLNBJG*))((::PBYTE)hIl2Cpp + KMPNJFLNBJG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KMPNJFLNBJG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
