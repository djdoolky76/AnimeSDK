#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMNPPGALEHP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IMNPPGALEHP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6B9960)
#define IMNPPGALEHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B9A00)
#define IMNPPGALEHP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6B9650)
#define IMNPPGALEHP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6B9620)
#define IMNPPGALEHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B9610)
#define IMNPPGALEHP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6B9760)
#define IMNPPGALEHP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6B9690)
#define IMNPPGALEHP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6B98C0)
#define IMNPPGALEHP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6B95D0)
#define IMNPPGALEHP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6B99B0)
#define IMNPPGALEHP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6B9980)
#define IMNPPGALEHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6B9600)
#define IMNPPGALEHP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6B98F0)
#define IMNPPGALEHP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6B9950)

inline static constexpr unsigned int IMNPPGALEHP_TypeDefinitionIndex = 31254;

	class IMNPPGALEHP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IMNPPGALEHP")->GetStaticField(0x579D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMNPPGALEHP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IMNPPGALEHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMNPPGALEHP*))((::PBYTE)hIl2Cpp + IMNPPGALEHP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMNPPGALEHP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IMNPPGALEHP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMNPPGALEHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IMNPPGALEHP* Clone()
		{
			return ((::IMNPPGALEHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMNPPGALEHP_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IMNPPGALEHP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IMNPPGALEHP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IMNPPGALEHP*))((::PBYTE)hIl2Cpp + IMNPPGALEHP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMNPPGALEHP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMNPPGALEHP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IMNPPGALEHP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMNPPGALEHP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IMNPPGALEHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMNPPGALEHP*))((::PBYTE)hIl2Cpp + IMNPPGALEHP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IMNPPGALEHP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
