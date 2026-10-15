#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PckFileList; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_PCKFILELIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F3D40)
#define RPG_GAMECORE_PCKFILELIST_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D8F3D50)
#define RPG_GAMECORE_PCKFILELIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8F3C50)

namespace RPG::GameCore
{
	class PckFileList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* PackFileList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PCKFILELIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PckFileList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PckFileList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PCKFILELIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PckFileList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PckFileList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PCKFILELIST_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
