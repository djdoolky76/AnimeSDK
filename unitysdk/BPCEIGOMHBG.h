#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCFAMCBIDNC;
class ECPDFJJNDBI;
class FLKLNIEDGFF;
class GIECAJFKIBJ;
class HLNCKGFLOAI;
namespace RPG::Client { template <typename T> class ScopeUser_1; }
namespace System { class String; }
namespace System::IO { class BinaryWriter; }

#define BPCEIGOMHBG_AGHMGLJOFIB_OFFSET UNITYSDK_OFFSET(0x1C41CD40)
#define BPCEIGOMHBG_BAKDIMJICMN_OFFSET UNITYSDK_OFFSET(0x1C41D5D0)
#define BPCEIGOMHBG_BHFONLCIOHI_OFFSET UNITYSDK_OFFSET(0x1C41D230)
#define BPCEIGOMHBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C41CA90)
#define BPCEIGOMHBG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C41F800)
#define BPCEIGOMHBG_DOOOLJBGLJN_OFFSET UNITYSDK_OFFSET(0x1C41CFB0)
#define BPCEIGOMHBG_HAAONNECMCF_OFFSET UNITYSDK_OFFSET(0x1C41CCD0)
#define BPCEIGOMHBG_MGMBPDOKNEG_OFFSET UNITYSDK_OFFSET(0x1C41D4B0)
#define BPCEIGOMHBG_NIBCDPDJJBP_OFFSET UNITYSDK_OFFSET(0x1C41CA40)
#define BPCEIGOMHBG_OHCJOIANPFG_OFFSET UNITYSDK_OFFSET(0x1C41DC90)

inline static constexpr unsigned int BPCEIGOMHBG_TypeDefinitionIndex = 41562;

	class BPCEIGOMHBG : public ::System::Object
	{
	public:
		::ECPDFJJNDBI* DFNBPMDNOKF; // 0x10
		::System::String* BEPENCIBLDA; // 0x18
		::HLNCKGFLOAI* HLBJOOPGBOI; // 0x20
		::Il2CppArray<::System::Byte>* HDKHKBDEMJK; // 0x28
		::Il2CppArray<::BCFAMCBIDNC*>* ONKAMPHIMKH; // 0x30
		::System::Boolean HANLIJNLAPI; // 0x38
		// static const ::System::Object PAMJFKMFGDG; // 0x0
		// static const ::System::Object ADLIHHPHHLG; // 0x0
		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::UInt16 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + BPCEIGOMHBG_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 NIBCDPDJJBP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCEIGOMHBG_NIBCDPDJJBP_OFFSET))(this);
		}

		::RPG::Client::ScopeUser_1<::HLNCKGFLOAI*>* HAAONNECMCF()
		{
			return ((::RPG::Client::ScopeUser_1<::HLNCKGFLOAI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCEIGOMHBG_HAAONNECMCF_OFFSET))(this);
		}

		::RPG::Client::ScopeUser_1<::HLNCKGFLOAI*>* AGHMGLJOFIB(::System::Int32 a1)
		{
			return ((::RPG::Client::ScopeUser_1<::HLNCKGFLOAI*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPCEIGOMHBG_AGHMGLJOFIB_OFFSET))(this, a1);
		}

		::RPG::Client::ScopeUser_1<::GIECAJFKIBJ*>* DOOOLJBGLJN(::System::Int32 a1)
		{
			return ((::RPG::Client::ScopeUser_1<::GIECAJFKIBJ*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPCEIGOMHBG_DOOOLJBGLJN_OFFSET))(this, a1);
		}

		::RPG::Client::ScopeUser_1<::FLKLNIEDGFF*>* BHFONLCIOHI(::System::Int32 a1)
		{
			return ((::RPG::Client::ScopeUser_1<::FLKLNIEDGFF*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPCEIGOMHBG_BHFONLCIOHI_OFFSET))(this, a1);
		}

		::System::Void MGMBPDOKNEG(::System::IO::BinaryWriter* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::UInt16))((::PBYTE)hIl2Cpp + BPCEIGOMHBG_MGMBPDOKNEG_OFFSET))(this, a1, a2);
		}

		::System::Void BAKDIMJICMN(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + BPCEIGOMHBG_BAKDIMJICMN_OFFSET))(this, a1);
		}

		::System::Void OHCJOIANPFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCEIGOMHBG_OHCJOIANPFG_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCEIGOMHBG_DISPOSE_OFFSET))(this);
		}

	};
