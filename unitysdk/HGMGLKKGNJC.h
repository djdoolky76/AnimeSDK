#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByPreCalcStanceDamage; }
namespace RPG::GameCore { class TaskContext; }

#define HGMGLKKGNJC_CTOR_OFFSET UNITYSDK_OFFSET(0x15CA45C0)
#define HGMGLKKGNJC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CA46A0)

inline static constexpr unsigned int HGMGLKKGNJC_TypeDefinitionIndex = 55458;

	class HGMGLKKGNJC
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByPreCalcStanceDamage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByPreCalcStanceDamage*))((::PBYTE)hIl2Cpp + HGMGLKKGNJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMGLKKGNJC_ONTASKBEGIN_OFFSET))(this);
		}

	};
