#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropTagComponent; }
namespace RPG::GameCore { class PropTagComponentCollection; }

#define RPG_GAMECORE_PROPTAGCOMPONENTCOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95B3C0)
#define RPG_GAMECORE_PROPTAGCOMPONENTCOLLECTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95B300)

namespace RPG::GameCore
{
	class PropTagComponentCollection : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropTagComponent*>* TagComponents; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTAGCOMPONENTCOLLECTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropTagComponentCollection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropTagComponentCollection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTAGCOMPONENTCOLLECTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
