#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCBIEJNJDIF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LCBIEJNJDIF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8B5440)
#define LCBIEJNJDIF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8B56A0)
#define LCBIEJNJDIF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8B4FD0)
#define LCBIEJNJDIF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8B4F40)
#define LCBIEJNJDIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B4EF0)
#define LCBIEJNJDIF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8B5170)
#define LCBIEJNJDIF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8B5080)
#define LCBIEJNJDIF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8B5260)
#define LCBIEJNJDIF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8B4EB0)
#define LCBIEJNJDIF_LCHLKIHBHBA_OFFSET UNITYSDK_OFFSET(0x1E8B5070)
#define LCBIEJNJDIF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8B5500)
#define LCBIEJNJDIF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8B54B0)
#define LCBIEJNJDIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8B4EE0)
#define LCBIEJNJDIF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8B5360)
#define LCBIEJNJDIF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8B53C0)

inline static constexpr unsigned int LCBIEJNJDIF_TypeDefinitionIndex = 30901;

	class LCBIEJNJDIF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GKPOJKHDHFO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MOBCNJLLPBC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LCBIEJNJDIF")->GetStaticField(0x29F90);
		}

		static ::Google::Protobuf::MessageParser_1<::LCBIEJNJDIF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LCBIEJNJDIF*>**)UnitySDK::FromName("", "LCBIEJNJDIF")->GetStaticField(0x29F98);
		}

		// static const ::System::Object BHNEOLKFNAM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBIEJNJDIF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LCBIEJNJDIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCBIEJNJDIF*))((::PBYTE)hIl2Cpp + LCBIEJNJDIF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCBIEJNJDIF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LCBIEJNJDIF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LCBIEJNJDIF*>*(*)())((::PBYTE)hIl2Cpp + LCBIEJNJDIF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBIEJNJDIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LCBIEJNJDIF* Clone()
		{
			return ((::LCBIEJNJDIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBIEJNJDIF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LCHLKIHBHBA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBIEJNJDIF_LCHLKIHBHBA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LCBIEJNJDIF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LCBIEJNJDIF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LCBIEJNJDIF*))((::PBYTE)hIl2Cpp + LCBIEJNJDIF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBIEJNJDIF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBIEJNJDIF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LCBIEJNJDIF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBIEJNJDIF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LCBIEJNJDIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCBIEJNJDIF*))((::PBYTE)hIl2Cpp + LCBIEJNJDIF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LCBIEJNJDIF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
