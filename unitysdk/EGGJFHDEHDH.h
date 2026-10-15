#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SectionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
class EGGJFHDEHDH;
namespace RPG::Client { template <typename T> class ScopeUser_1; }
namespace System { class String; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class MemoryStream; }

#define EGGJFHDEHDH_COJIBNGHCJG_OFFSET UNITYSDK_OFFSET(0x1C43E060)
#define EGGJFHDEHDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3FB210)
#define EGGJFHDEHDH_DOPKDMICPCD_OFFSET UNITYSDK_OFFSET(0x1C438510)
#define EGGJFHDEHDH_EKHNOMJLDCH_OFFSET UNITYSDK_OFFSET(0x1C43E1B0)
#define EGGJFHDEHDH_FAMGEJAOKLJ_OFFSET UNITYSDK_OFFSET(0x1C439040)
#define EGGJFHDEHDH_FHFBLGLBFDE_OFFSET UNITYSDK_OFFSET(0x1C43EB00)
#define EGGJFHDEHDH_FMPLLMINOPE_OFFSET UNITYSDK_OFFSET(0x1C43E0F0)
#define EGGJFHDEHDH_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1C43E040)
#define EGGJFHDEHDH_IFPDJCIDGKK_OFFSET UNITYSDK_OFFSET(0x1C3FE730)
#define EGGJFHDEHDH_IJDFCFNMEDO_OFFSET UNITYSDK_OFFSET(0x1C439170)
#define EGGJFHDEHDH_IKOCHGBIGPJ_OFFSET UNITYSDK_OFFSET(0x1C3FC820)
#define EGGJFHDEHDH_IMIKJMCGGML_OFFSET UNITYSDK_OFFSET(0x1C43E010)
#define EGGJFHDEHDH_JKMPIAPPJPD_OFFSET UNITYSDK_OFFSET(0x1C43E030)
#define EGGJFHDEHDH_KCDPGOOBLKO_OFFSET UNITYSDK_OFFSET(0x1C3FB620)
#define EGGJFHDEHDH_KEIHPAJLNKI_OFFSET UNITYSDK_OFFSET(0x1C43E9D0)
#define EGGJFHDEHDH_KOOMAGPKCJN_OFFSET UNITYSDK_OFFSET(0x1C438820)
#define EGGJFHDEHDH_LJLLCKHMMLA_OFFSET UNITYSDK_OFFSET(0x1C43F170)
#define EGGJFHDEHDH_LOLOMBNAANO_OFFSET UNITYSDK_OFFSET(0x1C43F3E0)
#define EGGJFHDEHDH_MLIJLCHBHFC_OFFSET UNITYSDK_OFFSET(0x1C438950)
#define EGGJFHDEHDH_MOJGKEDMPFH_OFFSET UNITYSDK_OFFSET(0x1C43E020)
#define EGGJFHDEHDH_NCKHDDNCIEC_OFFSET UNITYSDK_OFFSET(0x1C43E890)
#define EGGJFHDEHDH_NGJJAMEOMNO_OFFSET UNITYSDK_OFFSET(0x1C43F040)
#define EGGJFHDEHDH_OPDHPJPHDDP_1_OFFSET UNITYSDK_OFFSET(0x1C43EF10)
#define EGGJFHDEHDH_OPDHPJPHDDP_OFFSET UNITYSDK_OFFSET(0x1C43EC30)
#define EGGJFHDEHDH_PJLIIMCPPML_OFFSET UNITYSDK_OFFSET(0x1C43F2A0)
#define EGGJFHDEHDH_PONHHIHOCHH_OFFSET UNITYSDK_OFFSET(0x1C43E3D0)
#define EGGJFHDEHDH_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1C43E050)

inline static constexpr unsigned int EGGJFHDEHDH_TypeDefinitionIndex = 41552;

	class EGGJFHDEHDH : public ::System::Object
	{
	public:
		::System::IO::MemoryStream* AFLKGPGMGEP; // 0x10
		::System::IO::MemoryStream* IPMHANHEPME; // 0x18
		::System::IO::BinaryWriter* LBLHMBNGKEO; // 0x20
		::System::UInt32 FKOJGNPFDIF; // 0x28
		::System::UInt32 _Offset_k__BackingField; // 0x2C
		::System::Int64 OAGMGOFPFHF; // 0x30
		::System::UInt32 JIPLAOBKAJH; // 0x38
		::System::Void _ctor(::System::IO::MemoryStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 IMIKJMCGGML()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_IMIKJMCGGML_OFFSET))(this);
		}

		::System::UInt32 MOJGKEDMPFH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_MOJGKEDMPFH_OFFSET))(this);
		}

		::System::UInt32 IKOCHGBIGPJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_IKOCHGBIGPJ_OFFSET))(this);
		}

		::RPG::Client::SectionType JKMPIAPPJPD()
		{
			return ((::RPG::Client::SectionType(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_JKMPIAPPJPD_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_Offset(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_SET_OFFSET_OFFSET))(this, a1);
		}

		::RPG::Client::ScopeUser_1<::EGGJFHDEHDH*>* COJIBNGHCJG()
		{
			return ((::RPG::Client::ScopeUser_1<::EGGJFHDEHDH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_COJIBNGHCJG_OFFSET))(this);
		}

		::System::Void KCDPGOOBLKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_KCDPGOOBLKO_OFFSET))(this);
		}

		::System::Void FMPLLMINOPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_FMPLLMINOPE_OFFSET))(this);
		}

		::System::Void EKHNOMJLDCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_EKHNOMJLDCH_OFFSET))(this);
		}

		::System::Void IJDFCFNMEDO(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_IJDFCFNMEDO_OFFSET))(this, a1);
		}

		::System::Void MLIJLCHBHFC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_MLIJLCHBHFC_OFFSET))(this, a1);
		}

		::System::Void DOPKDMICPCD(::RPG::Client::ByteHash16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ByteHash16))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_DOPKDMICPCD_OFFSET))(this, a1);
		}

		::System::Void FAMGEJAOKLJ(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_FAMGEJAOKLJ_OFFSET))(this, a1);
		}

		::System::Void PONHHIHOCHH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_PONHHIHOCHH_OFFSET))(this, a1);
		}

		::System::Void NCKHDDNCIEC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_NCKHDDNCIEC_OFFSET))(this, a1);
		}

		::System::Void KEIHPAJLNKI(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_KEIHPAJLNKI_OFFSET))(this, a1);
		}

		::System::Void KOOMAGPKCJN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_KOOMAGPKCJN_OFFSET))(this, a1);
		}

		::System::Void FHFBLGLBFDE(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_FHFBLGLBFDE_OFFSET))(this, a1);
		}

		::System::Void OPDHPJPHDDP(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_OPDHPJPHDDP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OPDHPJPHDDP_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_OPDHPJPHDDP_1_OFFSET))(this, a1);
		}

		::System::Void NGJJAMEOMNO(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_NGJJAMEOMNO_OFFSET))(this, a1);
		}

		::System::Void LJLLCKHMMLA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_LJLLCKHMMLA_OFFSET))(this, a1);
		}

		::System::Void PJLIIMCPPML(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_PJLIIMCPPML_OFFSET))(this, a1);
		}

		::System::Void LOLOMBNAANO(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_LOLOMBNAANO_OFFSET))(this, a1);
		}

		::System::Void IFPDJCIDGKK(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + EGGJFHDEHDH_IFPDJCIDGKK_OFFSET))(this, a1);
		}

	};
