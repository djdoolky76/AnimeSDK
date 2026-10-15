#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class MDHFMJOEPDI;
namespace RPG::GameCore { class TaskContext; }

#define DJOONEDIKJD_CTOR_OFFSET UNITYSDK_OFFSET(0xF24E8C0)
#define DJOONEDIKJD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF24EC80)
#define DJOONEDIKJD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF24E8D0)
#define DJOONEDIKJD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF24ECC0)
#define DJOONEDIKJD_TICK_OFFSET UNITYSDK_OFFSET(0xF24ED00)
#define DJOONEDIKJD__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xF24ED60)

inline static constexpr unsigned int DJOONEDIKJD_TypeDefinitionIndex = 52953;

	class DJOONEDIKJD : public ::GELIALJDFBL
	{
	public:
		::MDHFMJOEPDI* OFKGLJOAMLD; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MDHFMJOEPDI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MDHFMJOEPDI*))((::PBYTE)hIl2Cpp + DJOONEDIKJD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOONEDIKJD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOONEDIKJD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOONEDIKJD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DJOONEDIKJD_TICK_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOONEDIKJD__ONTASKBEGIN_B__1_0_OFFSET))(this);
		}

	};
