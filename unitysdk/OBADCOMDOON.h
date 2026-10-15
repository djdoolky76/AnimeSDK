#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBADCOMDOON;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OBADCOMDOON_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB7D390)
#define OBADCOMDOON_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB7D660)
#define OBADCOMDOON_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB7CFE0)
#define OBADCOMDOON_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB7CFB0)
#define OBADCOMDOON_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7CFA0)
#define OBADCOMDOON_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB7D150)
#define OBADCOMDOON_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB7D070)
#define OBADCOMDOON_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB7D040)
#define OBADCOMDOON_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB7D220)
#define OBADCOMDOON_GKBBEGDGBFP_OFFSET UNITYSDK_OFFSET(0x1EB7D050)
#define OBADCOMDOON_HPAKFNCJOLM_OFFSET UNITYSDK_OFFSET(0x1EB7D060)
#define OBADCOMDOON_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB7CF60)
#define OBADCOMDOON_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB7D4E0)
#define OBADCOMDOON_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB7D4A0)
#define OBADCOMDOON_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB7D030)
#define OBADCOMDOON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB7CF90)
#define OBADCOMDOON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB7D250)
#define OBADCOMDOON_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB7D2B0)

inline static constexpr unsigned int OBADCOMDOON_TypeDefinitionIndex = 34649;

	class OBADCOMDOON : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EJKCCIFEGPO; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::OBADCOMDOON*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OBADCOMDOON*>**)UnitySDK::FromName("", "OBADCOMDOON")->GetStaticField(0xF100);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object AIOGHGMADFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBADCOMDOON_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OBADCOMDOON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBADCOMDOON*))((::PBYTE)hIl2Cpp + OBADCOMDOON_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBADCOMDOON_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OBADCOMDOON*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OBADCOMDOON*>*(*)())((::PBYTE)hIl2Cpp + OBADCOMDOON_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBADCOMDOON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OBADCOMDOON* Clone()
		{
			return ((::OBADCOMDOON*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBADCOMDOON_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBADCOMDOON_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OBADCOMDOON_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 GKBBEGDGBFP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBADCOMDOON_GKBBEGDGBFP_OFFSET))(this);
		}

		::System::Void HPAKFNCJOLM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OBADCOMDOON_HPAKFNCJOLM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBADCOMDOON_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OBADCOMDOON* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OBADCOMDOON*))((::PBYTE)hIl2Cpp + OBADCOMDOON_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBADCOMDOON_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBADCOMDOON_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OBADCOMDOON_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBADCOMDOON_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OBADCOMDOON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBADCOMDOON*))((::PBYTE)hIl2Cpp + OBADCOMDOON_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OBADCOMDOON_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
