#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Motions/MonoUIMarquee_MarqueeAxis.h"
#include "unitysdk/RPG/Client/Motions/MonoUIMarquee_MarqueeType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class MOGBNBGMIHF;
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A175250)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_CNPLBHHDNEF_OFFSET UNITYSDK_OFFSET(0x1A1758F0)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A175F80)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_EMMGHDLIPOH_OFFSET UNITYSDK_OFFSET(0x1A1756A0)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_HEDMGNEGHDL_OFFSET UNITYSDK_OFFSET(0x1A1759B0)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_KJJKLJHFALG_OFFSET UNITYSDK_OFFSET(0x1A175CB0)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x1A175590)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_NNBFKALELEA_OFFSET UNITYSDK_OFFSET(0x1A175520)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_OMJJKDFMILM_OFFSET UNITYSDK_OFFSET(0x1A175830)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A1753B0)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE___CREATECIRCLEMOTION_B__9_0_OFFSET UNITYSDK_OFFSET(0x1A175F90)

namespace RPG::Client::Motions
{
	inline static constexpr unsigned int MonoUIMarquee_TypeDefinitionIndex = 75667;

	class MonoUIMarquee : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Motions::MonoUIMarquee_MarqueeAxis _Axis; // 0x18
		::RPG::Client::Motions::MonoUIMarquee_MarqueeType _Type; // 0x1C
		::System::Single _WaitTime; // 0x20
		::System::Single _Speed; // 0x24
		::UnityEngine::RectTransform* LFGMLJCCPCH; // 0x28
		::UnityEngine::RectTransform* FHEMCAFOIKG; // 0x30
		::System::Single OEGGDCLHOHA; // 0x38
		::System::Single CJBBAOGJNCJ; // 0x3C
		::System::Boolean FJMFKJEIOIO; // 0x40
		::System::Boolean ELKJMCILPMA; // 0x41
		::System::Byte _padding0[0x6];
		::MOGBNBGMIHF* FOFBPABLCLA; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOUIMARQUEE_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOUIMARQUEE_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOUIMARQUEE_UPDATE_OFFSET))(this);
		}

		::System::Boolean NNBFKALELEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOUIMARQUEE_NNBFKALELEA_OFFSET))(this);
		}

		::System::Single OMJJKDFMILM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOUIMARQUEE_OMJJKDFMILM_OFFSET))(this);
		}

		::System::Single CNPLBHHDNEF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOUIMARQUEE_CNPLBHHDNEF_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOUIMARQUEE_LJBCDJNNBJH_OFFSET))(this);
		}

		::System::Void EMMGHDLIPOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOUIMARQUEE_EMMGHDLIPOH_OFFSET))(this);
		}

		::MOGBNBGMIHF* HEDMGNEGHDL()
		{
			return ((::MOGBNBGMIHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOUIMARQUEE_HEDMGNEGHDL_OFFSET))(this);
		}

		::MOGBNBGMIHF* KJJKLJHFALG()
		{
			return ((::MOGBNBGMIHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOUIMARQUEE_KJJKLJHFALG_OFFSET))(this);
		}

		::System::Void __CreateCircleMotion_b__9_0(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOUIMARQUEE___CREATECIRCLEMOTION_B__9_0_OFFSET))(this, a1);
		}

	};
}
