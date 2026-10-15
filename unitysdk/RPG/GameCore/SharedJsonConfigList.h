#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SharedValue.h"
#include "unitysdk/RPG/GameCore/SharedValueType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicJsonConfig; }
namespace RPG::GameCore { class SharedJsonConfigList; }

#define RPG_GAMECORE_SHAREDJSONCONFIGLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD0B00)
#define RPG_GAMECORE_SHAREDJSONCONFIGLIST_IMGLGAIIPCA_OFFSET UNITYSDK_OFFSET(0x1DAD0C20)
#define RPG_GAMECORE_SHAREDJSONCONFIGLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD0B10)
#define RPG_GAMECORE_SHAREDJSONCONFIGLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD0AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SharedJsonConfigList_TypeDefinitionIndex = 18309;

	class SharedJsonConfigList : public ::RPG::GameCore::SharedValue
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicJsonConfig*>* Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDJSONCONFIGLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SharedJsonConfigList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SharedJsonConfigList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDJSONCONFIGLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SharedJsonConfigList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SharedJsonConfigList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDJSONCONFIGLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::RPG::GameCore::SharedValueType IMGLGAIIPCA()
		{
			return ((::RPG::GameCore::SharedValueType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDJSONCONFIGLIST_IMGLGAIIPCA_OFFSET))(this);
		}

	};
}
