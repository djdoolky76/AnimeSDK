#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKICACCMBOF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MKICACCMBOF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA2CDA0)
#define MKICACCMBOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA2D070)
#define MKICACCMBOF_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA2C9F0)
#define MKICACCMBOF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA2C9C0)
#define MKICACCMBOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA2C9B0)
#define MKICACCMBOF_DKJBCCDHKGJ_OFFSET UNITYSDK_OFFSET(0x1EA2CA40)
#define MKICACCMBOF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA2CB60)
#define MKICACCMBOF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA2CA80)
#define MKICACCMBOF_FMNEABHIOMO_OFFSET UNITYSDK_OFFSET(0x1EA2CA50)
#define MKICACCMBOF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA2CC30)
#define MKICACCMBOF_IPNNFFDLPHF_OFFSET UNITYSDK_OFFSET(0x1EA2CA60)
#define MKICACCMBOF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA2C970)
#define MKICACCMBOF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA2CEF0)
#define MKICACCMBOF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA2CEB0)
#define MKICACCMBOF_NHNBGHFBOFL_OFFSET UNITYSDK_OFFSET(0x1EA2CA70)
#define MKICACCMBOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA2C9A0)
#define MKICACCMBOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA2CC60)
#define MKICACCMBOF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA2CCC0)

inline static constexpr unsigned int MKICACCMBOF_TypeDefinitionIndex = 25655;

	class MKICACCMBOF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PFKGBEPIJDO; // 0x18
		::System::UInt32 JGEIHJDNJGA; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::MKICACCMBOF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MKICACCMBOF*>**)UnitySDK::FromName("", "MKICACCMBOF")->GetStaticField(0x2FC90);
		}

		// static const ::System::Object EGEFPCJMHAI; // 0x0
		// static const ::System::Object AKILJNDHIGL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKICACCMBOF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MKICACCMBOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKICACCMBOF*))((::PBYTE)hIl2Cpp + MKICACCMBOF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKICACCMBOF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MKICACCMBOF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MKICACCMBOF*>*(*)())((::PBYTE)hIl2Cpp + MKICACCMBOF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKICACCMBOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MKICACCMBOF* Clone()
		{
			return ((::MKICACCMBOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKICACCMBOF_CLONE_OFFSET))(this);
		}

		::System::UInt32 DKJBCCDHKGJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKICACCMBOF_DKJBCCDHKGJ_OFFSET))(this);
		}

		::System::Void FMNEABHIOMO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKICACCMBOF_FMNEABHIOMO_OFFSET))(this, a1);
		}

		::System::UInt32 IPNNFFDLPHF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKICACCMBOF_IPNNFFDLPHF_OFFSET))(this);
		}

		::System::Void NHNBGHFBOFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKICACCMBOF_NHNBGHFBOFL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MKICACCMBOF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MKICACCMBOF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MKICACCMBOF*))((::PBYTE)hIl2Cpp + MKICACCMBOF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKICACCMBOF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKICACCMBOF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MKICACCMBOF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKICACCMBOF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MKICACCMBOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKICACCMBOF*))((::PBYTE)hIl2Cpp + MKICACCMBOF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MKICACCMBOF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
