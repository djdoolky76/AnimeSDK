#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::CustomRP { class VCMaskConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CUSTOMRP_CRPVIRTUALCAMERAMASK_APPLYMASK_1_OFFSET UNITYSDK_OFFSET(0x1DDB3AE0)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAMASK_APPLYMASK_OFFSET UNITYSDK_OFFSET(0x1DDB31F0)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAMASK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDB3B10)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAMASK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1DDB3B00)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAMASK_RESETMASK_OFFSET UNITYSDK_OFFSET(0x1DDB3AF0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPVirtualCameraMask_TypeDefinitionIndex = 38618;

	class CRPVirtualCameraMask : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::CustomRP::VCMaskConfig*>* vcCameraMaskConfigs; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAMASK_CTOR_OFFSET))(this);
		}

		::System::Void ApplyMask(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAMASK_APPLYMASK_OFFSET))(this, a1);
		}

		::System::Void ApplyMask_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAMASK_APPLYMASK_1_OFFSET))(this);
		}

		::System::Void ResetMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAMASK_RESETMASK_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAMASK_ONENABLE_OFFSET))(this);
		}

	};
}
