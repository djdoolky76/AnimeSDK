#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TA::Iris { class IrisCloud; }
namespace TA::Iris { class IrisModifierChain; }
namespace TA::Iris { class IrisRenderer; }
namespace TA::Iris { class ModifierBase; }

#define TA_IRIS_IRIS_A6C562F3AF6281AF_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define TA_IRIS_IRIS_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x285DE40)
#define TA_IRIS_IRIS_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x285E250)
#define TA_IRIS_IRIS_EB7BF3358979BC9C_OFFSET UNITYSDK_OFFSET(0x2106D50)
#define TA_IRIS_IRIS_F8BFA22DD4C5A2DC_OFFSET UNITYSDK_OFFSET(0x285DF40)
#define TA_IRIS_IRIS_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x285DDA0)
#define TA_IRIS_IRIS__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace TA::Iris
{
	inline static constexpr unsigned int Iris_TypeDefinitionIndex = 15989;

	class Iris : public ::UnityEngine::MonoBehaviour
	{
	public:
		::TA::Iris::IrisModifierChain* IrisModifierChain; // 0x20
		::TA::Iris::IrisRenderer* ACA91B2F1F814FB6; // 0x28
		::TA::Iris::IrisCloud* E265B6616D21D7C0; // 0x30

		::System::Collections::Generic::List_1<::TA::Iris::ModifierBase*>* EB7BF3358979BC9C()
		{
			return ((::System::Collections::Generic::List_1<::TA::Iris::ModifierBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_IRIS_IRIS_EB7BF3358979BC9C_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_IRIS_IRIS_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void F8BFA22DD4C5A2DC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_IRIS_IRIS_F8BFA22DD4C5A2DC_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_IRIS_IRIS_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::TA::Iris::IrisCloud* A6C562F3AF6281AF()
		{
			return ((::TA::Iris::IrisCloud*(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_IRIS_IRIS_A6C562F3AF6281AF_OFFSET))(this);
		}

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_IRIS_IRIS_E02954280801633F_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_IRIS_IRIS__CTOR_OFFSET))(this);
		}
	};
}
