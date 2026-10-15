#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::ActivityAlley { class AlleyPackAnchor; }
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define HKIMBNBAGJA_APODPKJBIHJ_OFFSET UNITYSDK_OFFSET(0x15D47700)
#define HKIMBNBAGJA_BFFOABNBGDK_OFFSET UNITYSDK_OFFSET(0x15D47530)
#define HKIMBNBAGJA_CCIKCBFLPCC_1_OFFSET UNITYSDK_OFFSET(0x15D47870)
#define HKIMBNBAGJA_CCIKCBFLPCC_OFFSET UNITYSDK_OFFSET(0x15D47360)
#define HKIMBNBAGJA_CCTOR_OFFSET UNITYSDK_OFFSET(0x15D48210)
#define HKIMBNBAGJA_EGJHCGHNOGK_OFFSET UNITYSDK_OFFSET(0x15D47F60)
#define HKIMBNBAGJA_KGLGIOFOODK_OFFSET UNITYSDK_OFFSET(0x15D470F0)
#define HKIMBNBAGJA_NNOFFBBODFG_OFFSET UNITYSDK_OFFSET(0x15D47C20)
#define HKIMBNBAGJA_PNBCOIKPMEA_OFFSET UNITYSDK_OFFSET(0x15D477F0)

inline static constexpr unsigned int HKIMBNBAGJA_TypeDefinitionIndex = 74080;

	class HKIMBNBAGJA : public ::System::Object
	{
	public:
		static ::UnityEngine::RaycastHit* StaticGet_EBAMJBAHGIB()
		{
			return (::UnityEngine::RaycastHit*)UnitySDK::FromName("", "HKIMBNBAGJA")->GetStaticField(0x7CD0);
		}

		static ::UnityEngine::RaycastHit* StaticGet_OOEBFCMJMBJ()
		{
			return (::UnityEngine::RaycastHit*)UnitySDK::FromName("", "HKIMBNBAGJA")->GetStaticField(0x7D00);
		}

		static ::UnityEngine::RaycastHit* StaticGet_ADKIAOLDKGM()
		{
			return (::UnityEngine::RaycastHit*)UnitySDK::FromName("", "HKIMBNBAGJA")->GetStaticField(0x7D30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKIMBNBAGJA_CCTOR_OFFSET))();
		}

		static ::System::Boolean KGLGIOFOODK(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + HKIMBNBAGJA_KGLGIOFOODK_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ActivityAlley::AlleyPackComponent* CCIKCBFLPCC()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackComponent*(*)())((::PBYTE)hIl2Cpp + HKIMBNBAGJA_CCIKCBFLPCC_OFFSET))();
		}

		static ::RPG::Client::ActivityAlley::AlleyPackAnchor* BFFOABNBGDK()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackAnchor*(*)())((::PBYTE)hIl2Cpp + HKIMBNBAGJA_BFFOABNBGDK_OFFSET))();
		}

		static ::UnityEngine::Vector3 APODPKJBIHJ()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + HKIMBNBAGJA_APODPKJBIHJ_OFFSET))();
		}

		static ::UnityEngine::RaycastHit PNBCOIKPMEA()
		{
			return ((::UnityEngine::RaycastHit(*)())((::PBYTE)hIl2Cpp + HKIMBNBAGJA_PNBCOIKPMEA_OFFSET))();
		}

		static ::RPG::Client::ActivityAlley::AlleyPackComponent* CCIKCBFLPCC_1(::UnityEngine::Transform* a1, ::System::Single a2, ::UnityEngine::RaycastHit a3)
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackComponent*(*)(::UnityEngine::Transform*, ::System::Single, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + HKIMBNBAGJA_CCIKCBFLPCC_1_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::RaycastHit NNOFFBBODFG(::UnityEngine::Camera* a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::RaycastHit(*)(::UnityEngine::Camera*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HKIMBNBAGJA_NNOFFBBODFG_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Transform* EGJHCGHNOGK(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HKIMBNBAGJA_EGJHCGHNOGK_OFFSET))(a1, a2);
		}

	};
