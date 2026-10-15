#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace RPG::Client { class Effect_Transform; }
namespace RPG::GameCore { class TimelineOverrideEffectTransformOffsetParams; }
namespace RPG::GameCore { class TimelineOverrideEffectTransformRotateParams; }
namespace System { class Nullable; }

#define IFAOLPBNLFG_BEKFLCJHBGH_OFFSET UNITYSDK_OFFSET(0x15F08D50)
#define IFAOLPBNLFG_CTOR_OFFSET UNITYSDK_OFFSET(0x15F09050)
#define IFAOLPBNLFG_DDAEKCFDBNP_OFFSET UNITYSDK_OFFSET(0x15F08F60)
#define IFAOLPBNLFG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F08A80)
#define IFAOLPBNLFG_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x15F08BE0)
#define IFAOLPBNLFG_HNDNIFKJEIB_OFFSET UNITYSDK_OFFSET(0x15F08AE0)
#define IFAOLPBNLFG_PGAKEIEKLPG_OFFSET UNITYSDK_OFFSET(0x15F08EC0)

	class IFAOLPBNLFG : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::Effect_Transform* OIMCMKFHMDK; // 0x18
		::RPG::GameCore::TimelineOverrideEffectTransformOffsetParams* EPNANOBCAHL; // 0x20
		::RPG::GameCore::TimelineOverrideEffectTransformRotateParams* GPHAAJKBEFA; // 0x28
		::RPG::GameCore::TimelineOverrideEffectTransformRotateParams* BDCOKLBALBP; // 0x30
		::RPG::GameCore::TimelineOverrideEffectTransformOffsetParams* NDJHBLBHAPM; // 0x38
		::System::Boolean JHEHFCGCDDG; // 0x40
		::System::Boolean FGCNCDGJOAL; // 0x41
		::System::Nullable* CMADHKDPFMM; // 0x42
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAOLPBNLFG_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAOLPBNLFG_DISPOSE_OFFSET))(this);
		}

		::System::Void DLAILGNMFGI(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::RPG::GameCore::TimelineOverrideEffectTransformOffsetParams* a4, ::System::Boolean a5, ::RPG::GameCore::TimelineOverrideEffectTransformRotateParams* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::TimelineOverrideEffectTransformOffsetParams*, ::System::Boolean, ::RPG::GameCore::TimelineOverrideEffectTransformRotateParams*))((::PBYTE)hIl2Cpp + IFAOLPBNLFG_DLAILGNMFGI_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PGAKEIEKLPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAOLPBNLFG_PGAKEIEKLPG_OFFSET))(this);
		}

		::System::Void HNDNIFKJEIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAOLPBNLFG_HNDNIFKJEIB_OFFSET))(this);
		}

		::System::Void BEKFLCJHBGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAOLPBNLFG_BEKFLCJHBGH_OFFSET))(this);
		}

		::System::Void DDAEKCFDBNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAOLPBNLFG_DDAEKCFDBNP_OFFSET))(this);
		}

	};
