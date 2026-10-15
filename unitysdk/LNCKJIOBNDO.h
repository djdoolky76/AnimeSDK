#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
class NCGGFMLOPHB;
class PGGLHFNEMCN;
namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }

#define LNCKJIOBNDO_BJEMCLKDPID_OFFSET UNITYSDK_OFFSET(0xB7D0F50)
#define LNCKJIOBNDO_CMGACFNPNMK_OFFSET UNITYSDK_OFFSET(0xB7D0BE0)
#define LNCKJIOBNDO_CMKNJADHJAC_OFFSET UNITYSDK_OFFSET(0xB7D04A0)
#define LNCKJIOBNDO_CTOR_OFFSET UNITYSDK_OFFSET(0xB7D01C0)
#define LNCKJIOBNDO_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xB7D0430)
#define LNCKJIOBNDO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7D02E0)
#define LNCKJIOBNDO_ENCBIGCDNBJ_OFFSET UNITYSDK_OFFSET(0xB7D0540)
#define LNCKJIOBNDO_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0xB7D0240)
#define LNCKJIOBNDO_MDFPGKLLNAD_OFFSET UNITYSDK_OFFSET(0xB7D07E0)
#define LNCKJIOBNDO_PCIOHNIEDEM_OFFSET UNITYSDK_OFFSET(0xB7D09E0)

inline static constexpr unsigned int LNCKJIOBNDO_TypeDefinitionIndex = 68293;

	class LNCKJIOBNDO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NCGGFMLOPHB*>* CDDJDLHBFFP; // 0x10
		::PGGLHFNEMCN* LGLKJEPJNGL; // 0x18
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::Playables::PlayableGraph>* OKPGBBMKBIC; // 0x20
		::System::Single JLDIMMHNCFK; // 0x28
		::System::Boolean IMEGHKJFFCI; // 0x2C
		::System::Boolean KJPIGKGMKFG; // 0x2D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCKJIOBNDO_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCKJIOBNDO_DISPOSE_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LNCKJIOBNDO_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void ENCBIGCDNBJ(::RPG::Client::MonoEmoPlayableGraph* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEmoPlayableGraph*))((::PBYTE)hIl2Cpp + LNCKJIOBNDO_ENCBIGCDNBJ_OFFSET))(this, a1);
		}

		::System::Void MDFPGKLLNAD(::RPG::Client::MonoEmoPlayableGraph* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEmoPlayableGraph*))((::PBYTE)hIl2Cpp + LNCKJIOBNDO_MDFPGKLLNAD_OFFSET))(this, a1);
		}

		::System::Void IIFINBAGBDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCKJIOBNDO_IIFINBAGBDG_OFFSET))(this);
		}

		::System::Void CMKNJADHJAC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LNCKJIOBNDO_CMKNJADHJAC_OFFSET))(this, a1);
		}

		::System::Void CMGACFNPNMK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LNCKJIOBNDO_CMGACFNPNMK_OFFSET))(this, a1);
		}

		::System::Void BJEMCLKDPID(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LNCKJIOBNDO_BJEMCLKDPID_OFFSET))(this, a1);
		}

		::System::Void PCIOHNIEDEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCKJIOBNDO_PCIOHNIEDEM_OFFSET))(this);
		}

	};
