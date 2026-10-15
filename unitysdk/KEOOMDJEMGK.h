#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class MarbleEventListener; }
namespace RPG::GameCore { class TaskContext; }

#define KEOOMDJEMGK_CTOR_OFFSET UNITYSDK_OFFSET(0xB3792F0)
#define KEOOMDJEMGK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3795E0)
#define KEOOMDJEMGK_LINOOBJGCGJ_OFFSET UNITYSDK_OFFSET(0xB379900)
#define KEOOMDJEMGK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3794C0)
#define KEOOMDJEMGK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB379590)
#define KEOOMDJEMGK_TICK_OFFSET UNITYSDK_OFFSET(0xB379D10)

inline static constexpr unsigned int KEOOMDJEMGK_TypeDefinitionIndex = 53008;

	class KEOOMDJEMGK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::KFELGAIGHAP* ENHDENNMJFB; // 0x20
		::RPG::GameCore::MarbleEventListener* IGHAHBNLIJA; // 0x28
		::KFELGAIGHAP* GHGOMDLAMKI; // 0x30
		::KFELGAIGHAP* BJLJAHMLKIO; // 0x38
		::KFELGAIGHAP* JDCHGEBKOAL; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MarbleEventListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MarbleEventListener*))((::PBYTE)hIl2Cpp + KEOOMDJEMGK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEOOMDJEMGK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEOOMDJEMGK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEOOMDJEMGK_DISPOSE_OFFSET))(this);
		}

		::System::Void LINOOBJGCGJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KEOOMDJEMGK_LINOOBJGCGJ_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KEOOMDJEMGK_TICK_OFFSET))(this, a1);
		}

	};
