#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAKMNFLCCMJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DAKMNFLCCMJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x202A8BC0)
#define DAKMNFLCCMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x202A8DE0)
#define DAKMNFLCCMJ_CLONE_OFFSET UNITYSDK_OFFSET(0x202A8810)
#define DAKMNFLCCMJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x202A87E0)
#define DAKMNFLCCMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x202A87D0)
#define DAKMNFLCCMJ_DECLCLGGOGD_OFFSET UNITYSDK_OFFSET(0x202A8860)
#define DAKMNFLCCMJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x202A8940)
#define DAKMNFLCCMJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x202A8870)
#define DAKMNFLCCMJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x202A8AB0)
#define DAKMNFLCCMJ_HOFJNIJMEGJ_OFFSET UNITYSDK_OFFSET(0x202A8850)
#define DAKMNFLCCMJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x202A8790)
#define DAKMNFLCCMJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x202A8C80)
#define DAKMNFLCCMJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x202A8C50)
#define DAKMNFLCCMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x202A87C0)
#define DAKMNFLCCMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x202A8AE0)
#define DAKMNFLCCMJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x202A8B40)

inline static constexpr unsigned int DAKMNFLCCMJ_TypeDefinitionIndex = 35674;

	class DAKMNFLCCMJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OEHAKOKDOAA; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DAKMNFLCCMJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DAKMNFLCCMJ*>**)UnitySDK::FromName("", "DAKMNFLCCMJ")->GetStaticField(0x1BBE0);
		}

		// static const ::System::Object HBFMDPBHHHE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKMNFLCCMJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DAKMNFLCCMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAKMNFLCCMJ*))((::PBYTE)hIl2Cpp + DAKMNFLCCMJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAKMNFLCCMJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DAKMNFLCCMJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DAKMNFLCCMJ*>*(*)())((::PBYTE)hIl2Cpp + DAKMNFLCCMJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKMNFLCCMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DAKMNFLCCMJ* Clone()
		{
			return ((::DAKMNFLCCMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKMNFLCCMJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 HOFJNIJMEGJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKMNFLCCMJ_HOFJNIJMEGJ_OFFSET))(this);
		}

		::System::Void DECLCLGGOGD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DAKMNFLCCMJ_DECLCLGGOGD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DAKMNFLCCMJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DAKMNFLCCMJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DAKMNFLCCMJ*))((::PBYTE)hIl2Cpp + DAKMNFLCCMJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKMNFLCCMJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKMNFLCCMJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DAKMNFLCCMJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKMNFLCCMJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DAKMNFLCCMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAKMNFLCCMJ*))((::PBYTE)hIl2Cpp + DAKMNFLCCMJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DAKMNFLCCMJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
