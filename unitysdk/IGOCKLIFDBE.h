#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SetTeammateAttackFormation; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define IGOCKLIFDBE_AOAOBFLFHAH_OFFSET UNITYSDK_OFFSET(0x16415D90)
#define IGOCKLIFDBE_CTOR_OFFSET UNITYSDK_OFFSET(0x164150A0)
#define IGOCKLIFDBE_FKHGOAPHFIB_OFFSET UNITYSDK_OFFSET(0x16415D10)
#define IGOCKLIFDBE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164150D0)

inline static constexpr unsigned int IGOCKLIFDBE_TypeDefinitionIndex = 56435;

	class IGOCKLIFDBE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTeammateAttackFormation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTeammateAttackFormation*))((::PBYTE)hIl2Cpp + IGOCKLIFDBE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOCKLIFDBE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::String* AOAOBFLFHAH(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IGOCKLIFDBE_AOAOBFLFHAH_OFFSET))(this, a1, a2);
		}

		::System::Boolean FKHGOAPHFIB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IGOCKLIFDBE_FKHGOAPHFIB_OFFSET))(this, a1, a2);
		}

	};
