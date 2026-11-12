#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureFeature.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureType.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoEffectFrameCaptureTexPlugin; }
namespace UnityEngine { class MonoBehaviour; }

#define MANCCEALJCK_AENBMEGIGLB_OFFSET UNITYSDK_OFFSET(0xC0B7260)
#define MANCCEALJCK_CTOR_OFFSET UNITYSDK_OFFSET(0xC0B77E0)
#define MANCCEALJCK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0B6950)
#define MANCCEALJCK_EFBCIMCABLC_OFFSET UNITYSDK_OFFSET(0xC0B74B0)
#define MANCCEALJCK_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xC0B6B90)
#define MANCCEALJCK_JNEBFJDGHMD_OFFSET UNITYSDK_OFFSET(0xC0B6F80)
#define MANCCEALJCK_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0xC0B69C0)
#define MANCCEALJCK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC0B68E0)
#define MANCCEALJCK_NPELKFGONDE_OFFSET UNITYSDK_OFFSET(0xC0B6C00)
#define MANCCEALJCK_OICHBKFOPKO_OFFSET UNITYSDK_OFFSET(0xC0B72C0)
#define MANCCEALJCK_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0xC0B6DD0)

inline static constexpr unsigned int MANCCEALJCK_TypeDefinitionIndex = 71816;

	class MANCCEALJCK : public ::RPG::Client::BehaviorBase
	{
	public:
		::UnityEngine::Vector3 IGJIBAIEPCK; // 0x18
		::System::Single HOMAFCBOCPM; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANCCEALJCK_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + MANCCEALJCK_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANCCEALJCK_DISPOSE_OFFSET))(this);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANCCEALJCK_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void POPNLPIAOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANCCEALJCK_POPNLPIAOCM_OFFSET))(this);
		}

		::System::Void NPELKFGONDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANCCEALJCK_NPELKFGONDE_OFFSET))(this);
		}

		::System::Boolean OICHBKFOPKO(::RPG::CustomRP::FrameCapture_CaptureType a1, ::RPG::CustomRP::FrameCapture_CaptureFeature a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::FrameCapture_CaptureType, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + MANCCEALJCK_OICHBKFOPKO_OFFSET))(this, a1, a2);
		}

		::System::Void AENBMEGIGLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANCCEALJCK_AENBMEGIGLB_OFFSET))(this);
		}

		::System::Void EFBCIMCABLC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MANCCEALJCK_EFBCIMCABLC_OFFSET))(this, a1);
		}

		::System::Void JNEBFJDGHMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANCCEALJCK_JNEBFJDGHMD_OFFSET))(this);
		}

		::RPG::Client::MonoEffectFrameCaptureTexPlugin* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectFrameCaptureTexPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + MANCCEALJCK_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
