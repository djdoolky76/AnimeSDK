#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/System/Nullable_1.h"
namespace RPG::GameCore { class SetMonsterHitCountEnergyBarState; }
namespace RPG::GameCore { class TaskContext; }

#define IGFHGNNAFGE_CTOR_OFFSET UNITYSDK_OFFSET(0x163FE8B0)
#define IGFHGNNAFGE_MDLNPMMHOJI_OFFSET UNITYSDK_OFFSET(0x163FEE30)
#define IGFHGNNAFGE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163FE8E0)

inline static constexpr unsigned int IGFHGNNAFGE_TypeDefinitionIndex = 55546;

	class IGFHGNNAFGE
	{
	public:
		// static const ::System::String* GJELMKNIJCM; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMonsterHitCountEnergyBarState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMonsterHitCountEnergyBarState*))((::PBYTE)hIl2Cpp + IGFHGNNAFGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFHGNNAFGE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Nullable_1<::System::Boolean> MDLNPMMHOJI(::RPG::GameCore::BoolEx a1)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::RPG::GameCore::BoolEx))((::PBYTE)hIl2Cpp + IGFHGNNAFGE_MDLNPMMHOJI_OFFSET))(this, a1);
		}

	};
