#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"
class NJKFOJJDGGG;

#define RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0xD103460)
#define RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_GET_ADDVALUE_OFFSET UNITYSDK_OFFSET(0xD1034C0)
#define RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_GET_MODIFYVALUE_OFFSET UNITYSDK_OFFSET(0xD103600)
#define RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0xD1036F0)
#define RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_GET_SUBVALUE_OFFSET UNITYSDK_OFFSET(0xD103560)
#define RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD103470)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEnemyDifficultyModifier_TypeDefinitionIndex = 65002;

	class GridFightEnemyDifficultyModifier : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AddValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_GET_ADDVALUE_OFFSET))(this);
		}

		::System::UInt32 get_SubValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_GET_SUBVALUE_OFFSET))(this);
		}

		::System::Int32 get_ModifyValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_GET_MODIFYVALUE_OFFSET))(this);
		}

		::RPG::GameCore::GridFightNodeType get_NodeType()
		{
			return ((::RPG::GameCore::GridFightNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYMODIFIER_GET_NODETYPE_OFFSET))(this);
		}

	};
}
