#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNKEEAKFEHM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LNKEEAKFEHM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9B5840)
#define LNKEEAKFEHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9B58E0)
#define LNKEEAKFEHM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9B5530)
#define LNKEEAKFEHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9B5500)
#define LNKEEAKFEHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9B54F0)
#define LNKEEAKFEHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9B5640)
#define LNKEEAKFEHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9B5570)
#define LNKEEAKFEHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9B57A0)
#define LNKEEAKFEHM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9B54B0)
#define LNKEEAKFEHM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9B5890)
#define LNKEEAKFEHM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9B5860)
#define LNKEEAKFEHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9B54E0)
#define LNKEEAKFEHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9B57D0)
#define LNKEEAKFEHM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9B5830)

inline static constexpr unsigned int LNKEEAKFEHM_TypeDefinitionIndex = 32944;

	class LNKEEAKFEHM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::LNKEEAKFEHM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LNKEEAKFEHM*>**)UnitySDK::FromName("", "LNKEEAKFEHM")->GetStaticField(0x502D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKEEAKFEHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LNKEEAKFEHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNKEEAKFEHM*))((::PBYTE)hIl2Cpp + LNKEEAKFEHM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNKEEAKFEHM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LNKEEAKFEHM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LNKEEAKFEHM*>*(*)())((::PBYTE)hIl2Cpp + LNKEEAKFEHM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKEEAKFEHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LNKEEAKFEHM* Clone()
		{
			return ((::LNKEEAKFEHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKEEAKFEHM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LNKEEAKFEHM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LNKEEAKFEHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LNKEEAKFEHM*))((::PBYTE)hIl2Cpp + LNKEEAKFEHM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKEEAKFEHM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKEEAKFEHM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LNKEEAKFEHM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKEEAKFEHM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LNKEEAKFEHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNKEEAKFEHM*))((::PBYTE)hIl2Cpp + LNKEEAKFEHM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LNKEEAKFEHM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
