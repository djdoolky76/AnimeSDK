#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GJMBEOPMFHD;
class IAAOMMGICFK;
namespace RPG::GameCore { class TaskContext; }

#define PMPFMDALNIH_CTOR_OFFSET UNITYSDK_OFFSET(0xCC59E70)
#define PMPFMDALNIH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC59E80)
#define PMPFMDALNIH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC59F20)
#define PMPFMDALNIH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCC59ED0)
#define PMPFMDALNIH_TICK_OFFSET UNITYSDK_OFFSET(0xCC5A0C0)

inline static constexpr unsigned int PMPFMDALNIH_TypeDefinitionIndex = 53823;

	class PMPFMDALNIH : public ::GELIALJDFBL
	{
	public:
		::IAAOMMGICFK* HOADGOKCPDG; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::GJMBEOPMFHD* IGHAHBNLIJA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GJMBEOPMFHD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GJMBEOPMFHD*))((::PBYTE)hIl2Cpp + PMPFMDALNIH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPFMDALNIH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPFMDALNIH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPFMDALNIH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PMPFMDALNIH_TICK_OFFSET))(this, a1);
		}

	};
