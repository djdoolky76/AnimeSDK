#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJDDNGPOEHK.h"
namespace RPG::GameCore { class ChangeCharacterConfigParam; }
namespace RPG::GameCore { class TaskContext; }

#define IMFMODIMICL_CTOR_OFFSET UNITYSDK_OFFSET(0x164D2B90)
#define IMFMODIMICL_MBFABGBENPN_OFFSET UNITYSDK_OFFSET(0x164D2D50)
#define IMFMODIMICL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164D2BC0)

inline static constexpr unsigned int IMFMODIMICL_TypeDefinitionIndex = 54914;

	class IMFMODIMICL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeCharacterConfigParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeCharacterConfigParam*))((::PBYTE)hIl2Cpp + IMFMODIMICL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFMODIMICL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void MBFABGBENPN(::IJDDNGPOEHK a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJDDNGPOEHK))((::PBYTE)hIl2Cpp + IMFMODIMICL_MBFABGBENPN_OFFSET))(this, a1);
		}

	};
