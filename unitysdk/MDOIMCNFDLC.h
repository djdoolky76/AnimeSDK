#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDOIMCNFDLC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MDOIMCNFDLC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9D9820)
#define MDOIMCNFDLC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D9A40)
#define MDOIMCNFDLC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9D9410)
#define MDOIMCNFDLC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9D93E0)
#define MDOIMCNFDLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D93D0)
#define MDOIMCNFDLC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9D95A0)
#define MDOIMCNFDLC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9D94A0)
#define MDOIMCNFDLC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9D9710)
#define MDOIMCNFDLC_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1E9D9480)
#define MDOIMCNFDLC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9D9360)
#define MDOIMCNFDLC_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1E9D9490)
#define MDOIMCNFDLC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9D98E0)
#define MDOIMCNFDLC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9D98B0)
#define MDOIMCNFDLC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9D93C0)
#define MDOIMCNFDLC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9D9740)
#define MDOIMCNFDLC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9D97A0)

inline static constexpr unsigned int MDOIMCNFDLC_TypeDefinitionIndex = 34790;

	class MDOIMCNFDLC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KBBFPCGLDCN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MDOIMCNFDLC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MDOIMCNFDLC*>**)UnitySDK::FromName("", "MDOIMCNFDLC")->GetStaticField(0x4CBB0);
		}

		// static const ::System::Object CLGAAGPCNGI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDOIMCNFDLC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MDOIMCNFDLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDOIMCNFDLC*))((::PBYTE)hIl2Cpp + MDOIMCNFDLC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDOIMCNFDLC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MDOIMCNFDLC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MDOIMCNFDLC*>*(*)())((::PBYTE)hIl2Cpp + MDOIMCNFDLC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDOIMCNFDLC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MDOIMCNFDLC* Clone()
		{
			return ((::MDOIMCNFDLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDOIMCNFDLC_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDOIMCNFDLC_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MDOIMCNFDLC_KAADEPADNMH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDOIMCNFDLC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MDOIMCNFDLC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MDOIMCNFDLC*))((::PBYTE)hIl2Cpp + MDOIMCNFDLC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDOIMCNFDLC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDOIMCNFDLC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MDOIMCNFDLC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDOIMCNFDLC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MDOIMCNFDLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDOIMCNFDLC*))((::PBYTE)hIl2Cpp + MDOIMCNFDLC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MDOIMCNFDLC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
