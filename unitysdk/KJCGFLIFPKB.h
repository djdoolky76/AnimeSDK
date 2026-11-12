#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BHFAHPEJDHF;
class CAJBDLAOBPF;
class KNOCJADNCOA;
class NMNIJNNFPGP;
namespace RPG::GameCore { class BattleInstance; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define KJCGFLIFPKB_AJFDLJJCFGA_OFFSET UNITYSDK_OFFSET(0xBCD4350)
#define KJCGFLIFPKB_CBHGEGECCDH_OFFSET UNITYSDK_OFFSET(0xBCD4290)
#define KJCGFLIFPKB_CTOR_OFFSET UNITYSDK_OFFSET(0xBCD4450)
#define KJCGFLIFPKB_IKANLMKJEIO_OFFSET UNITYSDK_OFFSET(0xBCD38E0)
#define KJCGFLIFPKB_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xBCD3FB0)
#define KJCGFLIFPKB_LEAGLAJKCKB_OFFSET UNITYSDK_OFFSET(0xBCD3E80)
#define KJCGFLIFPKB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBCD3F00)
#define KJCGFLIFPKB_PNJKFOILFOB_OFFSET UNITYSDK_OFFSET(0xBCD4400)
#define KJCGFLIFPKB__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xBCD3670)
#define KJCGFLIFPKB__ONBIND_OFFSET UNITYSDK_OFFSET(0xBCD3890)
#define KJCGFLIFPKB__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xBCD3820)
#define KJCGFLIFPKB__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBCD3E20)

inline static constexpr unsigned int KJCGFLIFPKB_TypeDefinitionIndex = 73995;

	class KJCGFLIFPKB : public ::FMPCODLIOLG
	{
	public:
		::BHFAHPEJDHF* CAICEMLCJMI; // 0x60
		::CAJBDLAOBPF* OGLBPEONFBA; // 0x68
		::System::Collections::Generic::Dictionary_2<::RPG::Client::UISkillIndex, ::NMNIJNNFPGP*>* OMBMEAGNBNL; // 0x70
		::BHFAHPEJDHF* CHAPCPPJAAK; // 0x78
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x80
		::CAJBDLAOBPF* FKIIEFOBHPN; // 0x88
		::System::Boolean EINNACFPAEN; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGFLIFPKB_CTOR_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGFLIFPKB__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + KJCGFLIFPKB__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGFLIFPKB__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGFLIFPKB__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::KNOCJADNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNOCJADNCOA*))((::PBYTE)hIl2Cpp + KJCGFLIFPKB_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>* CBHGEGECCDH(::RPG::Client::UISkillIndex a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>*(*)(::PVOID, ::RPG::Client::UISkillIndex, ::System::Boolean))((::PBYTE)hIl2Cpp + KJCGFLIFPKB_CBHGEGECCDH_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>* AJFDLJJCFGA()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGFLIFPKB_AJFDLJJCFGA_OFFSET))(this);
		}

		::RPG::Client::UISkillIndex PNJKFOILFOB(::RPG::Client::UISkillIndex a1)
		{
			return ((::RPG::Client::UISkillIndex(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + KJCGFLIFPKB_PNJKFOILFOB_OFFSET))(this, a1);
		}

		::System::Void IKANLMKJEIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGFLIFPKB_IKANLMKJEIO_OFFSET))(this);
		}

		::System::Void LEAGLAJKCKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGFLIFPKB_LEAGLAJKCKB_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGFLIFPKB_KANMCJHEFJJ_OFFSET))(this);
		}

	};
