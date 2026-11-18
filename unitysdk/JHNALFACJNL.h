#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NCIJAEIKGCN.h"
#include "unitysdk/System/ValueType.h"

class ILLCEFBALCI;
namespace MoleMole { class ConfigMaterialPropertyModifier; }

#define JHNALFACJNL_KBFPODAGOJB_OFFSET UNITYSDK_OFFSET(0x1945C850)
#define JHNALFACJNL_PFJEJJHJOEB_OFFSET UNITYSDK_OFFSET(0x7E03E0)

inline static constexpr unsigned int JHNALFACJNL_TypeDefinitionIndex = 62351;

struct alignas(8) JHNALFACJNL
{
	::NCIJAEIKGCN EEFJPKAGFMM; // 0x10
	::System::Byte _padding0[0x4];
	::MoleMole::ConfigMaterialPropertyModifier* BJOKMIKJHMC; // 0x18
	::ILLCEFBALCI* ENFNDMMNHDL; // 0x20
	::System::Single HACJFKBLODH; // 0x28

	/*
	static ::System::Void KBFPODAGOJB(::JHNALFACJNL LJBPECKCCEA)
	{
		return ((::System::Void(*)(::JHNALFACJNL))((::PBYTE)hIl2Cpp + JHNALFACJNL_KBFPODAGOJB_OFFSET))(LJBPECKCCEA);
	}
	*/

	::System::Void PFJEJJHJOEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHNALFACJNL_PFJEJJHJOEB_OFFSET))(this);
	}
};
