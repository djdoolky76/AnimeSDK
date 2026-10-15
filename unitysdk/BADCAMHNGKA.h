#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BADCAMHNGKA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BADCAMHNGKA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7B03C0)
#define BADCAMHNGKA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7B05E0)
#define BADCAMHNGKA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7B0010)
#define BADCAMHNGKA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7AFFE0)
#define BADCAMHNGKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7AFFD0)
#define BADCAMHNGKA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7B0140)
#define BADCAMHNGKA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7B0070)
#define BADCAMHNGKA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7B02B0)
#define BADCAMHNGKA_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1E7B0050)
#define BADCAMHNGKA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7AFF90)
#define BADCAMHNGKA_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1E7B0060)
#define BADCAMHNGKA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7B0480)
#define BADCAMHNGKA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7B0450)
#define BADCAMHNGKA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7AFFC0)
#define BADCAMHNGKA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7B02E0)
#define BADCAMHNGKA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7B0340)

inline static constexpr unsigned int BADCAMHNGKA_TypeDefinitionIndex = 31073;

	class BADCAMHNGKA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KBBFPCGLDCN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BADCAMHNGKA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BADCAMHNGKA*>**)UnitySDK::FromName("", "BADCAMHNGKA")->GetStaticField(0x44530);
		}

		// static const ::System::Object CLGAAGPCNGI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BADCAMHNGKA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BADCAMHNGKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BADCAMHNGKA*))((::PBYTE)hIl2Cpp + BADCAMHNGKA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BADCAMHNGKA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BADCAMHNGKA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BADCAMHNGKA*>*(*)())((::PBYTE)hIl2Cpp + BADCAMHNGKA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BADCAMHNGKA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BADCAMHNGKA* Clone()
		{
			return ((::BADCAMHNGKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BADCAMHNGKA_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BADCAMHNGKA_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BADCAMHNGKA_KAADEPADNMH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BADCAMHNGKA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BADCAMHNGKA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BADCAMHNGKA*))((::PBYTE)hIl2Cpp + BADCAMHNGKA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BADCAMHNGKA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BADCAMHNGKA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BADCAMHNGKA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BADCAMHNGKA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BADCAMHNGKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BADCAMHNGKA*))((::PBYTE)hIl2Cpp + BADCAMHNGKA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BADCAMHNGKA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
