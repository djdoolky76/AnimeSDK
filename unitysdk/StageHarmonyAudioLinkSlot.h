#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/StageHarmonyBaseLinkSlot.h"
#include "unitysdk/AudioTriggerInfo.h"
class StageHarmonyAudioDemodulator;
class StageHarmonyAudioLinkSlot_OJKBKDDKCIK;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define STAGEHARMONYAUDIOLINKSLOT_AIDGGGKKGKD_OFFSET UNITYSDK_OFFSET(0xE981840)
#define STAGEHARMONYAUDIOLINKSLOT_CTOR_OFFSET UNITYSDK_OFFSET(0xE981FF0)
#define STAGEHARMONYAUDIOLINKSLOT_EFOLKGFMECA_OFFSET UNITYSDK_OFFSET(0xE981F40)
#define STAGEHARMONYAUDIOLINKSLOT_ENAEOKGJIPL_OFFSET UNITYSDK_OFFSET(0xE981A60)
#define STAGEHARMONYAUDIOLINKSLOT_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xE981420)
#define STAGEHARMONYAUDIOLINKSLOT_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE981250)
#define STAGEHARMONYAUDIOLINKSLOT_MEJBCMOLFPI_OFFSET UNITYSDK_OFFSET(0xE981D50)
#define STAGEHARMONYAUDIOLINKSLOT_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xE981680)

inline static constexpr unsigned int StageHarmonyAudioLinkSlot_TypeDefinitionIndex = 47535;

	class StageHarmonyAudioLinkSlot : public ::StageHarmonyBaseLinkSlot
	{
	public:
		::UnityEngine::GameObject* AudioEmitter; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* _audioStates; // 0x48
		::System::Boolean _isInitialized; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void AIDGGGKKGKD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT_AIDGGGKKGKD_OFFSET))(this, a1);
		}

		::System::Void ENAEOKGJIPL(::StageHarmonyAudioDemodulator* a1, ::AudioTriggerInfo a2, ::StageHarmonyAudioLinkSlot_OJKBKDDKCIK* a3)
		{
			return ((::System::Void(*)(::PVOID, ::StageHarmonyAudioDemodulator*, ::AudioTriggerInfo, ::StageHarmonyAudioLinkSlot_OJKBKDDKCIK*))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT_ENAEOKGJIPL_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 MEJBCMOLFPI(::StageHarmonyAudioDemodulator* a1, ::UnityEngine::GameObject* a2, ::StageHarmonyAudioLinkSlot_OJKBKDDKCIK* a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::StageHarmonyAudioDemodulator*, ::UnityEngine::GameObject*, ::StageHarmonyAudioLinkSlot_OJKBKDDKCIK*))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT_MEJBCMOLFPI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EFOLKGFMECA(::System::UInt32 a1, ::AkCallbackType a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::System::Int32))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT_EFOLKGFMECA_OFFSET))(this, a1, a2, a3);
		}

	};
