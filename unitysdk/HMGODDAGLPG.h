#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class IAAOMMGICFK;
class NNLNAPBIONC;
namespace RPG::GameCore { class TaskContext; }

#define HMGODDAGLPG_CTOR_OFFSET UNITYSDK_OFFSET(0x16D1EE00)
#define HMGODDAGLPG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16D1F000)
#define HMGODDAGLPG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16D1EE10)
#define HMGODDAGLPG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16D1F0A0)
#define HMGODDAGLPG_TICK_OFFSET UNITYSDK_OFFSET(0x16D1EF60)

inline static constexpr unsigned int HMGODDAGLPG_TypeDefinitionIndex = 53822;

	class HMGODDAGLPG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::NNLNAPBIONC* IGHAHBNLIJA; // 0x20
		::IAAOMMGICFK* HOADGOKCPDG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NNLNAPBIONC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NNLNAPBIONC*))((::PBYTE)hIl2Cpp + HMGODDAGLPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGODDAGLPG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HMGODDAGLPG_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGODDAGLPG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGODDAGLPG_ONTASKRESET_OFFSET))(this);
		}

	};
