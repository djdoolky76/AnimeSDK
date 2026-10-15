#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMFKFGCBJBP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EMFKFGCBJBP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2B3250)
#define EMFKFGCBJBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B32F0)
#define EMFKFGCBJBP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2B2F40)
#define EMFKFGCBJBP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2B2F10)
#define EMFKFGCBJBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B2F00)
#define EMFKFGCBJBP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2B3050)
#define EMFKFGCBJBP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2B2F80)
#define EMFKFGCBJBP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2B31B0)
#define EMFKFGCBJBP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2B2EC0)
#define EMFKFGCBJBP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2B32A0)
#define EMFKFGCBJBP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2B3270)
#define EMFKFGCBJBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2B2EF0)
#define EMFKFGCBJBP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2B31E0)
#define EMFKFGCBJBP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2B3240)

inline static constexpr unsigned int EMFKFGCBJBP_TypeDefinitionIndex = 32169;

	class EMFKFGCBJBP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::EMFKFGCBJBP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EMFKFGCBJBP*>**)UnitySDK::FromName("", "EMFKFGCBJBP")->GetStaticField(0x43290);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFKFGCBJBP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EMFKFGCBJBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMFKFGCBJBP*))((::PBYTE)hIl2Cpp + EMFKFGCBJBP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMFKFGCBJBP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EMFKFGCBJBP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EMFKFGCBJBP*>*(*)())((::PBYTE)hIl2Cpp + EMFKFGCBJBP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFKFGCBJBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EMFKFGCBJBP* Clone()
		{
			return ((::EMFKFGCBJBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFKFGCBJBP_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMFKFGCBJBP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EMFKFGCBJBP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EMFKFGCBJBP*))((::PBYTE)hIl2Cpp + EMFKFGCBJBP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFKFGCBJBP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFKFGCBJBP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EMFKFGCBJBP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFKFGCBJBP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EMFKFGCBJBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMFKFGCBJBP*))((::PBYTE)hIl2Cpp + EMFKFGCBJBP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EMFKFGCBJBP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
