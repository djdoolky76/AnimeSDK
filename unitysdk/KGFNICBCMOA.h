#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGFNICBCMOA;
class PPGEBEBPMJC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KGFNICBCMOA_BGMFINOBFHD_OFFSET UNITYSDK_OFFSET(0x1E8086E0)
#define KGFNICBCMOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E808B10)
#define KGFNICBCMOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E808E10)
#define KGFNICBCMOA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E808690)
#define KGFNICBCMOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8085E0)
#define KGFNICBCMOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E808590)
#define KGFNICBCMOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E808870)
#define KGFNICBCMOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8086F0)
#define KGFNICBCMOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E808990)
#define KGFNICBCMOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E808520)
#define KGFNICBCMOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E808C50)
#define KGFNICBCMOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E808BB0)
#define KGFNICBCMOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E808580)
#define KGFNICBCMOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E808A00)
#define KGFNICBCMOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E808A60)

inline static constexpr unsigned int KGFNICBCMOA_TypeDefinitionIndex = 29342;

	class KGFNICBCMOA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::PPGEBEBPMJC*>* GBGHGMGPJKB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::PPGEBEBPMJC*>** StaticGet_AJBEOKDPPJH()
		{
			return (::Google::Protobuf::FieldCodec_1<::PPGEBEBPMJC*>**)UnitySDK::FromName("", "KGFNICBCMOA")->GetStaticField(0x14DF0);
		}

		static ::Google::Protobuf::MessageParser_1<::KGFNICBCMOA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KGFNICBCMOA*>**)UnitySDK::FromName("", "KGFNICBCMOA")->GetStaticField(0x14DF8);
		}

		// static const ::System::Object JBJNOHHCOKD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGFNICBCMOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KGFNICBCMOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGFNICBCMOA*))((::PBYTE)hIl2Cpp + KGFNICBCMOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGFNICBCMOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KGFNICBCMOA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KGFNICBCMOA*>*(*)())((::PBYTE)hIl2Cpp + KGFNICBCMOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGFNICBCMOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KGFNICBCMOA* Clone()
		{
			return ((::KGFNICBCMOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGFNICBCMOA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PPGEBEBPMJC*>* BGMFINOBFHD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PPGEBEBPMJC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGFNICBCMOA_BGMFINOBFHD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGFNICBCMOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KGFNICBCMOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KGFNICBCMOA*))((::PBYTE)hIl2Cpp + KGFNICBCMOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGFNICBCMOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGFNICBCMOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KGFNICBCMOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGFNICBCMOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KGFNICBCMOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGFNICBCMOA*))((::PBYTE)hIl2Cpp + KGFNICBCMOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KGFNICBCMOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
