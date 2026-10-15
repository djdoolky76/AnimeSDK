#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEGMIKNHDPO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MEGMIKNHDPO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9DE660)
#define MEGMIKNHDPO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9DE880)
#define MEGMIKNHDPO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9DE2B0)
#define MEGMIKNHDPO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9DE280)
#define MEGMIKNHDPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9DE270)
#define MEGMIKNHDPO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9DE3E0)
#define MEGMIKNHDPO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9DE310)
#define MEGMIKNHDPO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9DE550)
#define MEGMIKNHDPO_GGLMBPNJHHA_OFFSET UNITYSDK_OFFSET(0x1E9DE2F0)
#define MEGMIKNHDPO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9DE230)
#define MEGMIKNHDPO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9DE720)
#define MEGMIKNHDPO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9DE6F0)
#define MEGMIKNHDPO_OHAKKMNJOAH_OFFSET UNITYSDK_OFFSET(0x1E9DE300)
#define MEGMIKNHDPO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9DE260)
#define MEGMIKNHDPO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9DE580)
#define MEGMIKNHDPO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9DE5E0)

inline static constexpr unsigned int MEGMIKNHDPO_TypeDefinitionIndex = 31596;

	class MEGMIKNHDPO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ANNNLFKJBFP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MEGMIKNHDPO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MEGMIKNHDPO*>**)UnitySDK::FromName("", "MEGMIKNHDPO")->GetStaticField(0x4D380);
		}

		// static const ::System::Object BCOGHKKLFFA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEGMIKNHDPO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MEGMIKNHDPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEGMIKNHDPO*))((::PBYTE)hIl2Cpp + MEGMIKNHDPO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEGMIKNHDPO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MEGMIKNHDPO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MEGMIKNHDPO*>*(*)())((::PBYTE)hIl2Cpp + MEGMIKNHDPO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEGMIKNHDPO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MEGMIKNHDPO* Clone()
		{
			return ((::MEGMIKNHDPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEGMIKNHDPO_CLONE_OFFSET))(this);
		}

		::System::UInt32 GGLMBPNJHHA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEGMIKNHDPO_GGLMBPNJHHA_OFFSET))(this);
		}

		::System::Void OHAKKMNJOAH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MEGMIKNHDPO_OHAKKMNJOAH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MEGMIKNHDPO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MEGMIKNHDPO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MEGMIKNHDPO*))((::PBYTE)hIl2Cpp + MEGMIKNHDPO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEGMIKNHDPO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEGMIKNHDPO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MEGMIKNHDPO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEGMIKNHDPO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MEGMIKNHDPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEGMIKNHDPO*))((::PBYTE)hIl2Cpp + MEGMIKNHDPO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MEGMIKNHDPO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
