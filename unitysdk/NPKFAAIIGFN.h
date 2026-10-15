#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BEHKFEIHCDG;
class KLEFGGIHGMI;
namespace RPG::GameCore { class TaskContext; }

#define NPKFAAIIGFN_BCGBOCDGKOB_OFFSET UNITYSDK_OFFSET(0xBD0DB60)
#define NPKFAAIIGFN_CTOR_OFFSET UNITYSDK_OFFSET(0xBD0D560)
#define NPKFAAIIGFN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD0D960)
#define NPKFAAIIGFN_LCCFFDBNDMP_OFFSET UNITYSDK_OFFSET(0xBD0D9C0)
#define NPKFAAIIGFN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD0D570)
#define NPKFAAIIGFN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBD0D910)
#define NPKFAAIIGFN_TICK_OFFSET UNITYSDK_OFFSET(0xBD0DC40)

inline static constexpr unsigned int NPKFAAIIGFN_TypeDefinitionIndex = 58713;

	class NPKFAAIIGFN : public ::GELIALJDFBL
	{
	public:
		::BEHKFEIHCDG* OFKGLJOAMLD; // 0x18
		::KLEFGGIHGMI* KGPIGCAPOCP; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Single PGMIOKKLHIE; // 0x30
		::UnityEngine::Vector3 NLHOJAHIKLL; // 0x34
		::UnityEngine::Vector3 KOGCFJCMFLD; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BEHKFEIHCDG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BEHKFEIHCDG*))((::PBYTE)hIl2Cpp + NPKFAAIIGFN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPKFAAIIGFN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPKFAAIIGFN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPKFAAIIGFN_DISPOSE_OFFSET))(this);
		}

		::System::Void LCCFFDBNDMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPKFAAIIGFN_LCCFFDBNDMP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPKFAAIIGFN_TICK_OFFSET))(this, a1);
		}

		::System::Void BCGBOCDGKOB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPKFAAIIGFN_BCGBOCDGKOB_OFFSET))(this, a1);
		}

	};
