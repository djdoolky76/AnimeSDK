#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/PIFGICNAFMF_FailReason.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitUINodeOpen; }
namespace UnityEngine { class Transform; }

#define PIFGICNAFMF_AEOHPNEOCLN_OFFSET UNITYSDK_OFFSET(0xC2581E0)
#define PIFGICNAFMF_AHIOFGEPEGA_OFFSET UNITYSDK_OFFSET(0xC2582D0)
#define PIFGICNAFMF_AJHMPFEDCIH_OFFSET UNITYSDK_OFFSET(0xC257A30)
#define PIFGICNAFMF_APLONOHCHJA_OFFSET UNITYSDK_OFFSET(0xC257C00)
#define PIFGICNAFMF_CTOR_OFFSET UNITYSDK_OFFSET(0xC2572D0)
#define PIFGICNAFMF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2572E0)
#define PIFGICNAFMF_HBODOIBLBLF_OFFSET UNITYSDK_OFFSET(0xC257FF0)
#define PIFGICNAFMF_LECDLCEENAP_OFFSET UNITYSDK_OFFSET(0xC257710)
#define PIFGICNAFMF_MGGHOPGOBKK_OFFSET UNITYSDK_OFFSET(0xC258280)
#define PIFGICNAFMF_OCLKCPOCKEO_OFFSET UNITYSDK_OFFSET(0xC257B30)
#define PIFGICNAFMF_OEEJJEGCEBJ_OFFSET UNITYSDK_OFFSET(0xC257980)
#define PIFGICNAFMF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC257320)
#define PIFGICNAFMF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC2573C0)
#define PIFGICNAFMF_POPDJKHOPOA_OFFSET UNITYSDK_OFFSET(0xC257F00)
#define PIFGICNAFMF_TICK_OFFSET UNITYSDK_OFFSET(0xC257410)

inline static constexpr unsigned int PIFGICNAFMF_TypeDefinitionIndex = 58943;

	class PIFGICNAFMF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::WaitUINodeOpen* OFKGLJOAMLD; // 0x20
		::UnityEngine::Transform* OPBCKGLLCBO; // 0x28
		::PIFGICNAFMF_FailReason HBOPBCMODIE; // 0x30
		::System::Single GCCJKFJCHCH; // 0x34
		::System::Boolean IFPEHIFDMON; // 0x38
		::System::Byte _padding0[0x3];
		::System::Nullable_1<::UnityEngine::Vector3> MLHMMDJIAOL; // 0x3C
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
