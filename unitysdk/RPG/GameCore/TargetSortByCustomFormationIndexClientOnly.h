#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetSortByCustomFormationIndexClientOnly; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB6F460)
#define RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB6F5C0)
#define RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB6F570)
#define RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB6F470)
#define RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB6F410)

namespace RPG::GameCore
{
	class TargetSortByCustomFormationIndexClientOnly : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::String* CustomFormationName; // 0x10
		::Il2CppArray<::System::UInt32>* SortIndexList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
