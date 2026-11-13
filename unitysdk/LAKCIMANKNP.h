#pragma once
#include "unitysdk/unitysdk.h"
class BNBOAMEBAOE;
class CMOKPGLKOOG;
namespace RPG::GameCore { class TaskContext; }

#define LAKCIMANKNP_AICMAPEKNIO_OFFSET UNITYSDK_OFFSET(0x1B282F70)
#define LAKCIMANKNP_BKPGNCBNMGP_OFFSET UNITYSDK_OFFSET(0x1B282D20)
#define LAKCIMANKNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1B282CF0)
#define LAKCIMANKNP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B282D70)

inline static constexpr unsigned int LAKCIMANKNP_TypeDefinitionIndex = 53951;

	class LAKCIMANKNP
	{
	public:
		::BNBOAMEBAOE* JLMAKNFAEBH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CMOKPGLKOOG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CMOKPGLKOOG*))((::PBYTE)hIl2Cpp + LAKCIMANKNP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void BKPGNCBNMGP(::BNBOAMEBAOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNBOAMEBAOE*))((::PBYTE)hIl2Cpp + LAKCIMANKNP_BKPGNCBNMGP_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAKCIMANKNP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void AICMAPEKNIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAKCIMANKNP_AICMAPEKNIO_OFFSET))(this);
		}

	};
