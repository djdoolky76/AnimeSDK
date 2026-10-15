#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicJsonConfig; }
namespace RPG::GameCore { class DynamicJsonList; }
namespace System { class String; }

#define RPG_GAMECORE_DYNAMICJSONLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D628F00)
#define RPG_GAMECORE_DYNAMICJSONLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D628D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicJsonList_TypeDefinitionIndex = 16483;

	class DynamicJsonList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Custom; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* Key; // 0x18
		::Il2CppArray<::RPG::GameCore::DynamicJsonConfig*>* Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICJSONLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicJsonList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicJsonList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICJSONLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
