#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LDDDABNDHEG;
namespace MoleMole::HollowChessboard { class EffectRoleEntryConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTROLECONFIG_CREATEEFFECTROLE_OFFSET UNITYSDK_OFFSET(0x139EB410)
#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x139EB5E0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int EffectRoleConfig_TypeDefinitionIndex = 51288;

	class EffectRoleConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::EffectRoleEntryConfig*>* EffectExpressionArray; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTROLECONFIG__CTOR_OFFSET))(this);
		}

		::LDDDABNDHEG* CreateEffectRole()
		{
			return ((::LDDDABNDHEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTROLECONFIG_CREATEEFFECTROLE_OFFSET))(this);
		}
	};
}
