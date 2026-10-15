#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
class NCGGFMLOPHB;
class PGGLHFNEMCN;
namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }

#define LNCKJIOBNDO_BJEMCLKDPID_OFFSET UNITYSDK_OFFSET(0xB7D7590)
#define LNCKJIOBNDO_CMGACFNPNMK_OFFSET UNITYSDK_OFFSET(0xB7D7220)
#define LNCKJIOBNDO_CMKNJADHJAC_OFFSET UNITYSDK_OFFSET(0xB7D6AE0)
#define LNCKJIOBNDO_CTOR_OFFSET UNITYSDK_OFFSET(0xB7D6800)
#define LNCKJIOBNDO_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xB7D6A70)
#define LNCKJIOBNDO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7D6920)
#define LNCKJIOBNDO_ENCBIGCDNBJ_OFFSET UNITYSDK_OFFSET(0xB7D6B80)
#define LNCKJIOBNDO_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0xB7D6880)
#define LNCKJIOBNDO_MDFPGKLLNAD_OFFSET UNITYSDK_OFFSET(0xB7D6E20)
#define LNCKJIOBNDO_PCIOHNIEDEM_OFFSET UNITYSDK_OFFSET(0xB7D7020)

inline static constexpr unsigned int LNCKJIOBNDO_TypeDefinitionIndex = 68293;

	class LNCKJIOBNDO : public ::System::Object
	{
	public:
		::PGGLHFNEMCN* LGLKJEPJNGL; // 0x10
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::Playables::PlayableGraph>* OKPGBBMKBIC; // 0x18
		::System::Collections::Generic::List_1<::NCGGFMLOPHB*>* CDDJDLHBFFP; // 0x20
		::System::Single JLDIMMHNCFK; // 0x28
		::System::Boolean KJPIGKGMKFG; // 0x2C
		::System::Boolean IMEGHKJFFCI; // 0x2D
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
