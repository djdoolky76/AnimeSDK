#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBFFCBPMKEF;
namespace RPG::GameCore { class LevelGraphValueSource; }

#define RPG_GAMECORE_LEVELGRAPHVALESOURCEEXTENSION_WRITETOCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xF1F2C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGraphValeSourceExtension_TypeDefinitionIndex = 59004;

	class LevelGraphValeSourceExtension : public ::System::Object
	{
	public:
		static ::System::Void WriteToCustomData(::RPG::GameCore::LevelGraphValueSource* a1, ::JBFFCBPMKEF* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::LevelGraphValueSource*, ::JBFFCBPMKEF*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALESOURCEEXTENSION_WRITETOCUSTOMDATA_OFFSET))(a1, a2);
		}

	};
}
