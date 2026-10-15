#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class ResetAllPuzzleStatesClientOnlyV2; }
namespace RPG::GameCore { class TaskContext; }

#define PIKAFICHPCL_CMMJFAELBKE_OFFSET UNITYSDK_OFFSET(0xC26ABA0)
#define PIKAFICHPCL_CTOR_OFFSET UNITYSDK_OFFSET(0xC26A530)
#define PIKAFICHPCL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC26A560)
#define PIKAFICHPCL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC26A5B0)
#define PIKAFICHPCL__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0xC26AE10)

inline static constexpr unsigned int PIKAFICHPCL_TypeDefinitionIndex = 58392;

	class PIKAFICHPCL
	{
	public:
		::RPG::Client::RuntimeGroupManager* KDCJFIMPKLP; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetAllPuzzleStatesClientOnlyV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetAllPuzzleStatesClientOnlyV2*))((::PBYTE)hIl2Cpp + PIKAFICHPCL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKAFICHPCL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKAFICHPCL_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::PropComponent* CMMJFAELBKE(::RPG::GameCore::DynamicString* a1, ::RPG::GameCore::DynamicFloat* a2, ::RPG::GameCore::DynamicFloat* a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::RPG::GameCore::PropComponent*(*)(::PVOID, ::RPG::GameCore::DynamicString*, ::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::DynamicFloat*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PIKAFICHPCL_CMMJFAELBKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _OnTaskBegin_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKAFICHPCL__ONTASKBEGIN_B__2_0_OFFSET))(this);
		}

	};
