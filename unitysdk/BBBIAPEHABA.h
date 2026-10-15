#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIIGHJEIGHE;
class BBBIAPEHABA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BBBIAPEHABA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7906A0)
#define BBBIAPEHABA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E790B80)
#define BBBIAPEHABA_CIBDMPPKPOB_OFFSET UNITYSDK_OFFSET(0x1E790090)
#define BBBIAPEHABA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E790020)
#define BBBIAPEHABA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E78FEE0)
#define BBBIAPEHABA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E78FE50)
#define BBBIAPEHABA_DKOHEKOFACL_OFFSET UNITYSDK_OFFSET(0x1E7900B0)
#define BBBIAPEHABA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E790170)
#define BBBIAPEHABA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E790110)
#define BBBIAPEHABA_FLKPPAKPLHM_OFFSET UNITYSDK_OFFSET(0x1E7900C0)
#define BBBIAPEHABA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E790250)
#define BBBIAPEHABA_HADLEOMNCJC_OFFSET UNITYSDK_OFFSET(0x1E7900E0)
#define BBBIAPEHABA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E78FDE0)
#define BBBIAPEHABA_KHINOGAEHBI_OFFSET UNITYSDK_OFFSET(0x1E790100)
#define BBBIAPEHABA_MBCGMKOAHIM_OFFSET UNITYSDK_OFFSET(0x1E7900D0)
#define BBBIAPEHABA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7909E0)
#define BBBIAPEHABA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7908F0)
#define BBBIAPEHABA_MIMHJBHMKGH_OFFSET UNITYSDK_OFFSET(0x1E7900A0)
#define BBBIAPEHABA_MKBAHHJODPG_OFFSET UNITYSDK_OFFSET(0x1E7900F0)
#define BBBIAPEHABA_OGJPOCLKHGL_OFFSET UNITYSDK_OFFSET(0x1E790070)
#define BBBIAPEHABA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E78FE40)
#define BBBIAPEHABA_PEGHDAEBHPA_OFFSET UNITYSDK_OFFSET(0x1E790080)
#define BBBIAPEHABA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7903B0)
#define BBBIAPEHABA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E790410)

inline static constexpr unsigned int BBBIAPEHABA_TypeDefinitionIndex = 25187;

	class BBBIAPEHABA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FLHOIFJLDCM; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::AIIGHJEIGHE*>* OHKFNPKLNPA; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 AJHOJKFPMLL; // 0x28
		::System::UInt32 NMAMKMKIMPP; // 0x2C
		::System::UInt32 ONKGPIBKMPL; // 0x30
		::System::Boolean FCJNHNKPEED; // 0x34
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JNLOIKKDOFA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "BBBIAPEHABA")->GetStaticField(0x4D100);
		}

		static ::Google::Protobuf::FieldCodec_1<::AIIGHJEIGHE*>** StaticGet_LLPOHHGCHJH()
		{
			return (::Google::Protobuf::FieldCodec_1<::AIIGHJEIGHE*>**)UnitySDK::FromName("", "BBBIAPEHABA")->GetStaticField(0x4D108);
		}

		static ::Google::Protobuf::MessageParser_1<::BBBIAPEHABA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BBBIAPEHABA*>**)UnitySDK::FromName("", "BBBIAPEHABA")->GetStaticField(0x4D110);
		}

		// static const ::System::Object COFJDNMKNJJ; // 0x0
		// static const ::System::Object KGBIOKNMNGB; // 0x0
		// static const ::System::Object CJPFBABILKP; // 0x0
		// static const ::System::Object KABHDCOPEGH; // 0x0
		// static const ::System::Object EMAAFDGEFOA; // 0x0
		// static const ::System::Object PMGMOKACFAP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBIAPEHABA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BBBIAPEHABA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBBIAPEHABA*))((::PBYTE)hIl2Cpp + BBBIAPEHABA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBBIAPEHABA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BBBIAPEHABA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BBBIAPEHABA*>*(*)())((::PBYTE)hIl2Cpp + BBBIAPEHABA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBIAPEHABA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BBBIAPEHABA* Clone()
		{
			return ((::BBBIAPEHABA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBIAPEHABA_CLONE_OFFSET))(this);
		}

		::System::Boolean OGJPOCLKHGL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBIAPEHABA_OGJPOCLKHGL_OFFSET))(this);
		}

		::System::Void PEGHDAEBHPA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BBBIAPEHABA_PEGHDAEBHPA_OFFSET))(this, a1);
		}

		::System::UInt32 CIBDMPPKPOB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBIAPEHABA_CIBDMPPKPOB_OFFSET))(this);
		}

		::System::Void MIMHJBHMKGH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BBBIAPEHABA_MIMHJBHMKGH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AIIGHJEIGHE*>* DKOHEKOFACL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AIIGHJEIGHE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBIAPEHABA_DKOHEKOFACL_OFFSET))(this);
		}

		::System::UInt32 FLKPPAKPLHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBIAPEHABA_FLKPPAKPLHM_OFFSET))(this);
		}

		::System::Void MBCGMKOAHIM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BBBIAPEHABA_MBCGMKOAHIM_OFFSET))(this, a1);
		}

		::System::UInt32 HADLEOMNCJC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBIAPEHABA_HADLEOMNCJC_OFFSET))(this);
		}

		::System::Void MKBAHHJODPG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BBBIAPEHABA_MKBAHHJODPG_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHINOGAEHBI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBIAPEHABA_KHINOGAEHBI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBBIAPEHABA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BBBIAPEHABA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BBBIAPEHABA*))((::PBYTE)hIl2Cpp + BBBIAPEHABA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBIAPEHABA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBIAPEHABA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BBBIAPEHABA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBIAPEHABA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BBBIAPEHABA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBBIAPEHABA*))((::PBYTE)hIl2Cpp + BBBIAPEHABA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BBBIAPEHABA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
