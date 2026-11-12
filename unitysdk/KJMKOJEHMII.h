#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFLKOBJHFKH.h"
#include "unitysdk/OLBNNJKCMAI.h"
#include "unitysdk/System/Object.h"
class KJMKOJEHMII;
class NGIOBCJINOG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KJMKOJEHMII_APKCHMCIBLA_OFFSET UNITYSDK_OFFSET(0x1FB8B350)
#define KJMKOJEHMII_BMBNJGBPBPO_OFFSET UNITYSDK_OFFSET(0x1FB8B330)
#define KJMKOJEHMII_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB8B770)
#define KJMKOJEHMII_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB8BC40)
#define KJMKOJEHMII_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB8B2B0)
#define KJMKOJEHMII_CNNDBGAOBGB_OFFSET UNITYSDK_OFFSET(0x1FB8B360)
#define KJMKOJEHMII_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB8B210)
#define KJMKOJEHMII_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB8B1D0)
#define KJMKOJEHMII_EJKHFLEAGJJ_OFFSET UNITYSDK_OFFSET(0x1FB8B2F0)
#define KJMKOJEHMII_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB8B3A0)
#define KJMKOJEHMII_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB8B370)
#define KJMKOJEHMII_FAMGHDLEDLP_OFFSET UNITYSDK_OFFSET(0x1FB8B310)
#define KJMKOJEHMII_FLDMMIPGIOM_OFFSET UNITYSDK_OFFSET(0x1FB8B320)
#define KJMKOJEHMII_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB8B440)
#define KJMKOJEHMII_HKLELLMHLLC_OFFSET UNITYSDK_OFFSET(0x1FB8B2E0)
#define KJMKOJEHMII_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB8B190)
#define KJMKOJEHMII_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB8BB40)
#define KJMKOJEHMII_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB8BA70)
#define KJMKOJEHMII_MHFBDNGECAE_OFFSET UNITYSDK_OFFSET(0x1FB8B300)
#define KJMKOJEHMII_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB8B1C0)
#define KJMKOJEHMII_PJMFFFMJEAN_OFFSET UNITYSDK_OFFSET(0x1FB8B340)
#define KJMKOJEHMII_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB8B4C0)
#define KJMKOJEHMII_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB8B520)

inline static constexpr unsigned int KJMKOJEHMII_TypeDefinitionIndex = 35864;

	class KJMKOJEHMII : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::NGIOBCJINOG*>* ODPGKHHHCDF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::OFLKOBJHFKH PGDECKELGHI; // 0x20
		::System::UInt32 MCFABAKLEBN; // 0x24
		::OLBNNJKCMAI PKEDMIDEBJK; // 0x28
		::System::UInt32 LAAGBFNNOKM; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::NGIOBCJINOG*>** StaticGet_IDBKIBADJPI()
		{
			return (::Google::Protobuf::FieldCodec_1<::NGIOBCJINOG*>**)UnitySDK::FromName("", "KJMKOJEHMII")->GetStaticField(0x15F60);
		}

		static ::Google::Protobuf::MessageParser_1<::KJMKOJEHMII*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KJMKOJEHMII*>**)UnitySDK::FromName("", "KJMKOJEHMII")->GetStaticField(0x15F68);
		}

		// static const ::System::Object MAOPADBPAMJ; // 0x0
		// static const ::System::Object BAOPMJAPINI; // 0x0
		// static const ::System::Object FKHENAMLGEP; // 0x0
		// static const ::System::Object NHOHIHHGPKB; // 0x0
		// static const ::System::Object EPJKIFLAGIH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMKOJEHMII_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KJMKOJEHMII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJMKOJEHMII*))((::PBYTE)hIl2Cpp + KJMKOJEHMII_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJMKOJEHMII_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KJMKOJEHMII*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KJMKOJEHMII*>*(*)())((::PBYTE)hIl2Cpp + KJMKOJEHMII_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMKOJEHMII_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KJMKOJEHMII* Clone()
		{
			return ((::KJMKOJEHMII*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMKOJEHMII_CLONE_OFFSET))(this);
		}

		::OLBNNJKCMAI HKLELLMHLLC()
		{
			return ((::OLBNNJKCMAI(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMKOJEHMII_HKLELLMHLLC_OFFSET))(this);
		}

		::System::Void EJKHFLEAGJJ(::OLBNNJKCMAI a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLBNNJKCMAI))((::PBYTE)hIl2Cpp + KJMKOJEHMII_EJKHFLEAGJJ_OFFSET))(this, a1);
		}

		::System::UInt32 MHFBDNGECAE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMKOJEHMII_MHFBDNGECAE_OFFSET))(this);
		}

		::System::Void FAMGHDLEDLP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJMKOJEHMII_FAMGHDLEDLP_OFFSET))(this, a1);
		}

		::OFLKOBJHFKH FLDMMIPGIOM()
		{
			return ((::OFLKOBJHFKH(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMKOJEHMII_FLDMMIPGIOM_OFFSET))(this);
		}

		::System::Void BMBNJGBPBPO(::OFLKOBJHFKH a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFLKOBJHFKH))((::PBYTE)hIl2Cpp + KJMKOJEHMII_BMBNJGBPBPO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NGIOBCJINOG*>* PJMFFFMJEAN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NGIOBCJINOG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMKOJEHMII_PJMFFFMJEAN_OFFSET))(this);
		}

		::System::UInt32 APKCHMCIBLA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMKOJEHMII_APKCHMCIBLA_OFFSET))(this);
		}

		::System::Void CNNDBGAOBGB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJMKOJEHMII_CNNDBGAOBGB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJMKOJEHMII_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KJMKOJEHMII* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJMKOJEHMII*))((::PBYTE)hIl2Cpp + KJMKOJEHMII_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMKOJEHMII_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMKOJEHMII_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KJMKOJEHMII_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMKOJEHMII_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KJMKOJEHMII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJMKOJEHMII*))((::PBYTE)hIl2Cpp + KJMKOJEHMII_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KJMKOJEHMII_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
