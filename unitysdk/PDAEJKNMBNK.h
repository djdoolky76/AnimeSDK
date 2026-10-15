#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDAEJKNMBNK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PDAEJKNMBNK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF0CB40)
#define PDAEJKNMBNK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF0CD60)
#define PDAEJKNMBNK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF0C790)
#define PDAEJKNMBNK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF0C760)
#define PDAEJKNMBNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF0C750)
#define PDAEJKNMBNK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF0C8C0)
#define PDAEJKNMBNK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF0C7F0)
#define PDAEJKNMBNK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF0CA30)
#define PDAEJKNMBNK_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1DF0C7D0)
#define PDAEJKNMBNK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF0C710)
#define PDAEJKNMBNK_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1DF0C7E0)
#define PDAEJKNMBNK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF0CC00)
#define PDAEJKNMBNK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF0CBD0)
#define PDAEJKNMBNK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF0C740)
#define PDAEJKNMBNK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF0CA60)
#define PDAEJKNMBNK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF0CAC0)

inline static constexpr unsigned int PDAEJKNMBNK_TypeDefinitionIndex = 31077;

	class PDAEJKNMBNK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KBBFPCGLDCN; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PDAEJKNMBNK")->GetStaticField(0x36880);
		}

		// static const ::System::Object CLGAAGPCNGI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDAEJKNMBNK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PDAEJKNMBNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDAEJKNMBNK*))((::PBYTE)hIl2Cpp + PDAEJKNMBNK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDAEJKNMBNK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PDAEJKNMBNK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDAEJKNMBNK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PDAEJKNMBNK* Clone()
		{
			return ((::PDAEJKNMBNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDAEJKNMBNK_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDAEJKNMBNK_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDAEJKNMBNK_KAADEPADNMH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PDAEJKNMBNK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PDAEJKNMBNK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PDAEJKNMBNK*))((::PBYTE)hIl2Cpp + PDAEJKNMBNK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDAEJKNMBNK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDAEJKNMBNK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PDAEJKNMBNK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDAEJKNMBNK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PDAEJKNMBNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDAEJKNMBNK*))((::PBYTE)hIl2Cpp + PDAEJKNMBNK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PDAEJKNMBNK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
