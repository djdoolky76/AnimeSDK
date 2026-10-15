#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOHMAHDOBDO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MOHMAHDOBDO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAAAB80)
#define MOHMAHDOBDO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAAAE50)
#define MOHMAHDOBDO_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAAA780)
#define MOHMAHDOBDO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAAA750)
#define MOHMAHDOBDO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAAA740)
#define MOHMAHDOBDO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAAA940)
#define MOHMAHDOBDO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAAA830)
#define MOHMAHDOBDO_FBAECBLFAPN_OFFSET UNITYSDK_OFFSET(0x1EAAA800)
#define MOHMAHDOBDO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAAAA10)
#define MOHMAHDOBDO_IJJIFLHMOJO_OFFSET UNITYSDK_OFFSET(0x1EAAA820)
#define MOHMAHDOBDO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAAA6D0)
#define MOHMAHDOBDO_LKEFCMNJDJI_OFFSET UNITYSDK_OFFSET(0x1EAAA810)
#define MOHMAHDOBDO_MCBCFIIFIND_OFFSET UNITYSDK_OFFSET(0x1EAAA7F0)
#define MOHMAHDOBDO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAAACD0)
#define MOHMAHDOBDO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAAAC90)
#define MOHMAHDOBDO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAAA730)
#define MOHMAHDOBDO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAAAA40)
#define MOHMAHDOBDO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAAAAA0)

inline static constexpr unsigned int MOHMAHDOBDO_TypeDefinitionIndex = 25431;

	class MOHMAHDOBDO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OKBOBKJOMNG; // 0x18
		::System::UInt32 LBGAHMGMMBC; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::MOHMAHDOBDO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MOHMAHDOBDO*>**)UnitySDK::FromName("", "MOHMAHDOBDO")->GetStaticField(0x42E70);
		}

		// static const ::System::Object BFKIADMBMJF; // 0x0
		// static const ::System::Object FLCCOJOLOKO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHMAHDOBDO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MOHMAHDOBDO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOHMAHDOBDO*))((::PBYTE)hIl2Cpp + MOHMAHDOBDO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOHMAHDOBDO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MOHMAHDOBDO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MOHMAHDOBDO*>*(*)())((::PBYTE)hIl2Cpp + MOHMAHDOBDO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHMAHDOBDO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MOHMAHDOBDO* Clone()
		{
			return ((::MOHMAHDOBDO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHMAHDOBDO_CLONE_OFFSET))(this);
		}

		::System::UInt32 MCBCFIIFIND()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHMAHDOBDO_MCBCFIIFIND_OFFSET))(this);
		}

		::System::Void FBAECBLFAPN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOHMAHDOBDO_FBAECBLFAPN_OFFSET))(this, a1);
		}

		::System::UInt32 LKEFCMNJDJI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHMAHDOBDO_LKEFCMNJDJI_OFFSET))(this);
		}

		::System::Void IJJIFLHMOJO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOHMAHDOBDO_IJJIFLHMOJO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOHMAHDOBDO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MOHMAHDOBDO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MOHMAHDOBDO*))((::PBYTE)hIl2Cpp + MOHMAHDOBDO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHMAHDOBDO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHMAHDOBDO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MOHMAHDOBDO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHMAHDOBDO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MOHMAHDOBDO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOHMAHDOBDO*))((::PBYTE)hIl2Cpp + MOHMAHDOBDO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MOHMAHDOBDO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
