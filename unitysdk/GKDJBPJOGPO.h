#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKDJBPJOGPO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GKDJBPJOGPO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4B0BB0)
#define GKDJBPJOGPO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B0DD0)
#define GKDJBPJOGPO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4B0800)
#define GKDJBPJOGPO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4B07D0)
#define GKDJBPJOGPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B07C0)
#define GKDJBPJOGPO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4B0930)
#define GKDJBPJOGPO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4B0860)
#define GKDJBPJOGPO_FHEIFCBDCFB_OFFSET UNITYSDK_OFFSET(0x1E4B0850)
#define GKDJBPJOGPO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4B0AA0)
#define GKDJBPJOGPO_JGLKJJBBBIF_OFFSET UNITYSDK_OFFSET(0x1E4B0840)
#define GKDJBPJOGPO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4B0780)
#define GKDJBPJOGPO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4B0C70)
#define GKDJBPJOGPO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4B0C40)
#define GKDJBPJOGPO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4B07B0)
#define GKDJBPJOGPO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4B0AD0)
#define GKDJBPJOGPO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4B0B30)

inline static constexpr unsigned int GKDJBPJOGPO_TypeDefinitionIndex = 27297;

	class GKDJBPJOGPO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EHCFPHJABDL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GKDJBPJOGPO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GKDJBPJOGPO*>**)UnitySDK::FromName("", "GKDJBPJOGPO")->GetStaticField(0x1CF40);
		}

		// static const ::System::Object FEGJODHHKKJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDJBPJOGPO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GKDJBPJOGPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKDJBPJOGPO*))((::PBYTE)hIl2Cpp + GKDJBPJOGPO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKDJBPJOGPO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GKDJBPJOGPO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GKDJBPJOGPO*>*(*)())((::PBYTE)hIl2Cpp + GKDJBPJOGPO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDJBPJOGPO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GKDJBPJOGPO* Clone()
		{
			return ((::GKDJBPJOGPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDJBPJOGPO_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGLKJJBBBIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDJBPJOGPO_JGLKJJBBBIF_OFFSET))(this);
		}

		::System::Void FHEIFCBDCFB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKDJBPJOGPO_FHEIFCBDCFB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GKDJBPJOGPO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GKDJBPJOGPO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKDJBPJOGPO*))((::PBYTE)hIl2Cpp + GKDJBPJOGPO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDJBPJOGPO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDJBPJOGPO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GKDJBPJOGPO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDJBPJOGPO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GKDJBPJOGPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKDJBPJOGPO*))((::PBYTE)hIl2Cpp + GKDJBPJOGPO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GKDJBPJOGPO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
