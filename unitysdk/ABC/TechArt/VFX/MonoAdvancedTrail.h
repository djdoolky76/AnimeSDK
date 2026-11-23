#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class A0CA03252AB97E78;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class LineRenderer; }

#define ABC_TECHART_VFX_MONOADVANCEDTRAIL_A209A9ABAA69F58D_OFFSET UNITYSDK_OFFSET(0x28752E0)
#define ABC_TECHART_VFX_MONOADVANCEDTRAIL_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x2875CC0)
#define ABC_TECHART_VFX_MONOADVANCEDTRAIL_AD32174B3ED6791E_OFFSET UNITYSDK_OFFSET(0x2875E50)
#define ABC_TECHART_VFX_MONOADVANCEDTRAIL_BA60EF9798F1DEA6_OFFSET UNITYSDK_OFFSET(0x2876400)
#define ABC_TECHART_VFX_MONOADVANCEDTRAIL_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2875D70)
#define ABC_TECHART_VFX_MONOADVANCEDTRAIL_BFAAC54A6FA170C6_OFFSET UNITYSDK_OFFSET(0x2876040)
#define ABC_TECHART_VFX_MONOADVANCEDTRAIL_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x28768E0)
#define ABC_TECHART_VFX_MONOADVANCEDTRAIL_E104FFA4D93CBAF7_OFFSET UNITYSDK_OFFSET(0x2876150)
#define ABC_TECHART_VFX_MONOADVANCEDTRAIL_F896C38848C08209_OFFSET UNITYSDK_OFFSET(0x2875550)
#define ABC_TECHART_VFX_MONOADVANCEDTRAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x2876930)

namespace ABC::TechArt::VFX
{
	inline static constexpr unsigned int MonoAdvancedTrail_TypeDefinitionIndex = 16102;

	class MonoAdvancedTrail : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Lifetime; // 0x20
		::System::UInt32 SmoothFactor; // 0x24
		::System::Single FCA67A2D34805A40; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::LineRenderer* B72F1C9ED6C0B68E; // 0x30
		::System::Collections::Generic::List_1<::A0CA03252AB97E78*>* F1FE15BD96F09085; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* F51FD12609F86F11; // 0x40
		::UnityEngine::Vector3 F3A376EAEB3247C2; // 0x48

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOADVANCEDTRAIL_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void BFAAC54A6FA170C6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOADVANCEDTRAIL_BFAAC54A6FA170C6_OFFSET))(this);
		}

		::UnityEngine::Vector3 F896C38848C08209(::System::Single BBCFEC7DB309E927)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOADVANCEDTRAIL_F896C38848C08209_OFFSET))(this, BBCFEC7DB309E927);
		}

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOADVANCEDTRAIL_E02954280801633F_OFFSET))(this);
		}

		::System::Void BA60EF9798F1DEA6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOADVANCEDTRAIL_BA60EF9798F1DEA6_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOADVANCEDTRAIL__CTOR_OFFSET))(this);
		}

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOADVANCEDTRAIL_A28D6A0C3E793E7D_OFFSET))(this);
		}

		::System::Void E104FFA4D93CBAF7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOADVANCEDTRAIL_E104FFA4D93CBAF7_OFFSET))(this);
		}

		::System::Void A209A9ABAA69F58D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOADVANCEDTRAIL_A209A9ABAA69F58D_OFFSET))(this);
		}

		static ::System::Boolean AD32174B3ED6791E(::UnityEngine::Vector3 B35BBBE7E39341A2, ::UnityEngine::Vector3 AE40CAA6BBFEAD2C)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOADVANCEDTRAIL_AD32174B3ED6791E_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
		}
	};
}
