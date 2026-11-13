#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBMOHEFENME_OLAPONLEDAK.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class AOCHEBFKDIE;
class DGKOJPFODLC;
class FBMOHEFENME;
namespace RPG::GameCore { class BattleInstance; }

#define CJFBIIGGPHK_CTOR_OFFSET UNITYSDK_OFFSET(0x177C6520)
#define CJFBIIGGPHK_IEFPFENDHMF_OFFSET UNITYSDK_OFFSET(0x177C6450)
#define CJFBIIGGPHK_ILAPPOHFAMP_OFFSET UNITYSDK_OFFSET(0x177C61F0)
#define CJFBIIGGPHK_LEFNCDCLHCK_OFFSET UNITYSDK_OFFSET(0x177C63A0)
#define CJFBIIGGPHK_NDGGKOOELEE_OFFSET UNITYSDK_OFFSET(0x177C6320)
#define CJFBIIGGPHK_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x177C6130)
#define CJFBIIGGPHK__ONBIND_OFFSET UNITYSDK_OFFSET(0x177C6090)
#define CJFBIIGGPHK__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x177C6010)

inline static constexpr unsigned int CJFBIIGGPHK_TypeDefinitionIndex = 74300;

	class CJFBIIGGPHK : public ::FMPCODLIOLG
	{
	public:
		::FBMOHEFENME* LMLNMBIKDAE; // 0x60
		::DGKOJPFODLC* GEEHIBLJIDK; // 0x68
		::FBMOHEFENME_OLAPONLEDAK LCPELAJLCAF; // 0x70
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x80
		::AOCHEBFKDIE* CFACCLOBGIM; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFBIIGGPHK_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + CJFBIIGGPHK__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFBIIGGPHK__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CJFBIIGGPHK_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void NDGGKOOELEE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CJFBIIGGPHK_NDGGKOOELEE_OFFSET))(this, a1);
		}

		::System::Void ILAPPOHFAMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFBIIGGPHK_ILAPPOHFAMP_OFFSET))(this);
		}

		::System::Boolean IEFPFENDHMF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFBIIGGPHK_IEFPFENDHMF_OFFSET))(this);
		}

		::System::Void LEFNCDCLHCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFBIIGGPHK_LEFNCDCLHCK_OFFSET))(this);
		}

	};
