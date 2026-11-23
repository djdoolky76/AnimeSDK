#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/VerticalLayoutGroup.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }

#define ABC_UI_MONOCURVELAYOUTGROUP_B9AAFF930381B583_OFFSET UNITYSDK_OFFSET(0x2073AD0)
#define ABC_UI_MONOCURVELAYOUTGROUP_EFE8B00FB1BAD55A_OFFSET UNITYSDK_OFFSET(0x2073730)
#define ABC_UI_MONOCURVELAYOUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x2073AE0)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoCurveLayoutGroup_TypeDefinitionIndex = 8468;

	class MonoCurveLayoutGroup : public ::UnityEngine::UI::VerticalLayoutGroup
	{
	public:
		::UnityEngine::RectTransform* ViewRect; // 0x70
		::System::UInt32 CurveAmplitude; // 0x78
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::Vector3>* BA1B977418FDD2E2; // 0x80
		::Il2CppArray<::UnityEngine::Vector3>* E17A68193640E478; // 0x88

		::System::Void EFE8B00FB1BAD55A(::System::Int32 F24A60394CB7A82C, ::System::Boolean E19349622E6D0446)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_UI_MONOCURVELAYOUTGROUP_EFE8B00FB1BAD55A_OFFSET))(this, F24A60394CB7A82C, E19349622E6D0446);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOCURVELAYOUTGROUP__CTOR_OFFSET))(this);
		}

		::System::Void B9AAFF930381B583(::System::Int32 EF750947C30CE985, ::System::Boolean A468C50BBCDB925A)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_UI_MONOCURVELAYOUTGROUP_B9AAFF930381B583_OFFSET))(this, EF750947C30CE985, A468C50BBCDB925A);
		}
	};
}
