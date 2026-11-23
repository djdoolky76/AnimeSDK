#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_E7F1ADB2BAB637DF.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class FAED0374422E783A; }

#define CINEMACHINE_CINEMACHINEBLENDDEFINITION_CREATESTANDARDCURVES_OFFSET UNITYSDK_OFFSET(0x2A62F90)
#define CINEMACHINE_CINEMACHINEBLENDDEFINITION_GET_BLENDCURVE_OFFSET UNITYSDK_OFFSET(0x2A63770)
#define CINEMACHINE_CINEMACHINEBLENDDEFINITION_GET_BLENDTIME_OFFSET UNITYSDK_OFFSET(0x2A63840)
#define CINEMACHINE_CINEMACHINEBLENDDEFINITION__CTOR_OFFSET UNITYSDK_OFFSET(0x2A63750)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBlendDefinition_TypeDefinitionIndex = 18417;

	struct alignas(8) CinemachineBlendDefinition
	{
		static ::Il2CppArray<::UnityEngine::FAED0374422E783A*>** StaticGet_sStandardCurves()
		{
			return (::Il2CppArray<::UnityEngine::FAED0374422E783A*>**)Il2CppClass::FromTypeDefinitionIndex(CinemachineBlendDefinition_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Cinemachine::CinemachineBlendDefinition_E7F1ADB2BAB637DF m_Style; // 0x10
		::System::Single m_Time; // 0x14
		::UnityEngine::FAED0374422E783A* m_CustomCurve; // 0x18

		::System::Single get_BlendTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDDEFINITION_GET_BLENDTIME_OFFSET))(this);
		}

		::UnityEngine::FAED0374422E783A* get_BlendCurve()
		{
			return ((::UnityEngine::FAED0374422E783A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDDEFINITION_GET_BLENDCURVE_OFFSET))(this);
		}

		::System::Void CreateStandardCurves()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDDEFINITION_CREATESTANDARDCURVES_OFFSET))(this);
		}

		::System::Void _ctor(::Cinemachine::CinemachineBlendDefinition_E7F1ADB2BAB637DF E753BE58BD730B64, ::System::Single FF0A37159A523E06)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBlendDefinition_E7F1ADB2BAB637DF, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDDEFINITION__CTOR_OFFSET))(this, E753BE58BD730B64, FF0A37159A523E06);
		}
	};
}
