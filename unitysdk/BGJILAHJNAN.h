#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGJILAHJNAN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BGJILAHJNAN_AGFMEMAFGLD_OFFSET UNITYSDK_OFFSET(0x1EFF9C90)
#define BGJILAHJNAN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EFF9FE0)
#define BGJILAHJNAN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFFA2B0)
#define BGJILAHJNAN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EFF9C30)
#define BGJILAHJNAN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EFF9C00)
#define BGJILAHJNAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFF9BF0)
#define BGJILAHJNAN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EFF9DA0)
#define BGJILAHJNAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EFF9CC0)
#define BGJILAHJNAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EFF9E70)
#define BGJILAHJNAN_GGLOBDDLDOI_OFFSET UNITYSDK_OFFSET(0x1EFF9CA0)
#define BGJILAHJNAN_HKBEDBLOGNG_OFFSET UNITYSDK_OFFSET(0x1EFF9C80)
#define BGJILAHJNAN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EFF9BB0)
#define BGJILAHJNAN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EFFA130)
#define BGJILAHJNAN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EFFA0F0)
#define BGJILAHJNAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EFF9BE0)
#define BGJILAHJNAN_PNBMDNLGBKI_OFFSET UNITYSDK_OFFSET(0x1EFF9CB0)
#define BGJILAHJNAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EFF9EA0)
#define BGJILAHJNAN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EFF9F00)

inline static constexpr unsigned int BGJILAHJNAN_TypeDefinitionIndex = 35003;

	class BGJILAHJNAN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NGEIEPEONLF; // 0x18
		::System::UInt32 GNKLGGAGGGB; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::BGJILAHJNAN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BGJILAHJNAN*>**)UnitySDK::FromName("", "BGJILAHJNAN")->GetStaticField(0x46120);
		}

		// static const ::System::Object AMHDJJHLOKD; // 0x0
		// static const ::System::Object HJFKGCEMDDB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJILAHJNAN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BGJILAHJNAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGJILAHJNAN*))((::PBYTE)hIl2Cpp + BGJILAHJNAN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGJILAHJNAN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BGJILAHJNAN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BGJILAHJNAN*>*(*)())((::PBYTE)hIl2Cpp + BGJILAHJNAN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJILAHJNAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BGJILAHJNAN* Clone()
		{
			return ((::BGJILAHJNAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJILAHJNAN_CLONE_OFFSET))(this);
		}

		::System::UInt32 HKBEDBLOGNG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJILAHJNAN_HKBEDBLOGNG_OFFSET))(this);
		}

		::System::Void AGFMEMAFGLD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGJILAHJNAN_AGFMEMAFGLD_OFFSET))(this, a1);
		}

		::System::UInt32 GGLOBDDLDOI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJILAHJNAN_GGLOBDDLDOI_OFFSET))(this);
		}

		::System::Void PNBMDNLGBKI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGJILAHJNAN_PNBMDNLGBKI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGJILAHJNAN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BGJILAHJNAN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGJILAHJNAN*))((::PBYTE)hIl2Cpp + BGJILAHJNAN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJILAHJNAN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJILAHJNAN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BGJILAHJNAN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJILAHJNAN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BGJILAHJNAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGJILAHJNAN*))((::PBYTE)hIl2Cpp + BGJILAHJNAN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BGJILAHJNAN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
