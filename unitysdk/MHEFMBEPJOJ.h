#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/IGKFNIEJGLM.h"
class FBEONBAOLAA;
class GAEFEBMGIPF;
class IKBAMHGDEJC;
class LNCDCLGLNGE;
namespace RPG::Client { class PrefabLoadMeta; }

#define MHEFMBEPJOJ_BOELMKAJPLD_OFFSET UNITYSDK_OFFSET(0xC1E76C0)
#define MHEFMBEPJOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC1E7C30)
#define MHEFMBEPJOJ_DEMDIHFEGLH_OFFSET UNITYSDK_OFFSET(0xC1E7B40)
#define MHEFMBEPJOJ_FGMCBIMFDFD_OFFSET UNITYSDK_OFFSET(0xC1E7BE0)
#define MHEFMBEPJOJ_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xC1E77C0)
#define MHEFMBEPJOJ_LCDIFNIKCJA_OFFSET UNITYSDK_OFFSET(0xC1E78D0)
#define MHEFMBEPJOJ_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC1E7840)
#define MHEFMBEPJOJ__ONBIND_OFFSET UNITYSDK_OFFSET(0xC1E7520)
#define MHEFMBEPJOJ__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xC1E7710)
#define MHEFMBEPJOJ__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC1E7770)

inline static constexpr unsigned int MHEFMBEPJOJ_TypeDefinitionIndex = 74195;

	class MHEFMBEPJOJ : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::PrefabLoadMeta* JPIPDPMPCFO; // 0x60
		::GAEFEBMGIPF* KCKANELOJKG; // 0x68
		::FBEONBAOLAA* APPIHABBCGK; // 0x70
		::LNCDCLGLNGE* HPOMCNPLMIC; // 0x78
		::System::Nullable_1<::System::Int32> AGHCMEIFHOP; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEFMBEPJOJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEFMBEPJOJ__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + MHEFMBEPJOJ__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEFMBEPJOJ__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEFMBEPJOJ_NKPPGDENJAE_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEFMBEPJOJ_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void LCDIFNIKCJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEFMBEPJOJ_LCDIFNIKCJA_OFFSET))(this);
		}

		::System::Void DEMDIHFEGLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEFMBEPJOJ_DEMDIHFEGLH_OFFSET))(this);
		}

		::IKBAMHGDEJC* BOELMKAJPLD()
		{
			return ((::IKBAMHGDEJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEFMBEPJOJ_BOELMKAJPLD_OFFSET))(this);
		}

		::System::Int32 FGMCBIMFDFD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEFMBEPJOJ_FGMCBIMFDFD_OFFSET))(this);
		}

	};
