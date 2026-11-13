#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCFAMCBIDNC;
class ECPDFJJNDBI;
class EGGJFHDEHDH;
class FLKLNIEDGFF;
class GIECAJFKIBJ;
namespace RPG::Client { template <typename T> class ScopeUser_1; }
namespace System { class String; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class MemoryStream; }

#define AHLNPLNHFBB_AGHMGLJOFIB_OFFSET UNITYSDK_OFFSET(0x15ABDFF0)
#define AHLNPLNHFBB_BAKDIMJICMN_OFFSET UNITYSDK_OFFSET(0x15ABEC90)
#define AHLNPLNHFBB_BHFONLCIOHI_OFFSET UNITYSDK_OFFSET(0x15ABE6D0)
#define AHLNPLNHFBB_CTOR_OFFSET UNITYSDK_OFFSET(0x15ABDC60)
#define AHLNPLNHFBB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AC1570)
#define AHLNPLNHFBB_DOOOLJBGLJN_OFFSET UNITYSDK_OFFSET(0x15ABE3C0)
#define AHLNPLNHFBB_HAAONNECMCF_OFFSET UNITYSDK_OFFSET(0x15ABDF60)
#define AHLNPLNHFBB_MGMBPDOKNEG_OFFSET UNITYSDK_OFFSET(0x15ABEA00)
#define AHLNPLNHFBB_NIBCDPDJJBP_OFFSET UNITYSDK_OFFSET(0x15ABDAD0)
#define AHLNPLNHFBB_OHCJOIANPFG_OFFSET UNITYSDK_OFFSET(0x15ABF530)

inline static constexpr unsigned int AHLNPLNHFBB_TypeDefinitionIndex = 42538;

	class AHLNPLNHFBB : public ::System::Object
	{
	public:
		::EGGJFHDEHDH* HLBJOOPGBOI; // 0x10
		::ECPDFJJNDBI* DFNBPMDNOKF; // 0x18
		::Il2CppArray<::BCFAMCBIDNC*>* ONKAMPHIMKH; // 0x20
		::System::String* BEPENCIBLDA; // 0x28
		::Il2CppArray<::System::Byte>* HDKHKBDEMJK; // 0x30
		::System::IO::MemoryStream* AFLKGPGMGEP; // 0x38
		::System::Boolean HANLIJNLAPI; // 0x40
		// static const ::System::Object PAMJFKMFGDG; // 0x0
		// static const ::System::Object ADLIHHPHHLG; // 0x0
		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::UInt16 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + AHLNPLNHFBB_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 NIBCDPDJJBP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLNPLNHFBB_NIBCDPDJJBP_OFFSET))(this);
		}

		::RPG::Client::ScopeUser_1<::EGGJFHDEHDH*>* HAAONNECMCF()
		{
			return ((::RPG::Client::ScopeUser_1<::EGGJFHDEHDH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLNPLNHFBB_HAAONNECMCF_OFFSET))(this);
		}

		::RPG::Client::ScopeUser_1<::EGGJFHDEHDH*>* AGHMGLJOFIB(::System::Int32 a1)
		{
			return ((::RPG::Client::ScopeUser_1<::EGGJFHDEHDH*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AHLNPLNHFBB_AGHMGLJOFIB_OFFSET))(this, a1);
		}

		::RPG::Client::ScopeUser_1<::GIECAJFKIBJ*>* DOOOLJBGLJN(::System::Int32 a1)
		{
			return ((::RPG::Client::ScopeUser_1<::GIECAJFKIBJ*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AHLNPLNHFBB_DOOOLJBGLJN_OFFSET))(this, a1);
		}

		::RPG::Client::ScopeUser_1<::FLKLNIEDGFF*>* BHFONLCIOHI(::System::Int32 a1)
		{
			return ((::RPG::Client::ScopeUser_1<::FLKLNIEDGFF*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AHLNPLNHFBB_BHFONLCIOHI_OFFSET))(this, a1);
		}

		::System::Void MGMBPDOKNEG(::System::IO::BinaryWriter* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::UInt16))((::PBYTE)hIl2Cpp + AHLNPLNHFBB_MGMBPDOKNEG_OFFSET))(this, a1, a2);
		}

		::System::Void BAKDIMJICMN(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + AHLNPLNHFBB_BAKDIMJICMN_OFFSET))(this, a1);
		}

		::System::Void OHCJOIANPFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLNPLNHFBB_OHCJOIANPFG_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLNPLNHFBB_DISPOSE_OFFSET))(this);
		}

	};
