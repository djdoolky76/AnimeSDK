#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAddition.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define GNEBNHLMFAF_CTOR_OFFSET UNITYSDK_OFFSET(0x15AF3800)

inline static constexpr unsigned int GNEBNHLMFAF_TypeDefinitionIndex = 56329;

	class GNEBNHLMFAF : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BMFBKECOBOH; // 0x10
		::RPG::GameCore::BattleExtraPropertyAddition FODBMMCKAEN; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint MNDFOPKBHKP; // 0x20
		::System::Void _ctor(::RPG::GameCore::BattleExtraPropertyAddition a1, ::RPG::GameCore::FixPoint a2, ::Il2CppArray<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + GNEBNHLMFAF_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
