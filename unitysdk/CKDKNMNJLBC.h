#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetMonsterEnergyBarState; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Nullable; }

#define CKDKNMNJLBC_CTOR_OFFSET UNITYSDK_OFFSET(0xD756EF0)
#define CKDKNMNJLBC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD756F00)
#define CKDKNMNJLBC_HPEBIALGDKG_OFFSET UNITYSDK_OFFSET(0xD758350)
#define CKDKNMNJLBC_LJLDFLFOOHP_OFFSET UNITYSDK_OFFSET(0xD758440)
#define CKDKNMNJLBC_MDLNPMMHOJI_OFFSET UNITYSDK_OFFSET(0xD7583E0)
#define CKDKNMNJLBC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD756F40)
#define CKDKNMNJLBC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD7584A0)
#define CKDKNMNJLBC_TICK_OFFSET UNITYSDK_OFFSET(0xD7584F0)

inline static constexpr unsigned int CKDKNMNJLBC_TypeDefinitionIndex = 55541;

	class CKDKNMNJLBC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetMonsterEnergyBarState* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMonsterEnergyBarState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMonsterEnergyBarState*))((::PBYTE)hIl2Cpp + CKDKNMNJLBC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKDKNMNJLBC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKDKNMNJLBC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Nullable* HPEBIALGDKG(::RPG::GameCore::DynamicFloat* a1)
		{
			return ((::System::Nullable*(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CKDKNMNJLBC_HPEBIALGDKG_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKDKNMNJLBC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CKDKNMNJLBC_TICK_OFFSET))(this, a1);
		}

		::System::Nullable* MDLNPMMHOJI(::RPG::GameCore::BoolEx a1)
		{
			return ((::System::Nullable*(*)(::PVOID, ::RPG::GameCore::BoolEx))((::PBYTE)hIl2Cpp + CKDKNMNJLBC_MDLNPMMHOJI_OFFSET))(this, a1);
		}

		::System::Nullable* LJLDFLFOOHP(::System::Int32 a1)
		{
			return ((::System::Nullable*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKDKNMNJLBC_LJLDFLFOOHP_OFFSET))(this, a1);
		}

	};
