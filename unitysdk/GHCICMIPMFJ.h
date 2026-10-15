#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GHCICMIPMFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA73D70)

inline static constexpr unsigned int GHCICMIPMFJ_TypeDefinitionIndex = 43756;

	class GHCICMIPMFJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ChenLingBattleEffectConfig*>* IPMBJFAEMOL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCICMIPMFJ_CTOR_OFFSET))(this);
		}

	};
