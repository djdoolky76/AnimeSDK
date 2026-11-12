#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MapRotation/EffectType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
class PEBBBNOOCFO;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }
namespace System { class String; }

#define LFPOLDCPIGA_CTOR_OFFSET UNITYSDK_OFFSET(0xBF209B0)
#define LFPOLDCPIGA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF20A80)
#define LFPOLDCPIGA_EAAKIOGFCGJ_OFFSET UNITYSDK_OFFSET(0xBF20D00)
#define LFPOLDCPIGA_KAFACGAIJNJ_OFFSET UNITYSDK_OFFSET(0xBF20E40)
#define LFPOLDCPIGA_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xBF20A10)
#define LFPOLDCPIGA_MKLOKIHNIMG_OFFSET UNITYSDK_OFFSET(0xBF20F50)
#define LFPOLDCPIGA_NBBNICIENLH_OFFSET UNITYSDK_OFFSET(0xBF20AD0)
#define LFPOLDCPIGA_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xBF20EC0)
#define LFPOLDCPIGA_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xBF20F00)

inline static constexpr unsigned int LFPOLDCPIGA_TypeDefinitionIndex = 58542;

	class LFPOLDCPIGA : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::String* BHCCCKJOCNL; // 0x18
		::PEBBBNOOCFO* LKCGAFENIJG; // 0x20
		::RPG::Client::MapRotation::EffectType EOBPHJFPCFB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPOLDCPIGA_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPOLDCPIGA_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPOLDCPIGA_DISPOSE_OFFSET))(this);
		}

		::System::Void NBBNICIENLH(::RPG::Client::MapRotation::EffectType a1, ::RPG::Client::TriggerEffectParams* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapRotation::EffectType, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + LFPOLDCPIGA_NBBNICIENLH_OFFSET))(this, a1, a2);
		}

		::System::Void EAAKIOGFCGJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LFPOLDCPIGA_EAAKIOGFCGJ_OFFSET))(this, a1);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPOLDCPIGA_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPOLDCPIGA_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void MKLOKIHNIMG(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + LFPOLDCPIGA_MKLOKIHNIMG_OFFSET))(this, a1, a2);
		}

		::System::Void KAFACGAIJNJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LFPOLDCPIGA_KAFACGAIJNJ_OFFSET))(this, a1);
		}

	};
