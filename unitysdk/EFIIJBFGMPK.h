#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECPDFJJNDBI;
class HLNCKGFLOAI;
namespace RPG::Client { template <typename T> class ScopeUser_1; }
namespace System { class String; }
namespace System::IO { class BinaryWriter; }

#define EFIIJBFGMPK_AGHMGLJOFIB_OFFSET UNITYSDK_OFFSET(0x1C431F20)
#define EFIIJBFGMPK_BAKDIMJICMN_OFFSET UNITYSDK_OFFSET(0x1C463120)
#define EFIIJBFGMPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C431BF0)
#define EFIIJBFGMPK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C4324D0)
#define EFIIJBFGMPK_EBBECKAAOJI_OFFSET UNITYSDK_OFFSET(0x1C462F90)
#define EFIIJBFGMPK_HAAONNECMCF_OFFSET UNITYSDK_OFFSET(0x1C460E10)
#define EFIIJBFGMPK_MGMBPDOKNEG_OFFSET UNITYSDK_OFFSET(0x1C463000)
#define EFIIJBFGMPK_NIBCDPDJJBP_OFFSET UNITYSDK_OFFSET(0x1C462F40)
#define EFIIJBFGMPK_OHCJOIANPFG_OFFSET UNITYSDK_OFFSET(0x1C463730)

inline static constexpr unsigned int EFIIJBFGMPK_TypeDefinitionIndex = 41561;

	class EFIIJBFGMPK : public ::System::Object
	{
	public:
		::Il2CppArray<::HLNCKGFLOAI*>* ONKAMPHIMKH; // 0x10
		::HLNCKGFLOAI* HLBJOOPGBOI; // 0x18
		::System::String* BEPENCIBLDA; // 0x20
		::Il2CppArray<::System::Byte>* HDKHKBDEMJK; // 0x28
		::ECPDFJJNDBI* DFNBPMDNOKF; // 0x30
		::System::Boolean HANLIJNLAPI; // 0x38
		// static const ::System::Object PAMJFKMFGDG; // 0x0
		// static const ::System::Object ADLIHHPHHLG; // 0x0
		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::UInt16 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + EFIIJBFGMPK_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 NIBCDPDJJBP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFIIJBFGMPK_NIBCDPDJJBP_OFFSET))(this);
		}

		::HLNCKGFLOAI* EBBECKAAOJI(::System::Int32 a1)
		{
			return ((::HLNCKGFLOAI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EFIIJBFGMPK_EBBECKAAOJI_OFFSET))(this, a1);
		}

		::RPG::Client::ScopeUser_1<::HLNCKGFLOAI*>* HAAONNECMCF()
		{
			return ((::RPG::Client::ScopeUser_1<::HLNCKGFLOAI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFIIJBFGMPK_HAAONNECMCF_OFFSET))(this);
		}

		::RPG::Client::ScopeUser_1<::HLNCKGFLOAI*>* AGHMGLJOFIB(::System::Int32 a1)
		{
			return ((::RPG::Client::ScopeUser_1<::HLNCKGFLOAI*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EFIIJBFGMPK_AGHMGLJOFIB_OFFSET))(this, a1);
		}

		::System::Void MGMBPDOKNEG(::System::IO::BinaryWriter* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::UInt16))((::PBYTE)hIl2Cpp + EFIIJBFGMPK_MGMBPDOKNEG_OFFSET))(this, a1, a2);
		}

		::System::Void BAKDIMJICMN(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + EFIIJBFGMPK_BAKDIMJICMN_OFFSET))(this, a1);
		}

		::System::Void OHCJOIANPFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFIIJBFGMPK_OHCJOIANPFG_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFIIJBFGMPK_DISPOSE_OFFSET))(this);
		}

	};
