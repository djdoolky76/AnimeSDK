#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/EffectResult.h"
#include "unitysdk/System/Object.h"

class NLPOOFBMDLC;
namespace MoleMole::HollowChessboard { class IEffectExpressionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTROLEENTRYCONFIG_CREATEEFFECTROLEENTRY_OFFSET UNITYSDK_OFFSET(0x10D23760)
#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTROLEENTRYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10D239F0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int EffectRoleEntryConfig_TypeDefinitionIndex = 68500;

	class EffectRoleEntryConfig : public ::System::Object
	{
	public:
		::System::String* Description; // 0x10
		::MoleMole::HollowChessboard::EffectResult Result; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::IEffectExpressionConfig*>* EffectExpressionArray; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTROLEENTRYCONFIG__CTOR_OFFSET))(this);
		}

		::NLPOOFBMDLC* CreateEffectRoleEntry()
		{
			return ((::NLPOOFBMDLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTROLEENTRYCONFIG_CREATEEFFECTROLEENTRY_OFFSET))(this);
		}
	};
}
