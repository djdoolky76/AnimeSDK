#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIAMDCIDHLO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LIAMDCIDHLO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC8AD40)
#define LIAMDCIDHLO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC8AF60)
#define LIAMDCIDHLO_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC8A930)
#define LIAMDCIDHLO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC8A900)
#define LIAMDCIDHLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC8A8F0)
#define LIAMDCIDHLO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC8AAC0)
#define LIAMDCIDHLO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC8A9C0)
#define LIAMDCIDHLO_GBKHGABBEBI_OFFSET UNITYSDK_OFFSET(0x1FC8A9A0)
#define LIAMDCIDHLO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC8AC30)
#define LIAMDCIDHLO_HDIDNKADOJH_OFFSET UNITYSDK_OFFSET(0x1FC8A9B0)
#define LIAMDCIDHLO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC8A880)
#define LIAMDCIDHLO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC8AE00)
#define LIAMDCIDHLO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC8ADD0)
#define LIAMDCIDHLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC8A8E0)
#define LIAMDCIDHLO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC8AC60)
#define LIAMDCIDHLO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC8ACC0)

inline static constexpr unsigned int LIAMDCIDHLO_TypeDefinitionIndex = 29792;

	class LIAMDCIDHLO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LAIFPNMKJDD; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LIAMDCIDHLO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LIAMDCIDHLO*>**)UnitySDK::FromName("", "LIAMDCIDHLO")->GetStaticField(0x35E60);
		}

		// static const ::System::Object KFBHJAAGIKF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIAMDCIDHLO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LIAMDCIDHLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIAMDCIDHLO*))((::PBYTE)hIl2Cpp + LIAMDCIDHLO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIAMDCIDHLO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LIAMDCIDHLO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LIAMDCIDHLO*>*(*)())((::PBYTE)hIl2Cpp + LIAMDCIDHLO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIAMDCIDHLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LIAMDCIDHLO* Clone()
		{
			return ((::LIAMDCIDHLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIAMDCIDHLO_CLONE_OFFSET))(this);
		}

		::System::UInt32 GBKHGABBEBI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIAMDCIDHLO_GBKHGABBEBI_OFFSET))(this);
		}

		::System::Void HDIDNKADOJH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LIAMDCIDHLO_HDIDNKADOJH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LIAMDCIDHLO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LIAMDCIDHLO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LIAMDCIDHLO*))((::PBYTE)hIl2Cpp + LIAMDCIDHLO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIAMDCIDHLO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIAMDCIDHLO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LIAMDCIDHLO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIAMDCIDHLO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LIAMDCIDHLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIAMDCIDHLO*))((::PBYTE)hIl2Cpp + LIAMDCIDHLO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LIAMDCIDHLO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
