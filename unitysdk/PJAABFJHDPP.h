#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class DNABADHBFHD;
namespace RPG::GameCore { class TaskContext; }

#define PJAABFJHDPP_CTOR_OFFSET UNITYSDK_OFFSET(0xCB9F2E0)
#define PJAABFJHDPP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB9F2F0)
#define PJAABFJHDPP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCB9F490)
#define PJAABFJHDPP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCB9F500)
#define PJAABFJHDPP_POEMDFEAAIO_OFFSET UNITYSDK_OFFSET(0xCB9F340)
#define PJAABFJHDPP_TICK_OFFSET UNITYSDK_OFFSET(0xCB9F580)

inline static constexpr unsigned int PJAABFJHDPP_TypeDefinitionIndex = 53423;

	class PJAABFJHDPP : public ::GELIALJDFBL
	{
	public:
		::DNABADHBFHD* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DNABADHBFHD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DNABADHBFHD*))((::PBYTE)hIl2Cpp + PJAABFJHDPP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAABFJHDPP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAABFJHDPP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAABFJHDPP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PJAABFJHDPP_TICK_OFFSET))(this, a1);
		}

		::System::Void POEMDFEAAIO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PJAABFJHDPP_POEMDFEAAIO_OFFSET))(this, a1);
		}

	};
