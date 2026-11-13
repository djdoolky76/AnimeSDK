#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDJFEKPHLFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EDJFEKPHLFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20482B10)
#define EDJFEKPHLFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x20482BB0)
#define EDJFEKPHLFN_CLONE_OFFSET UNITYSDK_OFFSET(0x204827B0)
#define EDJFEKPHLFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20482780)
#define EDJFEKPHLFN_CTOR_OFFSET UNITYSDK_OFFSET(0x20482770)
#define EDJFEKPHLFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20482910)
#define EDJFEKPHLFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x20482820)
#define EDJFEKPHLFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20482A70)
#define EDJFEKPHLFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20482700)
#define EDJFEKPHLFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20482B60)
#define EDJFEKPHLFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20482B30)
#define EDJFEKPHLFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20482760)
#define EDJFEKPHLFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20482AA0)
#define EDJFEKPHLFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x20482B00)

inline static constexpr unsigned int EDJFEKPHLFN_TypeDefinitionIndex = 29929;

	class EDJFEKPHLFN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::EDJFEKPHLFN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EDJFEKPHLFN*>**)UnitySDK::FromName("", "EDJFEKPHLFN")->GetStaticField(0x46ED0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJFEKPHLFN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EDJFEKPHLFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDJFEKPHLFN*))((::PBYTE)hIl2Cpp + EDJFEKPHLFN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDJFEKPHLFN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EDJFEKPHLFN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EDJFEKPHLFN*>*(*)())((::PBYTE)hIl2Cpp + EDJFEKPHLFN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJFEKPHLFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EDJFEKPHLFN* Clone()
		{
			return ((::EDJFEKPHLFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJFEKPHLFN_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EDJFEKPHLFN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EDJFEKPHLFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EDJFEKPHLFN*))((::PBYTE)hIl2Cpp + EDJFEKPHLFN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJFEKPHLFN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJFEKPHLFN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EDJFEKPHLFN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJFEKPHLFN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EDJFEKPHLFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDJFEKPHLFN*))((::PBYTE)hIl2Cpp + EDJFEKPHLFN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EDJFEKPHLFN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
