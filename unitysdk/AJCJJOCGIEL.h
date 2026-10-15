#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueHyperParamType.h"
#include "unitysdk/System/Object.h"
class AJCJJOCGIEL;
class FCOEMCEDLNL;
namespace System { class String; }

#define AJCJJOCGIEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCCCA00)
#define AJCJJOCGIEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCCC8F0)

inline static constexpr unsigned int AJCJJOCGIEL_TypeDefinitionIndex = 14702;

	class AJCJJOCGIEL : public ::System::Object
	{
	public:
		::System::String* EJHODPJIFIN; // 0x10
		::RPG::GameCore::RogueHyperParamType GMPGDEINODK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCJJOCGIEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AJCJJOCGIEL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AJCJJOCGIEL*))((::PBYTE)hIl2Cpp + AJCJJOCGIEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
