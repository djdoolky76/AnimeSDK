#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
class DLLOHMOOHNE;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerWalkingEffect; }

#define KANIOHEIKCL_AKLBDFNBMFP_OFFSET UNITYSDK_OFFSET(0x19DB6F00)
#define KANIOHEIKCL_CTOR_OFFSET UNITYSDK_OFFSET(0x19DB6100)
#define KANIOHEIKCL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19DB6270)
#define KANIOHEIKCL_EFGFLCDCHAN_OFFSET UNITYSDK_OFFSET(0x19DB7710)
#define KANIOHEIKCL_FGHDFKFLKIB_OFFSET UNITYSDK_OFFSET(0x19DB6F50)
#define KANIOHEIKCL_GHIFMGPKFPF_OFFSET UNITYSDK_OFFSET(0x19DB63A0)
#define KANIOHEIKCL_HOCCCLLOADF_OFFSET UNITYSDK_OFFSET(0x19DB70D0)
#define KANIOHEIKCL_JNOBFOBKDBM_OFFSET UNITYSDK_OFFSET(0x19DB62C0)
#define KANIOHEIKCL_KHJCKICHIJP_OFFSET UNITYSDK_OFFSET(0x19DB6E30)
#define KANIOHEIKCL_LGGCGEGMEIE_OFFSET UNITYSDK_OFFSET(0x19DB6E80)
#define KANIOHEIKCL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19DB6110)
#define KANIOHEIKCL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19DB61C0)
#define KANIOHEIKCL_TICK_OFFSET UNITYSDK_OFFSET(0x19DB6210)

inline static constexpr unsigned int KANIOHEIKCL_TypeDefinitionIndex = 57700;

	class KANIOHEIKCL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::DLLOHMOOHNE* NNOOKIIAOHO; // 0x20
		::RPG::GameCore::TriggerWalkingEffect* OFKGLJOAMLD; // 0x28
		::UnityEngine::Vector3 MPGKDFOPGKP; // 0x30
		::UnityEngine::Quaternion NMHAGNIJHFE; // 0x3C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerWalkingEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerWalkingEffect*))((::PBYTE)hIl2Cpp + KANIOHEIKCL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANIOHEIKCL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANIOHEIKCL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KANIOHEIKCL_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANIOHEIKCL_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::Vector3 JNOBFOBKDBM()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KANIOHEIKCL_JNOBFOBKDBM_OFFSET))(this);
		}

		::System::Void GHIFMGPKFPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANIOHEIKCL_GHIFMGPKFPF_OFFSET))(this);
		}

		::System::Void LGGCGEGMEIE(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KANIOHEIKCL_LGGCGEGMEIE_OFFSET))(this, a1);
		}

		::System::Void AKLBDFNBMFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANIOHEIKCL_AKLBDFNBMFP_OFFSET))(this);
		}

		::System::Void FGHDFKFLKIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANIOHEIKCL_FGHDFKFLKIB_OFFSET))(this);
		}

		::System::Void KHJCKICHIJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANIOHEIKCL_KHJCKICHIJP_OFFSET))(this);
		}

		::System::Void HOCCCLLOADF(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KANIOHEIKCL_HOCCCLLOADF_OFFSET))(this, a1);
		}

		::System::Void EFGFLCDCHAN(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + KANIOHEIKCL_EFGFLCDCHAN_OFFSET))(this, a1, a2);
		}

	};
