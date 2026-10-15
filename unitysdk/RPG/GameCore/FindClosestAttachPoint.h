#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FindClosestAttachPoint; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_FINDCLOSESTATTACHPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A88D0)
#define RPG_GAMECORE_FINDCLOSESTATTACHPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6A88E0)
#define RPG_GAMECORE_FINDCLOSESTATTACHPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A88A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FindClosestAttachPoint_TypeDefinitionIndex = 22457;

	class FindClosestAttachPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SourceAttachPointName; // 0x20
		::Il2CppArray<::System::String*>* TargetAttachPointName; // 0x28
		::System::String* DynamicStringKey; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCLOSESTATTACHPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FindClosestAttachPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FindClosestAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCLOSESTATTACHPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FindClosestAttachPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FindClosestAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCLOSESTATTACHPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
