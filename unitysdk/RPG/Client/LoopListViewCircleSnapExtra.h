#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace SuperScrollView { class LoopListView2; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_BAMCIMHFBDC_OFFSET UNITYSDK_OFFSET(0xD4DEBE0)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_CTOR_OFFSET UNITYSDK_OFFSET(0xD4DF820)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_FKBEMFDGEKC_OFFSET UNITYSDK_OFFSET(0xD4DF680)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_KDKGMBJALJJ_OFFSET UNITYSDK_OFFSET(0xD4DF780)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_NOCOBHFINII_OFFSET UNITYSDK_OFFSET(0xD4DEB90)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_OCMKLCNKLGM_OFFSET UNITYSDK_OFFSET(0xD4DED10)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_OHJMAIHAEMN_OFFSET UNITYSDK_OFFSET(0xD4DF440)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_OLOHOFOBKAI_OFFSET UNITYSDK_OFFSET(0xD4DF700)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_PCFOGFABAFK_OFFSET UNITYSDK_OFFSET(0xD4DF800)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_START_OFFSET UNITYSDK_OFFSET(0xD4DEAB0)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_UPDATE_OFFSET UNITYSDK_OFFSET(0xD4DECA0)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopListViewCircleSnapExtra_TypeDefinitionIndex = 69017;

	class LoopListViewCircleSnapExtra : public ::UnityEngine::MonoBehaviour
	{
	public:
		::SuperScrollView::LoopListView2* HFDJDHLLNFA; // 0x18
		::System::Single MFNFNEMGFEO; // 0x20
		::System::Single OMCCLONEMAK; // 0x24
		::System::Single IBHGOKKLGLN; // 0x28
		::System::Byte _padding0[0x4];
		::System::String* _CustomAnimationClipName; // 0x30
		::UnityEngine::RectTransform* _ViewPort; // 0x38
		::UnityEngine::Transform* _PCCenterOfCircle; // 0x40
		::System::Single _PCRadius; // 0x48
		::System::Single _PCShownCircleAngle; // 0x4C
		::UnityEngine::Transform* _MobileCenterOfCircle; // 0x50
		::System::Single _MobileRadius; // 0x58
		::System::Single _MobileShownCircleAngle; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_UPDATE_OFFSET))(this);
		}

		::System::Void OCMKLCNKLGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_OCMKLCNKLGM_OFFSET))(this);
		}

		::System::Void OHJMAIHAEMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_OHJMAIHAEMN_OFFSET))(this);
		}

		::System::Void NOCOBHFINII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_NOCOBHFINII_OFFSET))(this);
		}

		::System::Void BAMCIMHFBDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_BAMCIMHFBDC_OFFSET))(this);
		}

		::System::Boolean PCFOGFABAFK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_PCFOGFABAFK_OFFSET))(this);
		}

		::UnityEngine::Transform* OLOHOFOBKAI()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_OLOHOFOBKAI_OFFSET))(this);
		}

		::System::Single KDKGMBJALJJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_KDKGMBJALJJ_OFFSET))(this);
		}

		::System::Single FKBEMFDGEKC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_FKBEMFDGEKC_OFFSET))(this);
		}

	};
}
