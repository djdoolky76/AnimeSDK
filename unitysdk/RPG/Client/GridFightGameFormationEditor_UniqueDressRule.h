#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class GridFightFormationRole; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_UNIQUEDRESSRULE_CANDRESS_OFFSET UNITYSDK_OFFSET(0x1D68F090)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_UNIQUEDRESSRULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D673AD0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_UNIQUEDRESSRULE_GET_REASON_OFFSET UNITYSDK_OFFSET(0x1D68EFE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_UniqueDressRule_TypeDefinitionIndex = 66166;

	class GridFightGameFormationEditor_UniqueDressRule : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_UNIQUEDRESSRULE_CTOR_OFFSET))(this);
		}

		::RPG::Client::TextID get_Reason()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_UNIQUEDRESSRULE_GET_REASON_OFFSET))(this);
		}

		::System::Boolean CanDress(::RPG::Client::GridFightFormationRole* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFormationRole*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_UNIQUEDRESSRULE_CANDRESS_OFFSET))(this, a1, a2);
		}

	};
}
