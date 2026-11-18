#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"

namespace System { class Object; }

#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_KNCJJMJHFJH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x606980)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int RBDBattleManager_KNCJJMJHFJH_TypeDefinitionIndex = 82386;

	struct alignas(8) RBDBattleManager_KNCJJMJHFJH
	{
		::UnityEngine::PhysicsScene JLDDCFOKKNM; // 0x10
		::System::Byte _padding0[0x4];
		::Unity::Collections::NativeArray_1<::System::Object*> BAGDAKANNJM; // 0x18

		::System::Void Execute(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_KNCJJMJHFJH_EXECUTE_OFFSET))(this, ABHBKFJKINO);
		}
	};
}
