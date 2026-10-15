#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MINGMOMGNEL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MINGMOMGNEL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA11490)
#define MINGMOMGNEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA11810)
#define MINGMOMGNEL_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA11070)
#define MINGMOMGNEL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA11030)
#define MINGMOMGNEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA11020)
#define MINGMOMGNEL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA11200)
#define MINGMOMGNEL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA11120)
#define MINGMOMGNEL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA112D0)
#define MINGMOMGNEL_HBLCGJJFBIJ_OFFSET UNITYSDK_OFFSET(0x1EA110C0)
#define MINGMOMGNEL_HPGLDOOFONJ_OFFSET UNITYSDK_OFFSET(0x1EA11100)
#define MINGMOMGNEL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA10FE0)
#define MINGMOMGNEL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA11670)
#define MINGMOMGNEL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA11620)
#define MINGMOMGNEL_NNLOILOCMPE_OFFSET UNITYSDK_OFFSET(0x1EA110D0)
#define MINGMOMGNEL_PAJHAHFHLEI_OFFSET UNITYSDK_OFFSET(0x1EA11110)
#define MINGMOMGNEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA11010)
#define MINGMOMGNEL_PIEICFOGEHA_OFFSET UNITYSDK_OFFSET(0x1EA110F0)
#define MINGMOMGNEL_PIPAADCGFMK_OFFSET UNITYSDK_OFFSET(0x1EA110E0)
#define MINGMOMGNEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA11300)
#define MINGMOMGNEL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA11360)

inline static constexpr unsigned int MINGMOMGNEL_TypeDefinitionIndex = 29783;

	class MINGMOMGNEL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EKBHPFBBNKE; // 0x18
		::System::UInt32 IOJPFPKAAOP; // 0x1C
		::System::UInt32 MOBKMIPGCKA; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MINGMOMGNEL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MINGMOMGNEL*>**)UnitySDK::FromName("", "MINGMOMGNEL")->GetStaticField(0x52E90);
		}

		// static const ::System::Object APNPNAEJMOG; // 0x0
		// static const ::System::Object CAGMIKBIIMD; // 0x0
		// static const ::System::Object EBNBMOHHABN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINGMOMGNEL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MINGMOMGNEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MINGMOMGNEL*))((::PBYTE)hIl2Cpp + MINGMOMGNEL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MINGMOMGNEL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MINGMOMGNEL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MINGMOMGNEL*>*(*)())((::PBYTE)hIl2Cpp + MINGMOMGNEL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINGMOMGNEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MINGMOMGNEL* Clone()
		{
			return ((::MINGMOMGNEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINGMOMGNEL_CLONE_OFFSET))(this);
		}

		::System::UInt32 HBLCGJJFBIJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MINGMOMGNEL_HBLCGJJFBIJ_OFFSET))(this);
		}

		::System::Void NNLOILOCMPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MINGMOMGNEL_NNLOILOCMPE_OFFSET))(this, a1);
		}

		::System::UInt32 PIPAADCGFMK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MINGMOMGNEL_PIPAADCGFMK_OFFSET))(this);
		}

		::System::Void PIEICFOGEHA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MINGMOMGNEL_PIEICFOGEHA_OFFSET))(this, a1);
		}

		::System::UInt32 HPGLDOOFONJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MINGMOMGNEL_HPGLDOOFONJ_OFFSET))(this);
		}

		::System::Void PAJHAHFHLEI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MINGMOMGNEL_PAJHAHFHLEI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MINGMOMGNEL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MINGMOMGNEL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MINGMOMGNEL*))((::PBYTE)hIl2Cpp + MINGMOMGNEL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MINGMOMGNEL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINGMOMGNEL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MINGMOMGNEL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MINGMOMGNEL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MINGMOMGNEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MINGMOMGNEL*))((::PBYTE)hIl2Cpp + MINGMOMGNEL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MINGMOMGNEL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
