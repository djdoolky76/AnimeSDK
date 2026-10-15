#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class AOIAGGGHHBD;
class ECBCBEIADBI;
namespace RPG::GameCore { class ActionBarEffectConfig; }
namespace RPG::GameCore { class ActionBarEffectTextConfig; }
namespace RPG::GameCore { class ShowActionBarEffect; }
namespace RPG::GameCore { class TaskContext; }

#define GOFGIGKHCKO_CTOR_OFFSET UNITYSDK_OFFSET(0x15B2D9A0)
#define GOFGIGKHCKO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B2D9B0)
#define GOFGIGKHCKO_EGMMCBEPMPB_OFFSET UNITYSDK_OFFSET(0x15B2DC20)
#define GOFGIGKHCKO_ILALLCPHNLE_OFFSET UNITYSDK_OFFSET(0x15B2DDA0)
#define GOFGIGKHCKO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B2D9F0)
#define GOFGIGKHCKO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15B2DCF0)
#define GOFGIGKHCKO_TICK_OFFSET UNITYSDK_OFFSET(0x15B2DD40)
#define GOFGIGKHCKO___GETACTIONBAREFFECTTEXTPARAMS_B__6_0_OFFSET UNITYSDK_OFFSET(0x15B2DEE0)
#define GOFGIGKHCKO___GETACTIONBARSINGLEACTIONEFFECTPARAMS_B__5_0_OFFSET UNITYSDK_OFFSET(0x15B2DE70)

inline static constexpr unsigned int GOFGIGKHCKO_TypeDefinitionIndex = 56438;

	class GOFGIGKHCKO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowActionBarEffect* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowActionBarEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowActionBarEffect*))((::PBYTE)hIl2Cpp + GOFGIGKHCKO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFGIGKHCKO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFGIGKHCKO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFGIGKHCKO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GOFGIGKHCKO_TICK_OFFSET))(this, a1);
		}

		::Il2CppArray<::AOIAGGGHHBD*>* EGMMCBEPMPB()
		{
			return ((::Il2CppArray<::AOIAGGGHHBD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFGIGKHCKO_EGMMCBEPMPB_OFFSET))(this);
		}

		::Il2CppArray<::ECBCBEIADBI*>* ILALLCPHNLE(::Il2CppArray<::RPG::GameCore::ActionBarEffectTextConfig*>* a1)
		{
			return ((::Il2CppArray<::ECBCBEIADBI*>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ActionBarEffectTextConfig*>*))((::PBYTE)hIl2Cpp + GOFGIGKHCKO_ILALLCPHNLE_OFFSET))(this, a1);
		}

		::AOIAGGGHHBD* __GetActionBarSingleActionEffectParams_b__5_0(::RPG::GameCore::ActionBarEffectConfig* a1)
		{
			return ((::AOIAGGGHHBD*(*)(::PVOID, ::RPG::GameCore::ActionBarEffectConfig*))((::PBYTE)hIl2Cpp + GOFGIGKHCKO___GETACTIONBARSINGLEACTIONEFFECTPARAMS_B__5_0_OFFSET))(this, a1);
		}

		::ECBCBEIADBI* __GetActionBarEffectTextParams_b__6_0(::RPG::GameCore::ActionBarEffectTextConfig* a1)
		{
			return ((::ECBCBEIADBI*(*)(::PVOID, ::RPG::GameCore::ActionBarEffectTextConfig*))((::PBYTE)hIl2Cpp + GOFGIGKHCKO___GETACTIONBAREFFECTTEXTPARAMS_B__6_0_OFFSET))(this, a1);
		}

	};
