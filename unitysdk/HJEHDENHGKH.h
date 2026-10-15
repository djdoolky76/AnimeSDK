#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class NIODADALNHA;
namespace RPG::GameCore { class SetRaidTargetProgress; }
namespace RPG::GameCore { class TaskContext; }

#define HJEHDENHGKH_CTOR_OFFSET UNITYSDK_OFFSET(0x15D075F0)
#define HJEHDENHGKH_KJKNLCMNJLF_OFFSET UNITYSDK_OFFSET(0x15D077E0)
#define HJEHDENHGKH_NBBKPAFDIPF_OFFSET UNITYSDK_OFFSET(0x15D07880)
#define HJEHDENHGKH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D07620)

inline static constexpr unsigned int HJEHDENHGKH_TypeDefinitionIndex = 58574;

	class HJEHDENHGKH
	{
	public:
		::NIODADALNHA* GFDHMFGMFPN; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetRaidTargetProgress* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetRaidTargetProgress*))((::PBYTE)hIl2Cpp + HJEHDENHGKH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEHDENHGKH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean KJKNLCMNJLF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJEHDENHGKH_KJKNLCMNJLF_OFFSET))(this, a1);
		}

		::System::Void NBBKPAFDIPF(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HJEHDENHGKH_NBBKPAFDIPF_OFFSET))(this, a1, a2);
		}

	};
