#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropDestruct; }
namespace RPG::GameCore { class TaskContext; }

#define LLGJKHFPGBF_CTOR_OFFSET UNITYSDK_OFFSET(0xB76C700)
#define LLGJKHFPGBF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB76C710)
#define LLGJKHFPGBF_EIBEOLLICII_OFFSET UNITYSDK_OFFSET(0xB76C960)
#define LLGJKHFPGBF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB76C760)
#define LLGJKHFPGBF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB76C8B0)
#define LLGJKHFPGBF_TICK_OFFSET UNITYSDK_OFFSET(0xB76C900)

	class LLGJKHFPGBF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::PropDestruct* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::PropComponent* NKILIBDMOMC; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropDestruct* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropDestruct*))((::PBYTE)hIl2Cpp + LLGJKHFPGBF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGJKHFPGBF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGJKHFPGBF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGJKHFPGBF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LLGJKHFPGBF_TICK_OFFSET))(this, a1);
		}

		::System::Void EIBEOLLICII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGJKHFPGBF_EIBEOLLICII_OFFSET))(this);
		}

	};
