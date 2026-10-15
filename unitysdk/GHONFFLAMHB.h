#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHONFFLAMHB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GHONFFLAMHB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E490C40)
#define GHONFFLAMHB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E490E60)
#define GHONFFLAMHB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E490890)
#define GHONFFLAMHB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E490860)
#define GHONFFLAMHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E490850)
#define GHONFFLAMHB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4909C0)
#define GHONFFLAMHB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4908F0)
#define GHONFFLAMHB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E490B30)
#define GHONFFLAMHB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E490810)
#define GHONFFLAMHB_LKBKNGLMAMN_OFFSET UNITYSDK_OFFSET(0x1E4908D0)
#define GHONFFLAMHB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E490D00)
#define GHONFFLAMHB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E490CD0)
#define GHONFFLAMHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E490840)
#define GHONFFLAMHB_PNJCLMCJHBE_OFFSET UNITYSDK_OFFSET(0x1E4908E0)
#define GHONFFLAMHB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E490B60)
#define GHONFFLAMHB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E490BC0)

inline static constexpr unsigned int GHONFFLAMHB_TypeDefinitionIndex = 31952;

	class GHONFFLAMHB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HJPCMINMFBI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GHONFFLAMHB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GHONFFLAMHB*>**)UnitySDK::FromName("", "GHONFFLAMHB")->GetStaticField(0x18660);
		}

		// static const ::System::Object ACLGGLDCAEC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHONFFLAMHB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GHONFFLAMHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHONFFLAMHB*))((::PBYTE)hIl2Cpp + GHONFFLAMHB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHONFFLAMHB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GHONFFLAMHB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GHONFFLAMHB*>*(*)())((::PBYTE)hIl2Cpp + GHONFFLAMHB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHONFFLAMHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GHONFFLAMHB* Clone()
		{
			return ((::GHONFFLAMHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHONFFLAMHB_CLONE_OFFSET))(this);
		}

		::System::UInt32 LKBKNGLMAMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHONFFLAMHB_LKBKNGLMAMN_OFFSET))(this);
		}

		::System::Void PNJCLMCJHBE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHONFFLAMHB_PNJCLMCJHBE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHONFFLAMHB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GHONFFLAMHB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHONFFLAMHB*))((::PBYTE)hIl2Cpp + GHONFFLAMHB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHONFFLAMHB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHONFFLAMHB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GHONFFLAMHB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHONFFLAMHB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GHONFFLAMHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHONFFLAMHB*))((::PBYTE)hIl2Cpp + GHONFFLAMHB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GHONFFLAMHB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
