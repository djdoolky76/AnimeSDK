#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/E0885C1184A72467.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class B50D4F0F0669D9A8;

#define ABC_CUSTOMRENDERPIPELINE_WINDFIELD_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x2828210)
#define ABC_CUSTOMRENDERPIPELINE_WINDFIELD_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2828260)
#define ABC_CUSTOMRENDERPIPELINE_WINDFIELD_ECE8C4B16027ACB4_OFFSET UNITYSDK_OFFSET(0x28282B0)
#define ABC_CUSTOMRENDERPIPELINE_WINDFIELD_F5E407B60CCCAC07_OFFSET UNITYSDK_OFFSET(0x2828140)
#define ABC_CUSTOMRENDERPIPELINE_WINDFIELD_FBCC8A90796EEA3D_OFFSET UNITYSDK_OFFSET(0x28283E0)
#define ABC_CUSTOMRENDERPIPELINE_WINDFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x2828340)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int WindField_TypeDefinitionIndex = 16906;

	class WindField : public ::UnityEngine::MonoBehaviour
	{
	public:
		::B88870E9FB4B8C1A::E0885C1184A72467 Type; // 0x20
		::System::Single Radius; // 0x24
		::System::Single Strength; // 0x28
		::System::Single GustWindStrength; // 0x2C
		::System::Single GustWindFrequency; // 0x30
		::System::Byte _padding0[0x4];
		::B50D4F0F0669D9A8<::UnityEngine::Vector3>* F697424F08F42C81; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_WINDFIELD__CTOR_OFFSET))(this);
		}

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_WINDFIELD_A28D6A0C3E793E7D_OFFSET))(this);
		}

		::UnityEngine::Vector3 FBCC8A90796EEA3D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_WINDFIELD_FBCC8A90796EEA3D_OFFSET))(this);
		}

		::System::Void F5E407B60CCCAC07()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_WINDFIELD_F5E407B60CCCAC07_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_WINDFIELD_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void ECE8C4B16027ACB4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_WINDFIELD_ECE8C4B16027ACB4_OFFSET))(this);
		}
	};
}
