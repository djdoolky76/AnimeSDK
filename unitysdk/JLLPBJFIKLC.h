#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace UnityEngine { class AnimationCurve; }

#define JLLPBJFIKLC_APIIGOEEGJE_OFFSET UNITYSDK_OFFSET(0x18743D90)
#define JLLPBJFIKLC_BIBPFPIBICK_OFFSET UNITYSDK_OFFSET(0x18743F10)
#define JLLPBJFIKLC_CFKDIHGMLOA_OFFSET UNITYSDK_OFFSET(0x187440B0)
#define JLLPBJFIKLC_ENCGCDGGHAH_OFFSET UNITYSDK_OFFSET(0x18743D70)
#define JLLPBJFIKLC_IGJIGJCLNKJ_OFFSET UNITYSDK_OFFSET(0x7CF870)
#define JLLPBJFIKLC_OEMKNEIAKHC_OFFSET UNITYSDK_OFFSET(0x187442D0)

inline static constexpr unsigned int JLLPBJFIKLC_TypeDefinitionIndex = 92400;

struct alignas(8) JLLPBJFIKLC
{
	::System::Single HCGEEEFKNLH; // 0x10
	::System::Single OBMFCIFKHCA; // 0x14
	::UnityEngine::Vector3 ENMMOGNFOEI; // 0x18
	::System::Byte _padding0[0x4];
	::Il2CppArray<::UnityEngine::Vector3>* JONCPEMABLI; // 0x28
	::System::Single PHDJFDLPHEB; // 0x30
	::System::Single AGCOBPADNDK; // 0x34
	::System::Single OOHJHEMFPEK; // 0x38
	::System::Single NIAPDNPIONF; // 0x3C
	::System::Boolean NLMPBPBGMFH; // 0x40
	::System::Boolean IFGGPMMNMDO; // 0x41
	::System::Byte _padding1[0x6];
	::UnityEngine::AnimationCurve* HJKEOEGFOBK; // 0x48

	::PipelineCamera::WorldBasicCameraData IGJIGJCLNKJ()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLPBJFIKLC_IGJIGJCLNKJ_OFFSET))(this);
	}

	static ::System::Single ENCGCDGGHAH(::UnityEngine::Vector3 DAPGPHKGLNM, ::UnityEngine::Vector3 KGEJGPDKGDM, ::UnityEngine::AnimationCurve* IGGPFJKIKAM)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + JLLPBJFIKLC_ENCGCDGGHAH_OFFSET))(DAPGPHKGLNM, KGEJGPDKGDM, IGGPFJKIKAM);
	}

	static ::UnityEngine::Vector3 APIIGOEEGJE(::Il2CppArray<::UnityEngine::Vector3>* DGGIHIDLIEP, ::UnityEngine::Vector3 DAPGPHKGLNM)
	{
		return ((::UnityEngine::Vector3(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JLLPBJFIKLC_APIIGOEEGJE_OFFSET))(DGGIHIDLIEP, DAPGPHKGLNM);
	}

	static ::System::Single BIBPFPIBICK(::System::Single DAGBNOIAKKE, ::System::Single NPHOPECPHLF, ::System::Single KKAMDFNMMJH, ::System::Single EGCKEINKEPM)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JLLPBJFIKLC_BIBPFPIBICK_OFFSET))(DAGBNOIAKKE, NPHOPECPHLF, KKAMDFNMMJH, EGCKEINKEPM);
	}

	static ::System::Single CFKDIHGMLOA(::UnityEngine::Vector3 DAPGPHKGLNM, ::UnityEngine::Vector3 KGEJGPDKGDM, ::System::Single ELHMOANKHFM, ::System::Boolean JANGKLNDNIM, ::System::Boolean BJLBCLHICCO)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + JLLPBJFIKLC_CFKDIHGMLOA_OFFSET))(DAPGPHKGLNM, KGEJGPDKGDM, ELHMOANKHFM, JANGKLNDNIM, BJLBCLHICCO);
	}

	static ::UnityEngine::Vector3 OEMKNEIAKHC(::UnityEngine::Vector3 DAPGPHKGLNM, ::UnityEngine::Vector3 KGEJGPDKGDM, ::System::Single DIJADIGAGCA)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + JLLPBJFIKLC_OEMKNEIAKHC_OFFSET))(DAPGPHKGLNM, KGEJGPDKGDM, DIJADIGAGCA);
	}
};
