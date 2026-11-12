#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class MCNEHNAAICP;
namespace UnityEngine::UI { class Text; }

#define LNCDCLGLNGE_CTOR_OFFSET UNITYSDK_OFFSET(0xC0324E0)
#define LNCDCLGLNGE_MDPEBFOFHCG_OFFSET UNITYSDK_OFFSET(0xC032390)
#define LNCDCLGLNGE_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC032440)
#define LNCDCLGLNGE__ONBIND_OFFSET UNITYSDK_OFFSET(0xC032230)
#define LNCDCLGLNGE__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xC0322E0)
#define LNCDCLGLNGE__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC032340)

inline static constexpr unsigned int LNCDCLGLNGE_TypeDefinitionIndex = 74189;

	class LNCDCLGLNGE : public ::FMPCODLIOLG
	{
	public:
		::MCNEHNAAICP* PDECIAHJGCM; // 0x60
		::UnityEngine::UI::Text* HCPKJEKHAPF; // 0x68
		::System::Int32 IKIIIHNECLG; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCDCLGLNGE_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCDCLGLNGE__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + LNCDCLGLNGE__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCDCLGLNGE__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LNCDCLGLNGE_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void MDPEBFOFHCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCDCLGLNGE_MDPEBFOFHCG_OFFSET))(this);
		}

	};
