#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFDEPBCLENF.h"
#include "unitysdk/System/Object.h"
class AHCLMAGAHPN;
class BLPHONLBNBO;
class BOFJIOEKDFK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BOFJIOEKDFK_AFLGDDKKHBM_OFFSET UNITYSDK_OFFSET(0x1E00CCE0)
#define BOFJIOEKDFK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E00D3E0)
#define BOFJIOEKDFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E00D7C0)
#define BOFJIOEKDFK_CIMJOILMLMD_OFFSET UNITYSDK_OFFSET(0x1E00CD40)
#define BOFJIOEKDFK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E00CCA0)
#define BOFJIOEKDFK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E00CBD0)
#define BOFJIOEKDFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E00CBC0)
#define BOFJIOEKDFK_EHEMEPOKGCP_OFFSET UNITYSDK_OFFSET(0x1E00CD30)
#define BOFJIOEKDFK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E00CF00)
#define BOFJIOEKDFK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E00CD50)
#define BOFJIOEKDFK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E00D140)
#define BOFJIOEKDFK_GPCIDCAANHB_OFFSET UNITYSDK_OFFSET(0x1E00CD10)
#define BOFJIOEKDFK_JDLIMFLEDNJ_OFFSET UNITYSDK_OFFSET(0x1E00CD20)
#define BOFJIOEKDFK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E00CB80)
#define BOFJIOEKDFK_KAFJFOHNGMG_OFFSET UNITYSDK_OFFSET(0x1E00CCD0)
#define BOFJIOEKDFK_LLKFHEMNEHN_OFFSET UNITYSDK_OFFSET(0x1E00CCF0)
#define BOFJIOEKDFK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E00D6E0)
#define BOFJIOEKDFK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E00D5A0)
#define BOFJIOEKDFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E00CBB0)
#define BOFJIOEKDFK_PHHCOFDNLGK_OFFSET UNITYSDK_OFFSET(0x1E00CD00)
#define BOFJIOEKDFK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E00D1C0)
#define BOFJIOEKDFK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E00D220)

inline static constexpr unsigned int BOFJIOEKDFK_TypeDefinitionIndex = 28847;

	class BOFJIOEKDFK : public ::System::Object
	{
	public:
		::BLPHONLBNBO* ODEBGOBLILD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::AHCLMAGAHPN* DOEMNNHGAJA; // 0x20
		::KFDEPBCLENF JFKMJEPBGPM; // 0x28
		::System::UInt32 HLOJIJJCOGF; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::BOFJIOEKDFK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BOFJIOEKDFK*>**)UnitySDK::FromName("", "BOFJIOEKDFK")->GetStaticField(0x5DEB0);
		}

		// static const ::System::Object PEEEELHGMDO; // 0x0
		// static const ::System::Object JBKNFIGGEEA; // 0x0
		// static const ::System::Object IFAMDLCBOAE; // 0x0
		// static const ::System::Object DCPOABJDEDE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFJIOEKDFK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BOFJIOEKDFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOFJIOEKDFK*))((::PBYTE)hIl2Cpp + BOFJIOEKDFK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOFJIOEKDFK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BOFJIOEKDFK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BOFJIOEKDFK*>*(*)())((::PBYTE)hIl2Cpp + BOFJIOEKDFK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFJIOEKDFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BOFJIOEKDFK* Clone()
		{
			return ((::BOFJIOEKDFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFJIOEKDFK_CLONE_OFFSET))(this);
		}

		::AHCLMAGAHPN* KAFJFOHNGMG()
		{
			return ((::AHCLMAGAHPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFJIOEKDFK_KAFJFOHNGMG_OFFSET))(this);
		}

		::System::Void AFLGDDKKHBM(::AHCLMAGAHPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHCLMAGAHPN*))((::PBYTE)hIl2Cpp + BOFJIOEKDFK_AFLGDDKKHBM_OFFSET))(this, a1);
		}

		::System::UInt32 LLKFHEMNEHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFJIOEKDFK_LLKFHEMNEHN_OFFSET))(this);
		}

		::System::Void PHHCOFDNLGK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BOFJIOEKDFK_PHHCOFDNLGK_OFFSET))(this, a1);
		}

		::BLPHONLBNBO* GPCIDCAANHB()
		{
			return ((::BLPHONLBNBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFJIOEKDFK_GPCIDCAANHB_OFFSET))(this);
		}

		::System::Void JDLIMFLEDNJ(::BLPHONLBNBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLPHONLBNBO*))((::PBYTE)hIl2Cpp + BOFJIOEKDFK_JDLIMFLEDNJ_OFFSET))(this, a1);
		}

		::KFDEPBCLENF EHEMEPOKGCP()
		{
			return ((::KFDEPBCLENF(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFJIOEKDFK_EHEMEPOKGCP_OFFSET))(this);
		}

		::System::Void CIMJOILMLMD(::KFDEPBCLENF a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFDEPBCLENF))((::PBYTE)hIl2Cpp + BOFJIOEKDFK_CIMJOILMLMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BOFJIOEKDFK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BOFJIOEKDFK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BOFJIOEKDFK*))((::PBYTE)hIl2Cpp + BOFJIOEKDFK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFJIOEKDFK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFJIOEKDFK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BOFJIOEKDFK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFJIOEKDFK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BOFJIOEKDFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOFJIOEKDFK*))((::PBYTE)hIl2Cpp + BOFJIOEKDFK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BOFJIOEKDFK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
