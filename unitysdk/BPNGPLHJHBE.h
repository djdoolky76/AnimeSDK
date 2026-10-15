#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPNGPLHJHBE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BPNGPLHJHBE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E021D60)
#define BPNGPLHJHBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E021F80)
#define BPNGPLHJHBE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0219B0)
#define BPNGPLHJHBE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E021980)
#define BPNGPLHJHBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E021970)
#define BPNGPLHJHBE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E021AE0)
#define BPNGPLHJHBE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E021A10)
#define BPNGPLHJHBE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E021A00)
#define BPNGPLHJHBE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E021C50)
#define BPNGPLHJHBE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E021930)
#define BPNGPLHJHBE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E021E20)
#define BPNGPLHJHBE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E021DF0)
#define BPNGPLHJHBE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E0219F0)
#define BPNGPLHJHBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E021960)
#define BPNGPLHJHBE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E021C80)
#define BPNGPLHJHBE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E021CE0)

inline static constexpr unsigned int BPNGPLHJHBE_TypeDefinitionIndex = 27892;

	class BPNGPLHJHBE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BPNGPLHJHBE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BPNGPLHJHBE*>**)UnitySDK::FromName("", "BPNGPLHJHBE")->GetStaticField(0x5F830);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNGPLHJHBE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BPNGPLHJHBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPNGPLHJHBE*))((::PBYTE)hIl2Cpp + BPNGPLHJHBE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPNGPLHJHBE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BPNGPLHJHBE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BPNGPLHJHBE*>*(*)())((::PBYTE)hIl2Cpp + BPNGPLHJHBE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNGPLHJHBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BPNGPLHJHBE* Clone()
		{
			return ((::BPNGPLHJHBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNGPLHJHBE_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNGPLHJHBE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPNGPLHJHBE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPNGPLHJHBE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BPNGPLHJHBE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPNGPLHJHBE*))((::PBYTE)hIl2Cpp + BPNGPLHJHBE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNGPLHJHBE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNGPLHJHBE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BPNGPLHJHBE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNGPLHJHBE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BPNGPLHJHBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPNGPLHJHBE*))((::PBYTE)hIl2Cpp + BPNGPLHJHBE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BPNGPLHJHBE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
