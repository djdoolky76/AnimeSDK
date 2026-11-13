#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTransformDelRoleRule; }

#define RPG_GAMECORE_GRIDFIGHTTRANSFORMDELROLERULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA69F50)
#define RPG_GAMECORE_GRIDFIGHTTRANSFORMDELROLERULE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA69F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTransformDelRoleRule_TypeDefinitionIndex = 19700;

	class GridFightTransformDelRoleRule : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRANSFORMDELROLERULE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightTransformDelRoleRule* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightTransformDelRoleRule*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRANSFORMDELROLERULE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
