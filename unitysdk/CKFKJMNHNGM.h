#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKFKJMNHNGM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CKFKJMNHNGM_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E0BCA60)
#define CKFKJMNHNGM_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E0BCA70)
#define CKFKJMNHNGM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0BCDD0)
#define CKFKJMNHNGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0BCFF0)
#define CKFKJMNHNGM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0BCA20)
#define CKFKJMNHNGM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0BC9F0)
#define CKFKJMNHNGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0BC9E0)
#define CKFKJMNHNGM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0BCB50)
#define CKFKJMNHNGM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0BCA80)
#define CKFKJMNHNGM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0BCCC0)
#define CKFKJMNHNGM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0BC9A0)
#define CKFKJMNHNGM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0BCE90)
#define CKFKJMNHNGM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0BCE60)
#define CKFKJMNHNGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0BC9D0)
#define CKFKJMNHNGM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0BCCF0)
#define CKFKJMNHNGM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0BCD50)

inline static constexpr unsigned int CKFKJMNHNGM_TypeDefinitionIndex = 26004;

	class CKFKJMNHNGM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CKFKJMNHNGM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CKFKJMNHNGM*>**)UnitySDK::FromName("", "CKFKJMNHNGM")->GetStaticField(0x19440);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFKJMNHNGM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CKFKJMNHNGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKFKJMNHNGM*))((::PBYTE)hIl2Cpp + CKFKJMNHNGM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKFKJMNHNGM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CKFKJMNHNGM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CKFKJMNHNGM*>*(*)())((::PBYTE)hIl2Cpp + CKFKJMNHNGM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFKJMNHNGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CKFKJMNHNGM* Clone()
		{
			return ((::CKFKJMNHNGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFKJMNHNGM_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFKJMNHNGM_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKFKJMNHNGM_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKFKJMNHNGM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CKFKJMNHNGM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKFKJMNHNGM*))((::PBYTE)hIl2Cpp + CKFKJMNHNGM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFKJMNHNGM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFKJMNHNGM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CKFKJMNHNGM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFKJMNHNGM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CKFKJMNHNGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKFKJMNHNGM*))((::PBYTE)hIl2Cpp + CKFKJMNHNGM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CKFKJMNHNGM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
