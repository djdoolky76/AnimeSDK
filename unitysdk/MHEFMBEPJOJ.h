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

#define MHEFMBEPJOJ_BOELMKAJPLD_OFFSET UNITYSDK_OFFSET(0x1B353D90)
#define MHEFMBEPJOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1B354310)
#define MHEFMBEPJOJ_DEMDIHFEGLH_OFFSET UNITYSDK_OFFSET(0x1B354220)
#define MHEFMBEPJOJ_FGMCBIMFDFD_OFFSET UNITYSDK_OFFSET(0x1B3542C0)
#define MHEFMBEPJOJ_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x1B353E90)
#define MHEFMBEPJOJ_LCDIFNIKCJA_OFFSET UNITYSDK_OFFSET(0x1B353FA0)
#define MHEFMBEPJOJ_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1B353F10)
#define MHEFMBEPJOJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x1B353BF0)
#define MHEFMBEPJOJ__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1B353DE0)
#define MHEFMBEPJOJ__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B353E40)

inline static constexpr unsigned int MHEFMBEPJOJ_TypeDefinitionIndex = 74194;

	class MHEFMBEPJOJ : public ::FMPCODLIOLG
	{
	public:
		::LNCDCLGLNGE* HPOMCNPLMIC; // 0x60
		::FBEONBAOLAA* APPIHABBCGK; // 0x68
		::RPG::Client::PrefabLoadMeta* JPIPDPMPCFO; // 0x70
		::GAEFEBMGIPF* KCKANELOJKG; // 0x78
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
