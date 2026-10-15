#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJIAHMMPICB_NpcShowState.h"
#include "unitysdk/HJIAHMMPICB_NpcStateControlSource.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EONKJJEBGLN;
namespace RPG::Client { class EraFlipperCommonConfig; }
namespace RPG::Client { class EraFlipperManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCComponent; }
namespace System { class Object; }
namespace System { class String; }

#define HJIAHMMPICB_BEFOREDISPOSE_OFFSET UNITYSDK_OFFSET(0x15D16BD0)
#define HJIAHMMPICB_CCLHPIFFMCP_OFFSET UNITYSDK_OFFSET(0x15D15FC0)
#define HJIAHMMPICB_CEPJHGNMKJD_OFFSET UNITYSDK_OFFSET(0x15D16CE0)
#define HJIAHMMPICB_CNBJICANEMC_OFFSET UNITYSDK_OFFSET(0x15D17150)
#define HJIAHMMPICB_CTOR_OFFSET UNITYSDK_OFFSET(0x15D177B0)
#define HJIAHMMPICB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D16B90)
#define HJIAHMMPICB_EGMLKMJJCMD_OFFSET UNITYSDK_OFFSET(0x15D176D0)
#define HJIAHMMPICB_FMCPNDNGJOO_OFFSET UNITYSDK_OFFSET(0x15D170E0)
#define HJIAHMMPICB_GHHOOCLEENA_OFFSET UNITYSDK_OFFSET(0x15D15760)
#define HJIAHMMPICB_GHIFMGPKFPF_OFFSET UNITYSDK_OFFSET(0x15D15D70)
#define HJIAHMMPICB_HGGCEIACJAL_OFFSET UNITYSDK_OFFSET(0x15D171E0)
#define HJIAHMMPICB_JIFPPKNBGMH_OFFSET UNITYSDK_OFFSET(0x15D15780)
#define HJIAHMMPICB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15D15520)
#define HJIAHMMPICB_OCCIFHOEJMI_OFFSET UNITYSDK_OFFSET(0x15D16580)
#define HJIAHMMPICB_TICK_OFFSET UNITYSDK_OFFSET(0x15D16E70)

inline static constexpr unsigned int HJIAHMMPICB_TypeDefinitionIndex = 73308;

	class HJIAHMMPICB : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::NPCComponent* OLMFOBHMCKN; // 0x18
		::System::String* GJEJIPHAAMF; // 0x20
		::EONKJJEBGLN* DFDEKCNODOE; // 0x28
		::System::String* POPAAAFPELI; // 0x30
		::RPG::Client::EraFlipperManager* JBIAKKMHBEH; // 0x38
		::System::Nullable_1<::System::Object*> OBDPBBAABGK; // 0x40
		::HJIAHMMPICB_NpcShowState CFKDCNLOMNN; // 0x48
		::System::Single LDGHLNKPJON; // 0x4C
		::System::Boolean OPJDFDIKDIN; // 0x50
		::System::Byte _padding0[0x3];
		::System::Single OJGJKNMNBDH; // 0x54
		::System::UInt32 NHOPHPGJGME; // 0x58
		::System::Nullable_1<::System::Object*> KBDLFAAGIAA; // 0x5C
		::System::Int32 HAKEBJOFIGO; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIAHMMPICB_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::EraFlipperCommonConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EraFlipperCommonConfig*))((::PBYTE)hIl2Cpp + HJIAHMMPICB_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Boolean GHHOOCLEENA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIAHMMPICB_GHHOOCLEENA_OFFSET))(this);
		}

		::System::Void JIFPPKNBGMH(::HJIAHMMPICB_NpcShowState a1, ::HJIAHMMPICB_NpcStateControlSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::HJIAHMMPICB_NpcShowState, ::HJIAHMMPICB_NpcStateControlSource))((::PBYTE)hIl2Cpp + HJIAHMMPICB_JIFPPKNBGMH_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIAHMMPICB_DISPOSE_OFFSET))(this);
		}

		::System::Void BeforeDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIAHMMPICB_BEFOREDISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HJIAHMMPICB_TICK_OFFSET))(this, a1);
		}

		::System::Void FMCPNDNGJOO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HJIAHMMPICB_FMCPNDNGJOO_OFFSET))(this, a1);
		}

		::System::Void CCLHPIFFMCP(::HJIAHMMPICB_NpcStateControlSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJIAHMMPICB_NpcStateControlSource))((::PBYTE)hIl2Cpp + HJIAHMMPICB_CCLHPIFFMCP_OFFSET))(this, a1);
		}

		::System::Void OCCIFHOEJMI(::HJIAHMMPICB_NpcStateControlSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJIAHMMPICB_NpcStateControlSource))((::PBYTE)hIl2Cpp + HJIAHMMPICB_OCCIFHOEJMI_OFFSET))(this, a1);
		}

		::System::UInt32 GHIFMGPKFPF(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + HJIAHMMPICB_GHIFMGPKFPF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CEPJHGNMKJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIAHMMPICB_CEPJHGNMKJD_OFFSET))(this);
		}

		::System::Void CNBJICANEMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIAHMMPICB_CNBJICANEMC_OFFSET))(this);
		}

		::System::Void HGGCEIACJAL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HJIAHMMPICB_HGGCEIACJAL_OFFSET))(this, a1);
		}

		::System::Void EGMLKMJJCMD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HJIAHMMPICB_EGMLKMJJCMD_OFFSET))(this, a1);
		}

	};
