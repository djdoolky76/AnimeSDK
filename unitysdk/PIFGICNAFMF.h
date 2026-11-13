#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/PIFGICNAFMF_FailReason.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitUINodeOpen; }
namespace UnityEngine { class Transform; }

#define PIFGICNAFMF_AEOHPNEOCLN_OFFSET UNITYSDK_OFFSET(0x1A9C4610)
#define PIFGICNAFMF_AHIOFGEPEGA_OFFSET UNITYSDK_OFFSET(0x1A9C4700)
#define PIFGICNAFMF_AJHMPFEDCIH_OFFSET UNITYSDK_OFFSET(0x1A9C3E20)
#define PIFGICNAFMF_APLONOHCHJA_OFFSET UNITYSDK_OFFSET(0x1A9C4030)
#define PIFGICNAFMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1A9C36E0)
#define PIFGICNAFMF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A9C36F0)
#define PIFGICNAFMF_HBODOIBLBLF_OFFSET UNITYSDK_OFFSET(0x1A9C4420)
#define PIFGICNAFMF_LECDLCEENAP_OFFSET UNITYSDK_OFFSET(0x1A9C3B00)
#define PIFGICNAFMF_MGGHOPGOBKK_OFFSET UNITYSDK_OFFSET(0x1A9C46B0)
#define PIFGICNAFMF_OCLKCPOCKEO_OFFSET UNITYSDK_OFFSET(0x1A9C3F20)
#define PIFGICNAFMF_OEEJJEGCEBJ_OFFSET UNITYSDK_OFFSET(0x1A9C3D70)
#define PIFGICNAFMF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A9C3730)
#define PIFGICNAFMF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A9C37B0)
#define PIFGICNAFMF_POPDJKHOPOA_OFFSET UNITYSDK_OFFSET(0x1A9C4330)
#define PIFGICNAFMF_TICK_OFFSET UNITYSDK_OFFSET(0x1A9C3800)

inline static constexpr unsigned int PIFGICNAFMF_TypeDefinitionIndex = 60216;

	class PIFGICNAFMF : public ::GELIALJDFBL
	{
	public:
		::UnityEngine::Transform* OPBCKGLLCBO; // 0x18
		::RPG::GameCore::WaitUINodeOpen* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Boolean IFPEHIFDMON; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single GCCJKFJCHCH; // 0x34
		::System::Nullable_1<::UnityEngine::Vector3> MLHMMDJIAOL; // 0x38
		::System::Byte _padding1[0x8];
		::PIFGICNAFMF_FailReason HBOPBCMODIE; // 0x48
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitUINodeOpen* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitUINodeOpen*))((::PBYTE)hIl2Cpp + PIFGICNAFMF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFGICNAFMF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFGICNAFMF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFGICNAFMF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIFGICNAFMF_TICK_OFFSET))(this, a1);
		}

		::System::Void OEEJJEGCEBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFGICNAFMF_OEEJJEGCEBJ_OFFSET))(this);
		}

		::System::Boolean LECDLCEENAP(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIFGICNAFMF_LECDLCEENAP_OFFSET))(this, a1);
		}

		::System::Boolean AJHMPFEDCIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFGICNAFMF_AJHMPFEDCIH_OFFSET))(this);
		}

		::System::Boolean OCLKCPOCKEO(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PIFGICNAFMF_OCLKCPOCKEO_OFFSET))(this, a1);
		}

		::System::Boolean APLONOHCHJA(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PIFGICNAFMF_APLONOHCHJA_OFFSET))(this, a1);
		}

		::System::Boolean POPDJKHOPOA(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PIFGICNAFMF_POPDJKHOPOA_OFFSET))(this, a1);
		}

		::System::Boolean HBODOIBLBLF(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PIFGICNAFMF_HBODOIBLBLF_OFFSET))(this, a1);
		}

		::System::Void MGGHOPGOBKK(::PIFGICNAFMF_FailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIFGICNAFMF_FailReason))((::PBYTE)hIl2Cpp + PIFGICNAFMF_MGGHOPGOBKK_OFFSET))(this, a1);
		}

		::System::Void AHIOFGEPEGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFGICNAFMF_AHIOFGEPEGA_OFFSET))(this);
		}

		::System::Single AEOHPNEOCLN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFGICNAFMF_AEOHPNEOCLN_OFFSET))(this);
		}

	};
