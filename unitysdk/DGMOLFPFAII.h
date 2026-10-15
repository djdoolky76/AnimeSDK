#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class AdvIsometricZoomListener; }
namespace RPG::GameCore { class TaskContext; }

#define DGMOLFPFAII_CTOR_OFFSET UNITYSDK_OFFSET(0xE84CA20)
#define DGMOLFPFAII_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE84CD20)
#define DGMOLFPFAII_LINOOBJGCGJ_OFFSET UNITYSDK_OFFSET(0xE84CE90)
#define DGMOLFPFAII_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE84CB10)
#define DGMOLFPFAII_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE84CC10)
#define DGMOLFPFAII_TICK_OFFSET UNITYSDK_OFFSET(0xE84D1C0)

inline static constexpr unsigned int DGMOLFPFAII_TypeDefinitionIndex = 52390;

	class DGMOLFPFAII : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdvIsometricZoomListener* IGHAHBNLIJA; // 0x18
		::KFELGAIGHAP* APKCGCNFBHH; // 0x20
		::KFELGAIGHAP* EEEHOHABOMP; // 0x28
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
		::System::Boolean NPKHIOKHDPK; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvIsometricZoomListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvIsometricZoomListener*))((::PBYTE)hIl2Cpp + DGMOLFPFAII_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMOLFPFAII_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMOLFPFAII_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMOLFPFAII_DISPOSE_OFFSET))(this);
		}

		::System::Void LINOOBJGCGJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DGMOLFPFAII_LINOOBJGCGJ_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DGMOLFPFAII_TICK_OFFSET))(this, a1);
		}

	};
