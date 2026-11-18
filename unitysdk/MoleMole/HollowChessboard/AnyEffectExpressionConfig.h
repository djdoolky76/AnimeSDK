#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHFOAJNBOP;
namespace MoleMole::HollowChessboard { class IEffectExpressionConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_ANYEFFECTEXPRESSIONCONFIG_CREATEEFFECTEXPRESSIONCONFIG_OFFSET UNITYSDK_OFFSET(0x180EE3B0)
#define MOLEMOLE_HOLLOWCHESSBOARD_ANYEFFECTEXPRESSIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x180EE430)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int AnyEffectExpressionConfig_TypeDefinitionIndex = 83353;

	class AnyEffectExpressionConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::IEffectExpressionConfig*>* EffectExpressionConfigArray; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_ANYEFFECTEXPRESSIONCONFIG__CTOR_OFFSET))(this);
		}

		::BPHFOAJNBOP* CreateEffectExpressionConfig()
		{
			return ((::BPHFOAJNBOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_ANYEFFECTEXPRESSIONCONFIG_CREATEEFFECTEXPRESSIONCONFIG_OFFSET))(this);
		}
	};
}
