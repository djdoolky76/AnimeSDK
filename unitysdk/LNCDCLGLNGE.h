#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class GMKKKHJMOCE;
class MCNEHNAAICP;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::UI { class Text; }

#define LNCDCLGLNGE_CTOR_OFFSET UNITYSDK_OFFSET(0xB7CFA10)
#define LNCDCLGLNGE_EAGBIHBPNNJ_OFFSET UNITYSDK_OFFSET(0xB7CF900)
#define LNCDCLGLNGE_KOFGHGIMKBM_OFFSET UNITYSDK_OFFSET(0xB7CF8B0)
#define LNCDCLGLNGE_LHDMCLNGPKH_OFFSET UNITYSDK_OFFSET(0xB7CF6E0)
#define LNCDCLGLNGE_MDPEBFOFHCG_OFFSET UNITYSDK_OFFSET(0xB7CF7C0)
#define LNCDCLGLNGE_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB7CF5A0)
#define LNCDCLGLNGE_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB7CF640)
#define LNCDCLGLNGE__ONBIND_OFFSET UNITYSDK_OFFSET(0xB7CF4C0)

inline static constexpr unsigned int LNCDCLGLNGE_TypeDefinitionIndex = 72144;

	class LNCDCLGLNGE : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animator* APPGGMLEPLN; // 0x60
		::GMKKKHJMOCE* EDEGPOOIBKM; // 0x68
		::MCNEHNAAICP* PDECIAHJGCM; // 0x70
		::UnityEngine::UI::Text* LMEGFCBOMKH; // 0x78
		::UnityEngine::UI::Text* GEINNDOAFJO; // 0x80
		::UnityEngine::UI::Text* KONDJNAFEMI; // 0x88
		::UnityEngine::Animation* BAFAAEFEBPJ; // 0x90
		::Il2CppArray<::System::Int32>* OLHCJGDOHFG; // 0x98
		::System::Int32 DCMGLEJOEPF; // 0xA0
		::System::Int32 NCAJAIMOMHC; // 0xA4
		::System::Int32 IKIIIHNECLG; // 0xA8
		::System::Int32 IEDOGOCIAKN; // 0xAC
		::System::Int32 AHDFAJHJAKM; // 0xB0
		// static const ::System::String* JJJIFEPDDAA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCDCLGLNGE_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCDCLGLNGE__ONBIND_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCDCLGLNGE_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LNCDCLGLNGE_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void LHDMCLNGPKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCDCLGLNGE_LHDMCLNGPKH_OFFSET))(this);
		}

		::System::Int32 EAGBIHBPNNJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCDCLGLNGE_EAGBIHBPNNJ_OFFSET))(this);
		}

		::System::Void MDPEBFOFHCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCDCLGLNGE_MDPEBFOFHCG_OFFSET))(this);
		}

		::System::Void KOFGHGIMKBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCDCLGLNGE_KOFGHGIMKBM_OFFSET))(this);
		}

	};
