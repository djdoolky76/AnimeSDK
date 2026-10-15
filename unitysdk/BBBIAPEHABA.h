#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIIGHJEIGHE;
class BBBIAPEHABA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BBBIAPEHABA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7BDCA0)
#define BBBIAPEHABA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7BE180)
#define BBBIAPEHABA_CIBDMPPKPOB_OFFSET UNITYSDK_OFFSET(0x1E7BD690)
#define BBBIAPEHABA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7BD620)
#define BBBIAPEHABA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7BD4E0)
#define BBBIAPEHABA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BD450)
#define BBBIAPEHABA_DKOHEKOFACL_OFFSET UNITYSDK_OFFSET(0x1E7BD6B0)
#define BBBIAPEHABA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7BD770)
#define BBBIAPEHABA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7BD710)
#define BBBIAPEHABA_FLKPPAKPLHM_OFFSET UNITYSDK_OFFSET(0x1E7BD6C0)
#define BBBIAPEHABA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7BD850)
#define BBBIAPEHABA_HADLEOMNCJC_OFFSET UNITYSDK_OFFSET(0x1E7BD6E0)
#define BBBIAPEHABA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7BD3E0)
#define BBBIAPEHABA_KHINOGAEHBI_OFFSET UNITYSDK_OFFSET(0x1E7BD700)
#define BBBIAPEHABA_MBCGMKOAHIM_OFFSET UNITYSDK_OFFSET(0x1E7BD6D0)
#define BBBIAPEHABA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7BDFE0)
#define BBBIAPEHABA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7BDEF0)
#define BBBIAPEHABA_MIMHJBHMKGH_OFFSET UNITYSDK_OFFSET(0x1E7BD6A0)
#define BBBIAPEHABA_MKBAHHJODPG_OFFSET UNITYSDK_OFFSET(0x1E7BD6F0)
#define BBBIAPEHABA_OGJPOCLKHGL_OFFSET UNITYSDK_OFFSET(0x1E7BD670)
#define BBBIAPEHABA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7BD440)
#define BBBIAPEHABA_PEGHDAEBHPA_OFFSET UNITYSDK_OFFSET(0x1E7BD680)
#define BBBIAPEHABA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7BD9B0)
#define BBBIAPEHABA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7BDA10)

inline static constexpr unsigned int BBBIAPEHABA_TypeDefinitionIndex = 25187;

	class BBBIAPEHABA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FLHOIFJLDCM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::AIIGHJEIGHE*>* OHKFNPKLNPA; // 0x20
		::System::UInt32 AJHOJKFPMLL; // 0x28
		::System::UInt32 NMAMKMKIMPP; // 0x2C
		::System::UInt32 ONKGPIBKMPL; // 0x30
		::System::Boolean FCJNHNKPEED; // 0x34
		static ::Google::Protobuf::FieldCodec** StaticGet_JNLOIKKDOFA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "BBBIAPEHABA")->GetStaticField(0x467C0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_LLPOHHGCHJH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "BBBIAPEHABA")->GetStaticField(0x467C8);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BBBIAPEHABA")->GetStaticField(0x467D0);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BBBIAPEHABA_JJGHOBBFNJD_OFFSET))();
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
