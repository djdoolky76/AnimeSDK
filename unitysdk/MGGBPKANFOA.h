#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKMCODLAEKI;
class MGGBPKANFOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MGGBPKANFOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB270A0)
#define MGGBPKANFOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB27380)
#define MGGBPKANFOA_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB26C80)
#define MGGBPKANFOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB26BF0)
#define MGGBPKANFOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB26BB0)
#define MGGBPKANFOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB26E00)
#define MGGBPKANFOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB26CC0)
#define MGGBPKANFOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB26F20)
#define MGGBPKANFOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB26B70)
#define MGGBPKANFOA_LKJABHDNGDI_OFFSET UNITYSDK_OFFSET(0x1FB26CB0)
#define MGGBPKANFOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB271E0)
#define MGGBPKANFOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB27140)
#define MGGBPKANFOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB26BA0)
#define MGGBPKANFOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB26F90)
#define MGGBPKANFOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB26FF0)

inline static constexpr unsigned int MGGBPKANFOA_TypeDefinitionIndex = 34309;

	class MGGBPKANFOA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::AKMCODLAEKI*>* ONHHGGFNDDO; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::AKMCODLAEKI*>** StaticGet_FNGJDLMNOHJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::AKMCODLAEKI*>**)UnitySDK::FromName("", "MGGBPKANFOA")->GetStaticField(0x51DB0);
		}

		static ::Google::Protobuf::MessageParser_1<::MGGBPKANFOA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MGGBPKANFOA*>**)UnitySDK::FromName("", "MGGBPKANFOA")->GetStaticField(0x51DB8);
		}

		// static const ::System::Object MHALDDACAMI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGBPKANFOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MGGBPKANFOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGGBPKANFOA*))((::PBYTE)hIl2Cpp + MGGBPKANFOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGGBPKANFOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MGGBPKANFOA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MGGBPKANFOA*>*(*)())((::PBYTE)hIl2Cpp + MGGBPKANFOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGBPKANFOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MGGBPKANFOA* Clone()
		{
			return ((::MGGBPKANFOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGBPKANFOA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AKMCODLAEKI*>* LKJABHDNGDI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AKMCODLAEKI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGBPKANFOA_LKJABHDNGDI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGGBPKANFOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MGGBPKANFOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGGBPKANFOA*))((::PBYTE)hIl2Cpp + MGGBPKANFOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGBPKANFOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGBPKANFOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MGGBPKANFOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGBPKANFOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MGGBPKANFOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGGBPKANFOA*))((::PBYTE)hIl2Cpp + MGGBPKANFOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MGGBPKANFOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
