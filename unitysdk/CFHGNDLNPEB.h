#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyShield; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CFHGNDLNPEB_AKIPEOABOEO_OFFSET UNITYSDK_OFFSET(0xCC4BDE0)
#define CFHGNDLNPEB_CAJEHLHAPLK_OFFSET UNITYSDK_OFFSET(0xCC4C2A0)
#define CFHGNDLNPEB_CTOR_OFFSET UNITYSDK_OFFSET(0xCC4B890)
#define CFHGNDLNPEB_DOFALKFLIME_OFFSET UNITYSDK_OFFSET(0xCC4C620)
#define CFHGNDLNPEB_NLMCDHNHMEL_OFFSET UNITYSDK_OFFSET(0xCC4BF60)
#define CFHGNDLNPEB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC4B900)

inline static constexpr unsigned int CFHGNDLNPEB_TypeDefinitionIndex = 55210;

	class CFHGNDLNPEB
	{
	public:
		::RPG::GameCore::GameEntity* NAFJJEABEMI; // 0x28
		::RPG::GameCore::StringHash PBCKLHILNAD; // 0x30
		::RPG::GameCore::StringHash IGDMHJBOOLE; // 0x34
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyShield* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyShield*))((::PBYTE)hIl2Cpp + CFHGNDLNPEB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHGNDLNPEB_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint AKIPEOABOEO(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CFHGNDLNPEB_AKIPEOABOEO_OFFSET))(this, a1, a2);
		}

		::System::Void NLMCDHNHMEL(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CFHGNDLNPEB_NLMCDHNHMEL_OFFSET))(this, a1, a2);
		}

		::System::Boolean DOFALKFLIME(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CFHGNDLNPEB_DOFALKFLIME_OFFSET))(this, a1);
		}

		::System::Void CAJEHLHAPLK(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CFHGNDLNPEB_CAJEHLHAPLK_OFFSET))(this, a1, a2);
		}

	};
