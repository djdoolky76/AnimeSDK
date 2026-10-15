#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SmellPathEdge; }

#define RPG_GAMECORE_SMELLPATHEDGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF0EF0)
#define RPG_GAMECORE_SMELLPATHEDGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAF0D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SmellPathEdge_TypeDefinitionIndex = 17580;

	class SmellPathEdge : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 NodeIndexA; // 0x10
		::System::Int32 NodeIndexB; // 0x14
		::Il2CppArray<::RPG::MVector3>* AssistantNodes; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SMELLPATHEDGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SmellPathEdge* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SmellPathEdge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SMELLPATHEDGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
