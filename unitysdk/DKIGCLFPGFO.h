#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKIGCLFPGFO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DKIGCLFPGFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1D7AF0)
#define DKIGCLFPGFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1D7DC0)
#define DKIGCLFPGFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1D76F0)
#define DKIGCLFPGFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1D76C0)
#define DKIGCLFPGFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D76B0)
#define DKIGCLFPGFO_EHOGKGJGHFI_OFFSET UNITYSDK_OFFSET(0x1E1D7790)
#define DKIGCLFPGFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1D78B0)
#define DKIGCLFPGFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1D77A0)
#define DKIGCLFPGFO_GEDFKJOCFCB_OFFSET UNITYSDK_OFFSET(0x1E1D7780)
#define DKIGCLFPGFO_GEIDADIACKB_OFFSET UNITYSDK_OFFSET(0x1E1D7760)
#define DKIGCLFPGFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1D7980)
#define DKIGCLFPGFO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1D7640)
#define DKIGCLFPGFO_MDBKBBMLMNI_OFFSET UNITYSDK_OFFSET(0x1E1D7770)
#define DKIGCLFPGFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1D7C40)
#define DKIGCLFPGFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1D7C00)
#define DKIGCLFPGFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1D76A0)
#define DKIGCLFPGFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1D79B0)
#define DKIGCLFPGFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1D7A10)

inline static constexpr unsigned int DKIGCLFPGFO_TypeDefinitionIndex = 34806;

	class DKIGCLFPGFO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BOHLIADLMJN; // 0x18
		::System::UInt32 JLDFJJGIAHG; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::DKIGCLFPGFO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DKIGCLFPGFO*>**)UnitySDK::FromName("", "DKIGCLFPGFO")->GetStaticField(0x17FD0);
		}

		// static const ::System::Object EAEDBOGGHCC; // 0x0
		// static const ::System::Object LGMBBNKHEGJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKIGCLFPGFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DKIGCLFPGFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKIGCLFPGFO*))((::PBYTE)hIl2Cpp + DKIGCLFPGFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKIGCLFPGFO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DKIGCLFPGFO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DKIGCLFPGFO*>*(*)())((::PBYTE)hIl2Cpp + DKIGCLFPGFO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKIGCLFPGFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DKIGCLFPGFO* Clone()
		{
			return ((::DKIGCLFPGFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKIGCLFPGFO_CLONE_OFFSET))(this);
		}

		::System::UInt32 GEIDADIACKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKIGCLFPGFO_GEIDADIACKB_OFFSET))(this);
		}

		::System::Void MDBKBBMLMNI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DKIGCLFPGFO_MDBKBBMLMNI_OFFSET))(this, a1);
		}

		::System::UInt32 GEDFKJOCFCB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKIGCLFPGFO_GEDFKJOCFCB_OFFSET))(this);
		}

		::System::Void EHOGKGJGHFI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DKIGCLFPGFO_EHOGKGJGHFI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DKIGCLFPGFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DKIGCLFPGFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DKIGCLFPGFO*))((::PBYTE)hIl2Cpp + DKIGCLFPGFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKIGCLFPGFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKIGCLFPGFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DKIGCLFPGFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKIGCLFPGFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DKIGCLFPGFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKIGCLFPGFO*))((::PBYTE)hIl2Cpp + DKIGCLFPGFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DKIGCLFPGFO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
