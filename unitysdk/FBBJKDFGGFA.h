#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RadialBlurCurveEffect; }
namespace RPG::GameCore { class TaskContext; }

#define FBBJKDFGGFA_CTOR_OFFSET UNITYSDK_OFFSET(0x15695440)
#define FBBJKDFGGFA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15695450)
#define FBBJKDFGGFA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15695490)
#define FBBJKDFGGFA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x156958F0)
#define FBBJKDFGGFA_TICK_OFFSET UNITYSDK_OFFSET(0x15695940)

inline static constexpr unsigned int FBBJKDFGGFA_TypeDefinitionIndex = 55273;

	class FBBJKDFGGFA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RadialBlurCurveEffect* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RadialBlurCurveEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RadialBlurCurveEffect*))((::PBYTE)hIl2Cpp + FBBJKDFGGFA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBJKDFGGFA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBJKDFGGFA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBJKDFGGFA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBBJKDFGGFA_TICK_OFFSET))(this, a1);
		}

	};
