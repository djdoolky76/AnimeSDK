#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SectionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
class HLNCKGFLOAI;
namespace RPG::Client { template <typename T> class ScopeUser_1; }
namespace System { class String; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class MemoryStream; }

#define HLNCKGFLOAI_COJIBNGHCJG_OFFSET UNITYSDK_OFFSET(0x1C45AD70)
#define HLNCKGFLOAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C41CC30)
#define HLNCKGFLOAI_DOPKDMICPCD_OFFSET UNITYSDK_OFFSET(0x1C403B60)
#define HLNCKGFLOAI_EKHNOMJLDCH_OFFSET UNITYSDK_OFFSET(0x1C45AEA0)
#define HLNCKGFLOAI_FAMGEJAOKLJ_OFFSET UNITYSDK_OFFSET(0x1C407E00)
#define HLNCKGFLOAI_FHFBLGLBFDE_OFFSET UNITYSDK_OFFSET(0x1C45B300)
#define HLNCKGFLOAI_FMPLLMINOPE_OFFSET UNITYSDK_OFFSET(0x1C45ADE0)
#define HLNCKGFLOAI_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1C45AD50)
#define HLNCKGFLOAI_IFPDJCIDGKK_OFFSET UNITYSDK_OFFSET(0x1C41F620)
#define HLNCKGFLOAI_IJDFCFNMEDO_OFFSET UNITYSDK_OFFSET(0x1C45B090)
#define HLNCKGFLOAI_IKOCHGBIGPJ_OFFSET UNITYSDK_OFFSET(0x1C41DBE0)
#define HLNCKGFLOAI_IMIKJMCGGML_OFFSET UNITYSDK_OFFSET(0x1C45AD20)
#define HLNCKGFLOAI_JKMPIAPPJPD_OFFSET UNITYSDK_OFFSET(0x1C45AD40)
#define HLNCKGFLOAI_KEIHPAJLNKI_OFFSET UNITYSDK_OFFSET(0x1C432810)
#define HLNCKGFLOAI_KOOMAGPKCJN_OFFSET UNITYSDK_OFFSET(0x1C403920)
#define HLNCKGFLOAI_LJLLCKHMMLA_OFFSET UNITYSDK_OFFSET(0x1C45B7E0)
#define HLNCKGFLOAI_LOLOMBNAANO_OFFSET UNITYSDK_OFFSET(0x1C45BA50)
#define HLNCKGFLOAI_MLIJLCHBHFC_OFFSET UNITYSDK_OFFSET(0x1C403A50)
#define HLNCKGFLOAI_MOJGKEDMPFH_OFFSET UNITYSDK_OFFSET(0x1C45AD30)
#define HLNCKGFLOAI_NCKHDDNCIEC_OFFSET UNITYSDK_OFFSET(0x1C45B1C0)
#define HLNCKGFLOAI_NGJJAMEOMNO_OFFSET UNITYSDK_OFFSET(0x1C45B6B0)
#define HLNCKGFLOAI_OPDHPJPHDDP_1_OFFSET UNITYSDK_OFFSET(0x1C45B580)
#define HLNCKGFLOAI_OPDHPJPHDDP_OFFSET UNITYSDK_OFFSET(0x1C45B430)
#define HLNCKGFLOAI_PJLIIMCPPML_OFFSET UNITYSDK_OFFSET(0x1C45B910)
#define HLNCKGFLOAI_PONHHIHOCHH_OFFSET UNITYSDK_OFFSET(0x1C432920)
#define HLNCKGFLOAI_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1C45AD60)

inline static constexpr unsigned int HLNCKGFLOAI_TypeDefinitionIndex = 41551;

	class HLNCKGFLOAI : public ::System::Object
	{
	public:
		::System::IO::BinaryWriter* LBLHMBNGKEO; // 0x10
		::System::IO::MemoryStream* IPMHANHEPME; // 0x18
		::System::UInt32 JIPLAOBKAJH; // 0x20
		::System::UInt32 FKOJGNPFDIF; // 0x24
		::System::UInt32 _Offset_k__BackingField; // 0x28
		::System::Byte _padding0[0x4];
		::System::Int64 OAGMGOFPFHF; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNCKGFLOAI_CTOR_OFFSET))(this);
		}

		::System::UInt32 IMIKJMCGGML()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNCKGFLOAI_IMIKJMCGGML_OFFSET))(this);
		}

		::System::UInt32 MOJGKEDMPFH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNCKGFLOAI_MOJGKEDMPFH_OFFSET))(this);
		}

		::System::UInt32 IKOCHGBIGPJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNCKGFLOAI_IKOCHGBIGPJ_OFFSET))(this);
		}

		::RPG::Client::SectionType JKMPIAPPJPD()
		{
			return ((::RPG::Client::SectionType(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNCKGFLOAI_JKMPIAPPJPD_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNCKGFLOAI_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_Offset(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLNCKGFLOAI_SET_OFFSET_OFFSET))(this, a1);
		}

		::RPG::Client::ScopeUser_1<::HLNCKGFLOAI*>* COJIBNGHCJG()
		{
			return ((::RPG::Client::ScopeUser_1<::HLNCKGFLOAI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNCKGFLOAI_COJIBNGHCJG_OFFSET))(this);
		}

		::System::Void FMPLLMINOPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNCKGFLOAI_FMPLLMINOPE_OFFSET))(this);
		}

		::System::Void EKHNOMJLDCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNCKGFLOAI_EKHNOMJLDCH_OFFSET))(this);
		}

		::System::Void IJDFCFNMEDO(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + HLNCKGFLOAI_IJDFCFNMEDO_OFFSET))(this, a1);
		}

		::System::Void MLIJLCHBHFC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLNCKGFLOAI_MLIJLCHBHFC_OFFSET))(this, a1);
		}

		::System::Void DOPKDMICPCD(::RPG::Client::ByteHash16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ByteHash16))((::PBYTE)hIl2Cpp + HLNCKGFLOAI_DOPKDMICPCD_OFFSET))(this, a1);
		}

		::System::Void FAMGEJAOKLJ(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + HLNCKGFLOAI_FAMGEJAOKLJ_OFFSET))(this, a1);
		}

		::System::Void PONHHIHOCHH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HLNCKGFLOAI_PONHHIHOCHH_OFFSET))(this, a1);
		}

		::System::Void NCKHDDNCIEC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HLNCKGFLOAI_NCKHDDNCIEC_OFFSET))(this, a1);
		}

		::System::Void KEIHPAJLNKI(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + HLNCKGFLOAI_KEIHPAJLNKI_OFFSET))(this, a1);
		}

		::System::Void KOOMAGPKCJN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HLNCKGFLOAI_KOOMAGPKCJN_OFFSET))(this, a1);
		}

		::System::Void FHFBLGLBFDE(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + HLNCKGFLOAI_FHFBLGLBFDE_OFFSET))(this, a1);
		}

		::System::Void OPDHPJPHDDP(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HLNCKGFLOAI_OPDHPJPHDDP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OPDHPJPHDDP_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HLNCKGFLOAI_OPDHPJPHDDP_1_OFFSET))(this, a1);
		}

		::System::Void NGJJAMEOMNO(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + HLNCKGFLOAI_NGJJAMEOMNO_OFFSET))(this, a1);
		}

		::System::Void LJLLCKHMMLA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLNCKGFLOAI_LJLLCKHMMLA_OFFSET))(this, a1);
		}

		::System::Void PJLIIMCPPML(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + HLNCKGFLOAI_PJLIIMCPPML_OFFSET))(this, a1);
		}

		::System::Void LOLOMBNAANO(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + HLNCKGFLOAI_LOLOMBNAANO_OFFSET))(this, a1);
		}

		::System::Void IFPDJCIDGKK(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HLNCKGFLOAI_IFPDJCIDGKK_OFFSET))(this, a1);
		}

	};
