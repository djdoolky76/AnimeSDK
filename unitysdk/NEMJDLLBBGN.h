#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMBBHFNJILI;
class NEMJDLLBBGN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NEMJDLLBBGN_AONMKBBPNJP_OFFSET UNITYSDK_OFFSET(0x1EAD0610)
#define NEMJDLLBBGN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAD0C00)
#define NEMJDLLBBGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAD0EF0)
#define NEMJDLLBBGN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAD05C0)
#define NEMJDLLBBGN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAD04A0)
#define NEMJDLLBBGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD0450)
#define NEMJDLLBBGN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAD07C0)
#define NEMJDLLBBGN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAD0620)
#define NEMJDLLBBGN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAD0960)
#define NEMJDLLBBGN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAD0410)
#define NEMJDLLBBGN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAD0D20)
#define NEMJDLLBBGN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAD0CA0)
#define NEMJDLLBBGN_NGIIMFAECGG_OFFSET UNITYSDK_OFFSET(0x1EAD0600)
#define NEMJDLLBBGN_OFOEOCIPKFK_OFFSET UNITYSDK_OFFSET(0x1EAD05F0)
#define NEMJDLLBBGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAD0440)
#define NEMJDLLBBGN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAD0AC0)
#define NEMJDLLBBGN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAD0B20)

inline static constexpr unsigned int NEMJDLLBBGN_TypeDefinitionIndex = 33093;

	class NEMJDLLBBGN : public ::System::Object
	{
	public:
		::MMBBHFNJILI* FIIMNKHCEMN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ODOKFLGMOEK; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NEMJDLLBBGN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NEMJDLLBBGN*>**)UnitySDK::FromName("", "NEMJDLLBBGN")->GetStaticField(0x62CD0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PKCGJNOAPBE()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NEMJDLLBBGN")->GetStaticField(0x62CD8);
		}

		// static const ::System::Object AEBDCJLPGOA; // 0x0
		// static const ::System::Object GOGLCJEPJBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NEMJDLLBBGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEMJDLLBBGN*))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEMJDLLBBGN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NEMJDLLBBGN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NEMJDLLBBGN*>*(*)())((::PBYTE)hIl2Cpp + NEMJDLLBBGN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NEMJDLLBBGN* Clone()
		{
			return ((::NEMJDLLBBGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OFOEOCIPKFK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_OFOEOCIPKFK_OFFSET))(this);
		}

		::MMBBHFNJILI* NGIIMFAECGG()
		{
			return ((::MMBBHFNJILI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_NGIIMFAECGG_OFFSET))(this);
		}

		::System::Void AONMKBBPNJP(::MMBBHFNJILI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMBBHFNJILI*))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_AONMKBBPNJP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NEMJDLLBBGN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NEMJDLLBBGN*))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NEMJDLLBBGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEMJDLLBBGN*))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
