#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJEJCMECDDN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MJEJCMECDDN_BPKBAJOMHDN_OFFSET UNITYSDK_OFFSET(0x1FD993F0)
#define MJEJCMECDDN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD99760)
#define MJEJCMECDDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD99980)
#define MJEJCMECDDN_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD993B0)
#define MJEJCMECDDN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD99380)
#define MJEJCMECDDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD99370)
#define MJEJCMECDDN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD994E0)
#define MJEJCMECDDN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD99410)
#define MJEJCMECDDN_FNCFPCHMKEN_OFFSET UNITYSDK_OFFSET(0x1FD99400)
#define MJEJCMECDDN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD99650)
#define MJEJCMECDDN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD99330)
#define MJEJCMECDDN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD99820)
#define MJEJCMECDDN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD997F0)
#define MJEJCMECDDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD99360)
#define MJEJCMECDDN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD99680)
#define MJEJCMECDDN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD996E0)

inline static constexpr unsigned int MJEJCMECDDN_TypeDefinitionIndex = 31064;

	class MJEJCMECDDN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IFDJOMHDIKL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MJEJCMECDDN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MJEJCMECDDN*>**)UnitySDK::FromName("", "MJEJCMECDDN")->GetStaticField(0x59F40);
		}

		// static const ::System::Object FIBNFGLHBJJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEJCMECDDN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MJEJCMECDDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJEJCMECDDN*))((::PBYTE)hIl2Cpp + MJEJCMECDDN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJEJCMECDDN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MJEJCMECDDN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MJEJCMECDDN*>*(*)())((::PBYTE)hIl2Cpp + MJEJCMECDDN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEJCMECDDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MJEJCMECDDN* Clone()
		{
			return ((::MJEJCMECDDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEJCMECDDN_CLONE_OFFSET))(this);
		}

		::System::UInt32 BPKBAJOMHDN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEJCMECDDN_BPKBAJOMHDN_OFFSET))(this);
		}

		::System::Void FNCFPCHMKEN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MJEJCMECDDN_FNCFPCHMKEN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJEJCMECDDN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MJEJCMECDDN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MJEJCMECDDN*))((::PBYTE)hIl2Cpp + MJEJCMECDDN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEJCMECDDN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEJCMECDDN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MJEJCMECDDN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEJCMECDDN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MJEJCMECDDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJEJCMECDDN*))((::PBYTE)hIl2Cpp + MJEJCMECDDN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MJEJCMECDDN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
