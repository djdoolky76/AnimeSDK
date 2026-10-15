#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBFFCBPMKEF;
namespace RPG::GameCore { class LevelGraphValueSource; }

#define RPG_GAMECORE_LEVELGRAPHVALESOURCEEXTENSION_WRITETOCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xE6E5B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGraphValeSourceExtension_TypeDefinitionIndex = 57769;

	class LevelGraphValeSourceExtension : public ::System::Object
	{
	public:
		static ::System::Void WriteToCustomData(::RPG::GameCore::LevelGraphValueSource* a1, ::JBFFCBPMKEF* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::LevelGraphValueSource*, ::JBFFCBPMKEF*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALESOURCEEXTENSION_WRITETOCUSTOMDATA_OFFSET))(a1, a2);
		}

	};
}
