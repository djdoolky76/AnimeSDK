#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOIAGGGHHBD;
namespace RPG::GameCore { class GameEntity; }

#define LGBMDOLLMIL_CTOR_OFFSET UNITYSDK_OFFSET(0xB687EE0)

inline static constexpr unsigned int LGBMDOLLMIL_TypeDefinitionIndex = 73285;

	class LGBMDOLLMIL : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* NPGHFOOPAIJ; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::Il2CppArray<::AOIAGGGHHBD*>* HPBAMMEFDMK; // 0x20
		::System::Boolean GNDCCBNILML; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBMDOLLMIL_CTOR_OFFSET))(this);
		}

	};
