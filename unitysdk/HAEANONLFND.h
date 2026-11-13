#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAEANONLFND;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HAEANONLFND_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD0B800)
#define HAEANONLFND_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD0BAD0)
#define HAEANONLFND_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD0B400)
#define HAEANONLFND_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD0B3D0)
#define HAEANONLFND_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD0B3C0)
#define HAEANONLFND_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD0B5C0)
#define HAEANONLFND_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD0B4B0)
#define HAEANONLFND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD0B690)
#define HAEANONLFND_GMCOLFLMGKK_OFFSET UNITYSDK_OFFSET(0x1FD0B470)
#define HAEANONLFND_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD0B350)
#define HAEANONLFND_JPCONKBGPNL_OFFSET UNITYSDK_OFFSET(0x1FD0B480)
#define HAEANONLFND_KHGIIJKJCHC_OFFSET UNITYSDK_OFFSET(0x1FD0B4A0)
#define HAEANONLFND_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD0B950)
#define HAEANONLFND_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD0B910)
#define HAEANONLFND_MJEPHHBCFJF_OFFSET UNITYSDK_OFFSET(0x1FD0B490)
#define HAEANONLFND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD0B3B0)
#define HAEANONLFND_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD0B6C0)
#define HAEANONLFND_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD0B720)

inline static constexpr unsigned int HAEANONLFND_TypeDefinitionIndex = 28311;

	class HAEANONLFND : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MICDIDBPLPD; // 0x18
		::System::UInt32 FIMINHPMAJJ; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::HAEANONLFND*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HAEANONLFND*>**)UnitySDK::FromName("", "HAEANONLFND")->GetStaticField(0x1E7A0);
		}

		// static const ::System::Object ELLPLDPODJE; // 0x0
		// static const ::System::Object HJPJPLKFMGB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEANONLFND_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HAEANONLFND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAEANONLFND*))((::PBYTE)hIl2Cpp + HAEANONLFND_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAEANONLFND_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HAEANONLFND*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HAEANONLFND*>*(*)())((::PBYTE)hIl2Cpp + HAEANONLFND_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEANONLFND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HAEANONLFND* Clone()
		{
			return ((::HAEANONLFND*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEANONLFND_CLONE_OFFSET))(this);
		}

		::System::UInt32 GMCOLFLMGKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEANONLFND_GMCOLFLMGKK_OFFSET))(this);
		}

		::System::Void JPCONKBGPNL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HAEANONLFND_JPCONKBGPNL_OFFSET))(this, a1);
		}

		::System::UInt32 MJEPHHBCFJF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEANONLFND_MJEPHHBCFJF_OFFSET))(this);
		}

		::System::Void KHGIIJKJCHC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HAEANONLFND_KHGIIJKJCHC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAEANONLFND_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HAEANONLFND* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAEANONLFND*))((::PBYTE)hIl2Cpp + HAEANONLFND_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEANONLFND_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEANONLFND_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HAEANONLFND_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEANONLFND_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HAEANONLFND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAEANONLFND*))((::PBYTE)hIl2Cpp + HAEANONLFND_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HAEANONLFND_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
