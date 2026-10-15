#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaveMonsterPerform; }

#define PGHIMPAMPOA_BJLJAHMLKIO_OFFSET UNITYSDK_OFFSET(0xC2192A0)
#define PGHIMPAMPOA_CTOR_OFFSET UNITYSDK_OFFSET(0xC218880)
#define PGHIMPAMPOA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC218910)
#define PGHIMPAMPOA_NKAEMJICPJK_OFFSET UNITYSDK_OFFSET(0xC218A50)
#define PGHIMPAMPOA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC218AD0)
#define PGHIMPAMPOA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC219350)
#define PGHIMPAMPOA_TICK_OFFSET UNITYSDK_OFFSET(0xC219400)

inline static constexpr unsigned int PGHIMPAMPOA_TypeDefinitionIndex = 58949;

	class PGHIMPAMPOA : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* JEGADJGFPFM; // 0x18
		::KFELGAIGHAP* DLJHJKLMADI; // 0x20
		::RPG::GameCore::WaveMonsterPerform* OFKGLJOAMLD; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Int32 IPMDCABGBPP; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaveMonsterPerform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaveMonsterPerform*))((::PBYTE)hIl2Cpp + PGHIMPAMPOA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGHIMPAMPOA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGHIMPAMPOA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGHIMPAMPOA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PGHIMPAMPOA_TICK_OFFSET))(this, a1);
		}

		::System::Void BJLJAHMLKIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGHIMPAMPOA_BJLJAHMLKIO_OFFSET))(this);
		}

		::System::Void NKAEMJICPJK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PGHIMPAMPOA_NKAEMJICPJK_OFFSET))(this, a1);
		}

	};
