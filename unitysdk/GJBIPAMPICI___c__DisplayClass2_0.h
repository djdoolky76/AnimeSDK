#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GJBIPAMPICI___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15A5A130)
#define GJBIPAMPICI___C__DISPLAYCLASS2_0__SYNCHRONIZEONE_B__0_OFFSET UNITYSDK_OFFSET(0x15A5A7C0)

inline static constexpr unsigned int GJBIPAMPICI___c__DisplayClass2_0_TypeDefinitionIndex = 80834;

	class GJBIPAMPICI___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* modifier; // 0x10
		::System::Func_2<::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::FixPoint>* __9__0; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBIPAMPICI___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint _SynchronizeOne_b__0(::RPG::GameCore::DynamicFloat* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + GJBIPAMPICI___C__DISPLAYCLASS2_0__SYNCHRONIZEONE_B__0_OFFSET))(this, a1);
		}

	};
