#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILITEMBASEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B8710)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int CaseBoardDetailItemBaseViewModel_TypeDefinitionIndex = 83575;

	class CaseBoardDetailItemBaseViewModel : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILITEMBASEVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
