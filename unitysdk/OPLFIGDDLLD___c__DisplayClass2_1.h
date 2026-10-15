#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ChimeraDuelStatusConfig; }
namespace System { class Object; }

#define OPLFIGDDLLD___C__DISPLAYCLASS2_1_CTOR_OFFSET UNITYSDK_OFFSET(0xBFAC440)
#define OPLFIGDDLLD___C__DISPLAYCLASS2_1___TRYAPPLY_B__0_OFFSET UNITYSDK_OFFSET(0xBFAC4C0)

inline static constexpr unsigned int OPLFIGDDLLD___c__DisplayClass2_1_TypeDefinitionIndex = 77461;

	template <typename T>
	class OPLFIGDDLLD___c__DisplayClass2_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::RPG::GameCore::ChimeraDuelStatusConfig* statusConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLFIGDDLLD___C__DISPLAYCLASS2_1_CTOR_OFFSET))(this);
		}

		::System::Void __TryApply_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLFIGDDLLD___C__DISPLAYCLASS2_1___TRYAPPLY_B__0_OFFSET))(this);
		}

	};
