#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class DNABADHBFHD;
namespace RPG::GameCore { class TaskContext; }

#define PJAABFJHDPP_CTOR_OFFSET UNITYSDK_OFFSET(0xC277190)
#define PJAABFJHDPP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2771A0)
#define PJAABFJHDPP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC277340)
#define PJAABFJHDPP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC2773B0)
#define PJAABFJHDPP_POEMDFEAAIO_OFFSET UNITYSDK_OFFSET(0xC2771F0)
#define PJAABFJHDPP_TICK_OFFSET UNITYSDK_OFFSET(0xC277430)

inline static constexpr unsigned int PJAABFJHDPP_TypeDefinitionIndex = 52317;

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
