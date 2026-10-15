#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class MonopolyCheckAtFinalPos; }
namespace RPG::GameCore { class TaskContext; }

#define BMFPKCAJACC_CEPBLLMIEMK_OFFSET UNITYSDK_OFFSET(0xBDA91D0)
#define BMFPKCAJACC_CTOR_OFFSET UNITYSDK_OFFSET(0xBDA8F70)
#define BMFPKCAJACC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBDA9700)
#define BMFPKCAJACC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDA9070)
#define BMFPKCAJACC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBDA96B0)
#define BMFPKCAJACC_TICK_OFFSET UNITYSDK_OFFSET(0xBDA9870)

inline static constexpr unsigned int BMFPKCAJACC_TypeDefinitionIndex = 58215;

	class BMFPKCAJACC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::KFELGAIGHAP* IJBFOGOBMLE; // 0x20
		::KFELGAIGHAP* APPJBNPGGMI; // 0x28
		::RPG::GameCore::MonopolyCheckAtFinalPos* OFKGLJOAMLD; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyCheckAtFinalPos* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyCheckAtFinalPos*))((::PBYTE)hIl2Cpp + BMFPKCAJACC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFPKCAJACC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean CEPBLLMIEMK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFPKCAJACC_CEPBLLMIEMK_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFPKCAJACC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFPKCAJACC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BMFPKCAJACC_TICK_OFFSET))(this, a1);
		}

	};
