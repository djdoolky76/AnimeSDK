#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPIMMHDEAGO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MPIMMHDEAGO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDF48F0)
#define MPIMMHDEAGO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDF4990)
#define MPIMMHDEAGO_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDF45E0)
#define MPIMMHDEAGO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDF45B0)
#define MPIMMHDEAGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDF45A0)
#define MPIMMHDEAGO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDF46F0)
#define MPIMMHDEAGO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDF4620)
#define MPIMMHDEAGO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDF4850)
#define MPIMMHDEAGO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDF4560)
#define MPIMMHDEAGO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDF4940)
#define MPIMMHDEAGO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDF4910)
#define MPIMMHDEAGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDF4590)
#define MPIMMHDEAGO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDF4880)
#define MPIMMHDEAGO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDF48E0)

inline static constexpr unsigned int MPIMMHDEAGO_TypeDefinitionIndex = 32036;

	class MPIMMHDEAGO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::MPIMMHDEAGO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MPIMMHDEAGO*>**)UnitySDK::FromName("", "MPIMMHDEAGO")->GetStaticField(0x66560);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPIMMHDEAGO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MPIMMHDEAGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPIMMHDEAGO*))((::PBYTE)hIl2Cpp + MPIMMHDEAGO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPIMMHDEAGO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MPIMMHDEAGO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MPIMMHDEAGO*>*(*)())((::PBYTE)hIl2Cpp + MPIMMHDEAGO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPIMMHDEAGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MPIMMHDEAGO* Clone()
		{
			return ((::MPIMMHDEAGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPIMMHDEAGO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MPIMMHDEAGO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MPIMMHDEAGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MPIMMHDEAGO*))((::PBYTE)hIl2Cpp + MPIMMHDEAGO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPIMMHDEAGO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPIMMHDEAGO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MPIMMHDEAGO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPIMMHDEAGO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MPIMMHDEAGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPIMMHDEAGO*))((::PBYTE)hIl2Cpp + MPIMMHDEAGO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MPIMMHDEAGO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
