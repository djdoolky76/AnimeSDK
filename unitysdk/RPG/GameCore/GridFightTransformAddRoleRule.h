#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTransformAddRoleRule; }

#define RPG_GAMECORE_GRIDFIGHTTRANSFORMADDROLERULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E95C190)
#define RPG_GAMECORE_GRIDFIGHTTRANSFORMADDROLERULE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E95C150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTransformAddRoleRule_TypeDefinitionIndex = 19702;

	class GridFightTransformAddRoleRule : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRANSFORMADDROLERULE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightTransformAddRoleRule* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightTransformAddRoleRule*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRANSFORMADDROLERULE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
