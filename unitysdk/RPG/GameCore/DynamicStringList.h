#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicStringList; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_DYNAMICSTRINGLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D629B10)
#define RPG_GAMECORE_DYNAMICSTRINGLIST_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D629B20)
#define RPG_GAMECORE_DYNAMICSTRINGLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D629980)

namespace RPG::GameCore
{
	class DynamicStringList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Custom; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* Key; // 0x18
		::Il2CppArray<::System::String*>* Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICSTRINGLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicStringList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicStringList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICSTRINGLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicStringList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicStringList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICSTRINGLIST_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
