#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIMLMDHOHAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OIMLMDHOHAP_AABOOKNIJKN_OFFSET UNITYSDK_OFFSET(0x1DE748B0)
#define OIMLMDHOHAP_AEGDPDGGCNP_OFFSET UNITYSDK_OFFSET(0x1DE74860)
#define OIMLMDHOHAP_BDAIDDPKJPG_OFFSET UNITYSDK_OFFSET(0x1DE74880)
#define OIMLMDHOHAP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE74C60)
#define OIMLMDHOHAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE74F60)
#define OIMLMDHOHAP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE747D0)
#define OIMLMDHOHAP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE747A0)
#define OIMLMDHOHAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE74790)
#define OIMLMDHOHAP_DGMMOJAKLHF_OFFSET UNITYSDK_OFFSET(0x1DE74870)
#define OIMLMDHOHAP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE74950)
#define OIMLMDHOHAP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE748C0)
#define OIMLMDHOHAP_FEGIMNBKFHN_OFFSET UNITYSDK_OFFSET(0x1DE748A0)
#define OIMLMDHOHAP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE74A30)
#define OIMLMDHOHAP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE74720)
#define OIMLMDHOHAP_MCOHNACHDGJ_OFFSET UNITYSDK_OFFSET(0x1DE74840)
#define OIMLMDHOHAP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE74EC0)
#define OIMLMDHOHAP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE74E70)
#define OIMLMDHOHAP_OINFDBECCNA_OFFSET UNITYSDK_OFFSET(0x1DE74850)
#define OIMLMDHOHAP_OODBLHEBMCJ_OFFSET UNITYSDK_OFFSET(0x1DE74890)
#define OIMLMDHOHAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE74780)
#define OIMLMDHOHAP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE74A70)
#define OIMLMDHOHAP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE74AD0)

inline static constexpr unsigned int OIMLMDHOHAP_TypeDefinitionIndex = 28914;

	class OIMLMDHOHAP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ELLHAHEONME; // 0x18
		::System::UInt32 MLCHFINKHHM; // 0x1C
		::System::UInt32 JLPEMHMGHPI; // 0x20
		::System::UInt32 PDDACKIBHBD; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OIMLMDHOHAP")->GetStaticField(0x1DB30);
		}

		// static const ::System::Object MCKCJLPKDFA; // 0x0
		// static const ::System::Object OGEBACFFIFA; // 0x0
		// static const ::System::Object NJMHPOIIPCN; // 0x0
		// static const ::System::Object HBIJBPKKMNN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMLMDHOHAP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OIMLMDHOHAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIMLMDHOHAP*))((::PBYTE)hIl2Cpp + OIMLMDHOHAP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIMLMDHOHAP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OIMLMDHOHAP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMLMDHOHAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OIMLMDHOHAP* Clone()
		{
			return ((::OIMLMDHOHAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMLMDHOHAP_CLONE_OFFSET))(this);
		}

		::System::UInt32 MCOHNACHDGJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMLMDHOHAP_MCOHNACHDGJ_OFFSET))(this);
		}

		::System::Void OINFDBECCNA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIMLMDHOHAP_OINFDBECCNA_OFFSET))(this, a1);
		}

		::System::UInt32 AEGDPDGGCNP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMLMDHOHAP_AEGDPDGGCNP_OFFSET))(this);
		}

		::System::Void DGMMOJAKLHF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIMLMDHOHAP_DGMMOJAKLHF_OFFSET))(this, a1);
		}

		::System::UInt32 BDAIDDPKJPG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMLMDHOHAP_BDAIDDPKJPG_OFFSET))(this);
		}

		::System::Void OODBLHEBMCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIMLMDHOHAP_OODBLHEBMCJ_OFFSET))(this, a1);
		}

		::System::UInt32 FEGIMNBKFHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMLMDHOHAP_FEGIMNBKFHN_OFFSET))(this);
		}

		::System::Void AABOOKNIJKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIMLMDHOHAP_AABOOKNIJKN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIMLMDHOHAP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OIMLMDHOHAP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OIMLMDHOHAP*))((::PBYTE)hIl2Cpp + OIMLMDHOHAP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMLMDHOHAP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMLMDHOHAP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OIMLMDHOHAP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMLMDHOHAP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OIMLMDHOHAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIMLMDHOHAP*))((::PBYTE)hIl2Cpp + OIMLMDHOHAP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OIMLMDHOHAP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
