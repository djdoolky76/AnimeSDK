#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropStartPuzzle; }
namespace RPG::GameCore { class TaskContext; }

#define BHGOLOGEMFD_CTOR_OFFSET UNITYSDK_OFFSET(0xB479040)
#define BHGOLOGEMFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4793C0)
#define BHGOLOGEMFD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4790D0)
#define BHGOLOGEMFD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB479340)
#define BHGOLOGEMFD_TICK_OFFSET UNITYSDK_OFFSET(0xB4794E0)

inline static constexpr unsigned int BHGOLOGEMFD_TypeDefinitionIndex = 58358;

	class BHGOLOGEMFD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PropComponent* IKHBMOJMEEM; // 0x18
		::RPG::GameCore::PropStartPuzzle* IGHAHBNLIJA; // 0x20
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
		::KFELGAIGHAP* EDBPHODBFCP; // 0x30
		::System::Boolean KBJACNAMHBA; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropStartPuzzle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropStartPuzzle*))((::PBYTE)hIl2Cpp + BHGOLOGEMFD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHGOLOGEMFD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHGOLOGEMFD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHGOLOGEMFD_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BHGOLOGEMFD_TICK_OFFSET))(this, a1);
		}

	};
