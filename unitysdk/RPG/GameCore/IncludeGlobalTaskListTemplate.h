#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class IncludeGlobalTaskListTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_INCLUDEGLOBALTASKLISTTEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D785DA0)
#define RPG_GAMECORE_INCLUDEGLOBALTASKLISTTEMPLATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D785DB0)
#define RPG_GAMECORE_INCLUDEGLOBALTASKLISTTEMPLATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D785D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IncludeGlobalTaskListTemplate_TypeDefinitionIndex = 23832;

	class IncludeGlobalTaskListTemplate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>* DynamicStrings; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCLUDEGLOBALTASKLISTTEMPLATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::IncludeGlobalTaskListTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IncludeGlobalTaskListTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCLUDEGLOBALTASKLISTTEMPLATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::IncludeGlobalTaskListTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IncludeGlobalTaskListTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCLUDEGLOBALTASKLISTTEMPLATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
