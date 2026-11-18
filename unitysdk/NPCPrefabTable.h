#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class NPCPrefabInfo;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCPREFABTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x10600110)

inline static constexpr unsigned int NPCPrefabTable_TypeDefinitionIndex = 70016;

class NPCPrefabTable : public ::UnityEngine::ScriptableObject
{
public:
	::System::Collections::Generic::List_1<::NPCPrefabInfo*>* NPCPrefabs; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCPREFABTABLE__CTOR_OFFSET))(this);
	}
};
