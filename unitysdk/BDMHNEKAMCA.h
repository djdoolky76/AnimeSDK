#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KGDPHMBLLHE;
namespace RPG::GameCore { class TaskContext; }

#define BDMHNEKAMCA_CTOR_OFFSET UNITYSDK_OFFSET(0x19D9F480)
#define BDMHNEKAMCA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19D9F720)
#define BDMHNEKAMCA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19D9F490)
#define BDMHNEKAMCA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19D9F6D0)
#define BDMHNEKAMCA_TICK_OFFSET UNITYSDK_OFFSET(0x19D9F760)

inline static constexpr unsigned int BDMHNEKAMCA_TypeDefinitionIndex = 53833;

	class BDMHNEKAMCA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::KGDPHMBLLHE* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KGDPHMBLLHE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KGDPHMBLLHE*))((::PBYTE)hIl2Cpp + BDMHNEKAMCA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMHNEKAMCA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMHNEKAMCA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMHNEKAMCA_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BDMHNEKAMCA_TICK_OFFSET))(this, a1);
		}

	};
