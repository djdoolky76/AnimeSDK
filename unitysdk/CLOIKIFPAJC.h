#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLOIKIFPAJC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CLOIKIFPAJC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0D0420)
#define CLOIKIFPAJC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D04C0)
#define CLOIKIFPAJC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0D0110)
#define CLOIKIFPAJC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0D00E0)
#define CLOIKIFPAJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D00D0)
#define CLOIKIFPAJC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0D0220)
#define CLOIKIFPAJC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0D0150)
#define CLOIKIFPAJC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0D0380)
#define CLOIKIFPAJC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0D0090)
#define CLOIKIFPAJC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0D0470)
#define CLOIKIFPAJC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0D0440)
#define CLOIKIFPAJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0D00C0)
#define CLOIKIFPAJC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0D03B0)
#define CLOIKIFPAJC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0D0410)

inline static constexpr unsigned int CLOIKIFPAJC_TypeDefinitionIndex = 31481;

	class CLOIKIFPAJC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::CLOIKIFPAJC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CLOIKIFPAJC*>**)UnitySDK::FromName("", "CLOIKIFPAJC")->GetStaticField(0x1BA10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOIKIFPAJC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CLOIKIFPAJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLOIKIFPAJC*))((::PBYTE)hIl2Cpp + CLOIKIFPAJC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLOIKIFPAJC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CLOIKIFPAJC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CLOIKIFPAJC*>*(*)())((::PBYTE)hIl2Cpp + CLOIKIFPAJC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOIKIFPAJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CLOIKIFPAJC* Clone()
		{
			return ((::CLOIKIFPAJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOIKIFPAJC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLOIKIFPAJC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CLOIKIFPAJC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CLOIKIFPAJC*))((::PBYTE)hIl2Cpp + CLOIKIFPAJC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOIKIFPAJC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOIKIFPAJC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLOIKIFPAJC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOIKIFPAJC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CLOIKIFPAJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLOIKIFPAJC*))((::PBYTE)hIl2Cpp + CLOIKIFPAJC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLOIKIFPAJC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
