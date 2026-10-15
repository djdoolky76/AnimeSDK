#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDEKBGAOMFJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LDEKBGAOMFJ_BCEDDKMKKCC_OFFSET UNITYSDK_OFFSET(0x1E8F6210)
#define LDEKBGAOMFJ_BIFFNEGKKHP_OFFSET UNITYSDK_OFFSET(0x1E8F61E0)
#define LDEKBGAOMFJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8F6660)
#define LDEKBGAOMFJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8F69D0)
#define LDEKBGAOMFJ_CDICDGECCLK_OFFSET UNITYSDK_OFFSET(0x1E8F6200)
#define LDEKBGAOMFJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8F6160)
#define LDEKBGAOMFJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8F6130)
#define LDEKBGAOMFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F6120)
#define LDEKBGAOMFJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8F62E0)
#define LDEKBGAOMFJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8F6250)
#define LDEKBGAOMFJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8F63C0)
#define LDEKBGAOMFJ_HKHLGEDLFPD_OFFSET UNITYSDK_OFFSET(0x1E8F61F0)
#define LDEKBGAOMFJ_IACIPOFGFMF_OFFSET UNITYSDK_OFFSET(0x1E8F6240)
#define LDEKBGAOMFJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8F60B0)
#define LDEKBGAOMFJ_KBLLJPIHIPI_OFFSET UNITYSDK_OFFSET(0x1E8F6230)
#define LDEKBGAOMFJ_KMBINFNPIJF_OFFSET UNITYSDK_OFFSET(0x1E8F6220)
#define LDEKBGAOMFJ_LLEJPKGOBJL_OFFSET UNITYSDK_OFFSET(0x1E8F61D0)
#define LDEKBGAOMFJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8F6930)
#define LDEKBGAOMFJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8F68E0)
#define LDEKBGAOMFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8F6110)
#define LDEKBGAOMFJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8F6400)
#define LDEKBGAOMFJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8F6460)

inline static constexpr unsigned int LDEKBGAOMFJ_TypeDefinitionIndex = 25060;

	class LDEKBGAOMFJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int32 KCCDOABPNBI; // 0x18
		::System::Int32 CJIJMBAMPDC; // 0x1C
		::System::Int32 GDILIJCICMP; // 0x20
		::System::Int32 FLDJMJEKBME; // 0x24
		static ::Google::Protobuf::MessageParser_1<::LDEKBGAOMFJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LDEKBGAOMFJ*>**)UnitySDK::FromName("", "LDEKBGAOMFJ")->GetStaticField(0x33E80);
		}

		// static const ::System::Object CHBAMDPHACF; // 0x0
		// static const ::System::Object LNLEOGJMCIN; // 0x0
		// static const ::System::Object JJPHGIGEFMF; // 0x0
		// static const ::System::Object HMHICPKKGBG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEKBGAOMFJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LDEKBGAOMFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDEKBGAOMFJ*))((::PBYTE)hIl2Cpp + LDEKBGAOMFJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDEKBGAOMFJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LDEKBGAOMFJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LDEKBGAOMFJ*>*(*)())((::PBYTE)hIl2Cpp + LDEKBGAOMFJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEKBGAOMFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LDEKBGAOMFJ* Clone()
		{
			return ((::LDEKBGAOMFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEKBGAOMFJ_CLONE_OFFSET))(this);
		}

		::System::Int32 LLEJPKGOBJL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEKBGAOMFJ_LLEJPKGOBJL_OFFSET))(this);
		}

		::System::Void BIFFNEGKKHP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDEKBGAOMFJ_BIFFNEGKKHP_OFFSET))(this, a1);
		}

		::System::Int32 HKHLGEDLFPD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEKBGAOMFJ_HKHLGEDLFPD_OFFSET))(this);
		}

		::System::Void CDICDGECCLK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDEKBGAOMFJ_CDICDGECCLK_OFFSET))(this, a1);
		}

		::System::Int32 BCEDDKMKKCC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEKBGAOMFJ_BCEDDKMKKCC_OFFSET))(this);
		}

		::System::Void KMBINFNPIJF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDEKBGAOMFJ_KMBINFNPIJF_OFFSET))(this, a1);
		}

		::System::Int32 KBLLJPIHIPI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEKBGAOMFJ_KBLLJPIHIPI_OFFSET))(this);
		}

		::System::Void IACIPOFGFMF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDEKBGAOMFJ_IACIPOFGFMF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDEKBGAOMFJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LDEKBGAOMFJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDEKBGAOMFJ*))((::PBYTE)hIl2Cpp + LDEKBGAOMFJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEKBGAOMFJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEKBGAOMFJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LDEKBGAOMFJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEKBGAOMFJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LDEKBGAOMFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDEKBGAOMFJ*))((::PBYTE)hIl2Cpp + LDEKBGAOMFJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LDEKBGAOMFJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
