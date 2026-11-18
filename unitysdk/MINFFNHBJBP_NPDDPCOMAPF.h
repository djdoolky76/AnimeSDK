#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJDDGKFCNAJ_IGOPHLMOGAO.h"
#include "unitysdk/System/Object.h"

class PJHKDJEGJOG;
namespace MoleMole::Config { class ConfigUISettings; }
namespace System { class Action; }

#define MINFFNHBJBP_NPDDPCOMAPF_BEKLGIAKPLG_OFFSET UNITYSDK_OFFSET(0x14DEAA40)
#define MINFFNHBJBP_NPDDPCOMAPF_EPACKCHICDJ_OFFSET UNITYSDK_OFFSET(0x14DEA8B0)
#define MINFFNHBJBP_NPDDPCOMAPF_GLEJFJKLDIN_OFFSET UNITYSDK_OFFSET(0x14DEA8A0)
#define MINFFNHBJBP_NPDDPCOMAPF_KFNJDJKDLBH_OFFSET UNITYSDK_OFFSET(0x14DEAA30)
#define MINFFNHBJBP_NPDDPCOMAPF_PEDLJFKONMO_OFFSET UNITYSDK_OFFSET(0x14DEA6D0)
#define MINFFNHBJBP_NPDDPCOMAPF__CTOR_OFFSET UNITYSDK_OFFSET(0x14DEA6C0)

inline static constexpr unsigned int MINFFNHBJBP_NPDDPCOMAPF_TypeDefinitionIndex = 79828;

class MINFFNHBJBP_NPDDPCOMAPF : public ::System::Object
{
public:
	::MoleMole::Config::ConfigUISettings* LGBMCKLMNDO; // 0x10
	::PJHKDJEGJOG* AAOCANGHBDG; // 0x18
	::System::Action* EJGDHCIBCJH; // 0x20
	::System::Boolean FENPOOABKEI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINFFNHBJBP_NPDDPCOMAPF__CTOR_OFFSET))(this);
	}

	::System::Void PEDLJFKONMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINFFNHBJBP_NPDDPCOMAPF_PEDLJFKONMO_OFFSET))(this);
	}

	::System::Void GLEJFJKLDIN(::DJDDGKFCNAJ_IGOPHLMOGAO PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::DJDDGKFCNAJ_IGOPHLMOGAO))((::PBYTE)hIl2Cpp + MINFFNHBJBP_NPDDPCOMAPF_GLEJFJKLDIN_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void EPACKCHICDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINFFNHBJBP_NPDDPCOMAPF_EPACKCHICDJ_OFFSET))(this);
	}

	::System::Void KFNJDJKDLBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINFFNHBJBP_NPDDPCOMAPF_KFNJDJKDLBH_OFFSET))(this);
	}

	::System::Void BEKLGIAKPLG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINFFNHBJBP_NPDDPCOMAPF_BEKLGIAKPLG_OFFSET))(this);
	}
};
