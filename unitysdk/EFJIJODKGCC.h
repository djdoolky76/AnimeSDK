#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class DrinkMakerController; }
namespace RPG::GameCore { class TaskContext; }

#define EFJIJODKGCC_CTOR_OFFSET UNITYSDK_OFFSET(0x13A4ED70)
#define EFJIJODKGCC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A4ED80)
#define EFJIJODKGCC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A4EE20)
#define EFJIJODKGCC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13A4EE70)
#define EFJIJODKGCC_TICK_OFFSET UNITYSDK_OFFSET(0x13A4EDC0)

inline static constexpr unsigned int EFJIJODKGCC_TypeDefinitionIndex = 52738;

	class EFJIJODKGCC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DrinkMakerController* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DrinkMakerController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DrinkMakerController*))((::PBYTE)hIl2Cpp + EFJIJODKGCC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJIJODKGCC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EFJIJODKGCC_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJIJODKGCC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJIJODKGCC_ONTASKRESET_OFFSET))(this);
		}

	};
