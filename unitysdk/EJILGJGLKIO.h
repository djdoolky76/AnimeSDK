#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJILGJGLKIO;
class PFCKBFLDHNI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EJILGJGLKIO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E28B340)
#define EJILGJGLKIO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E28B6D0)
#define EJILGJGLKIO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E28AD00)
#define EJILGJGLKIO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E28AC70)
#define EJILGJGLKIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E28AC60)
#define EJILGJGLKIO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E28AF30)
#define EJILGJGLKIO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E28ADC0)
#define EJILGJGLKIO_FLPDELEDIBK_OFFSET UNITYSDK_OFFSET(0x1E28ADB0)
#define EJILGJGLKIO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E28B200)
#define EJILGJGLKIO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E28AC20)
#define EJILGJGLKIO_LHJEMKJFLJK_OFFSET UNITYSDK_OFFSET(0x1E28ADA0)
#define EJILGJGLKIO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E28B4F0)
#define EJILGJGLKIO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E28B3A0)
#define EJILGJGLKIO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E28AC50)
#define EJILGJGLKIO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E28B250)
#define EJILGJGLKIO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E28B2B0)

inline static constexpr unsigned int EJILGJGLKIO_TypeDefinitionIndex = 32575;

	class EJILGJGLKIO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::PFCKBFLDHNI* MGBEADJIBJM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EJILGJGLKIO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EJILGJGLKIO*>**)UnitySDK::FromName("", "EJILGJGLKIO")->GetStaticField(0x4CC10);
		}

		// static const ::System::Object JMEOLDPADHB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJILGJGLKIO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EJILGJGLKIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJILGJGLKIO*))((::PBYTE)hIl2Cpp + EJILGJGLKIO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJILGJGLKIO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EJILGJGLKIO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EJILGJGLKIO*>*(*)())((::PBYTE)hIl2Cpp + EJILGJGLKIO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJILGJGLKIO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EJILGJGLKIO* Clone()
		{
			return ((::EJILGJGLKIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJILGJGLKIO_CLONE_OFFSET))(this);
		}

		::PFCKBFLDHNI* LHJEMKJFLJK()
		{
			return ((::PFCKBFLDHNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJILGJGLKIO_LHJEMKJFLJK_OFFSET))(this);
		}

		::System::Void FLPDELEDIBK(::PFCKBFLDHNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFCKBFLDHNI*))((::PBYTE)hIl2Cpp + EJILGJGLKIO_FLPDELEDIBK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EJILGJGLKIO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EJILGJGLKIO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EJILGJGLKIO*))((::PBYTE)hIl2Cpp + EJILGJGLKIO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJILGJGLKIO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJILGJGLKIO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EJILGJGLKIO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJILGJGLKIO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EJILGJGLKIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJILGJGLKIO*))((::PBYTE)hIl2Cpp + EJILGJGLKIO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EJILGJGLKIO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
