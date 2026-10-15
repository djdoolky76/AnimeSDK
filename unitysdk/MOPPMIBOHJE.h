#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBFNLNPLILA;
namespace RPG::GameCore { class GameWorld; }

#define MOPPMIBOHJE_KCPOCEODDCN_1_OFFSET UNITYSDK_OFFSET(0xBA321F0)
#define MOPPMIBOHJE_KDKAGPALKBM_OFFSET UNITYSDK_OFFSET(0xBA32160)

inline static constexpr unsigned int MOPPMIBOHJE_TypeDefinitionIndex = 73247;

	class MOPPMIBOHJE : public ::System::Object
	{
	public:
		static ::RPG::GameCore::GameWorld* KDKAGPALKBM(::RPG::GameCore::GameWorld* a1, ::HBFNLNPLILA* a2)
		{
			return ((::RPG::GameCore::GameWorld*(*)(::RPG::GameCore::GameWorld*, ::HBFNLNPLILA*))((::PBYTE)hIl2Cpp + MOPPMIBOHJE_KDKAGPALKBM_OFFSET))(a1, a2);
		}

		static ::HBFNLNPLILA* KCPOCEODDCN_1(::RPG::GameCore::GameWorld* a1)
		{
			return ((::HBFNLNPLILA*(*)(::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + MOPPMIBOHJE_KCPOCEODDCN_1_OFFSET))(a1);
		}

	};
