#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/Iris/MirrorModifier_F9FD87D2DD9A7997.h"
#include "unitysdk/TA/Iris/ModifierBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/ACF10FE87B4C5617.h"

namespace TA::Iris { class IrisCloud; }

#define TA_IRIS_MIRRORMODIFIER_APPLYSINGLEAXISMIRROR_OFFSET UNITYSDK_OFFSET(0x28E5420)
#define TA_IRIS_MIRRORMODIFIER_APPLY_OFFSET UNITYSDK_OFFSET(0x28E55E0)
#define TA_IRIS_MIRRORMODIFIER_GETMIRRORMATRIX_OFFSET UNITYSDK_OFFSET(0x28E5690)
#define TA_IRIS_MIRRORMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x28E5A00)
#define TA_IRIS_MIRRORMODIFIER___IFIXBASEPROXY_APPLY_OFFSET UNITYSDK_OFFSET(0x28E59F0)

namespace TA::Iris
{
	inline static constexpr unsigned int MirrorModifier_TypeDefinitionIndex = 16398;

	class MirrorModifier : public ::TA::Iris::ModifierBase
	{
	public:
		::TA::Iris::MirrorModifier_F9FD87D2DD9A7997 mirrorAxis; // 0x28
		::UnityEngine::Vector3 mirrorOrigin; // 0x2C

		::System::Void Apply(::TA::Iris::IrisCloud*& B8B0EF9ED37BA7F0)
		{
			return ((::System::Void(*)(::PVOID, ::TA::Iris::IrisCloud*&))((::PBYTE)hIl2Cpp + TA_IRIS_MIRRORMODIFIER_APPLY_OFFSET))(this, B8B0EF9ED37BA7F0);
		}

		::System::Void __iFixBaseProxy_Apply(::TA::Iris::IrisCloud*& EF750947C30CE985)
		{
			return ((::System::Void(*)(::PVOID, ::TA::Iris::IrisCloud*&))((::PBYTE)hIl2Cpp + TA_IRIS_MIRRORMODIFIER___IFIXBASEPROXY_APPLY_OFFSET))(this, EF750947C30CE985);
		}

		::UnityEngine::ACF10FE87B4C5617 GetMirrorMatrix(::UnityEngine::ACF10FE87B4C5617 E357CA04FF6BFF8C, ::TA::Iris::MirrorModifier_F9FD87D2DD9A7997 F24A60394CB7A82C)
		{
			return ((::UnityEngine::ACF10FE87B4C5617(*)(::PVOID, ::UnityEngine::ACF10FE87B4C5617, ::TA::Iris::MirrorModifier_F9FD87D2DD9A7997))((::PBYTE)hIl2Cpp + TA_IRIS_MIRRORMODIFIER_GETMIRRORMATRIX_OFFSET))(this, E357CA04FF6BFF8C, F24A60394CB7A82C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_IRIS_MIRRORMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void ApplySingleAxisMirror(::TA::Iris::IrisCloud*& B8B0EF9ED37BA7F0, ::TA::Iris::MirrorModifier_F9FD87D2DD9A7997 F24A60394CB7A82C)
		{
			return ((::System::Void(*)(::PVOID, ::TA::Iris::IrisCloud*&, ::TA::Iris::MirrorModifier_F9FD87D2DD9A7997))((::PBYTE)hIl2Cpp + TA_IRIS_MIRRORMODIFIER_APPLYSINGLEAXISMIRROR_OFFSET))(this, B8B0EF9ED37BA7F0, F24A60394CB7A82C);
		}
	};
}
