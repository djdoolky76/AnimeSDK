#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureFeature.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureType.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoEffectScreenCrackPlugin; }
namespace UnityEngine { class MonoBehaviour; }

#define CMCGLFNABBM_AENBMEGIGLB_OFFSET UNITYSDK_OFFSET(0xDA1DC40)
#define CMCGLFNABBM_CTOR_OFFSET UNITYSDK_OFFSET(0xDA1E220)
#define CMCGLFNABBM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA1D2D0)
#define CMCGLFNABBM_EFBCIMCABLC_OFFSET UNITYSDK_OFFSET(0xDA1DF70)
#define CMCGLFNABBM_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xDA1D840)
#define CMCGLFNABBM_JNEBFJDGHMD_OFFSET UNITYSDK_OFFSET(0xDA1DA00)
#define CMCGLFNABBM_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0xDA1D340)
#define CMCGLFNABBM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xDA1D260)
#define CMCGLFNABBM_MBEDMNPFKBK_OFFSET UNITYSDK_OFFSET(0xDA1DE30)
#define CMCGLFNABBM_OICHBKFOPKO_OFFSET UNITYSDK_OFFSET(0xDA1DCA0)
#define CMCGLFNABBM_PEBPGNOGAMJ_OFFSET UNITYSDK_OFFSET(0xDA1D460)
#define CMCGLFNABBM_PKICMEEHICC_OFFSET UNITYSDK_OFFSET(0xDA1D6B0)
#define CMCGLFNABBM_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0xDA1D890)
#define CMCGLFNABBM___STARTFRAMECAPTURE_B__5_0_OFFSET UNITYSDK_OFFSET(0xDA1E230)

inline static constexpr unsigned int CMCGLFNABBM_TypeDefinitionIndex = 69909;

	class CMCGLFNABBM : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Single HOMAFCBOCPM; // 0x18
		::UnityEngine::Vector3 IGJIBAIEPCK; // 0x1C
		::System::Boolean CMIKDOAOJGM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCGLFNABBM_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CMCGLFNABBM_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCGLFNABBM_DISPOSE_OFFSET))(this);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCGLFNABBM_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void POPNLPIAOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCGLFNABBM_POPNLPIAOCM_OFFSET))(this);
		}

		::System::Void PEBPGNOGAMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCGLFNABBM_PEBPGNOGAMJ_OFFSET))(this);
		}

		::System::Void PKICMEEHICC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCGLFNABBM_PKICMEEHICC_OFFSET))(this);
		}

		::System::Boolean OICHBKFOPKO(::RPG::CustomRP::FrameCapture_CaptureType a1, ::RPG::CustomRP::FrameCapture_CaptureFeature a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::FrameCapture_CaptureType, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + CMCGLFNABBM_OICHBKFOPKO_OFFSET))(this, a1, a2);
		}

		::System::Void AENBMEGIGLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCGLFNABBM_AENBMEGIGLB_OFFSET))(this);
		}

		::System::Void MBEDMNPFKBK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CMCGLFNABBM_MBEDMNPFKBK_OFFSET))(this, a1);
		}

		::System::Void EFBCIMCABLC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CMCGLFNABBM_EFBCIMCABLC_OFFSET))(this, a1);
		}

		::System::Void JNEBFJDGHMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCGLFNABBM_JNEBFJDGHMD_OFFSET))(this);
		}

		::RPG::Client::MonoEffectScreenCrackPlugin* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectScreenCrackPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCGLFNABBM_HPNDIIPEFLJ_OFFSET))(this);
		}

		::System::Void __StartFrameCapture_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCGLFNABBM___STARTFRAMECAPTURE_B__5_0_OFFSET))(this);
		}

	};
