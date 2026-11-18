#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSEFFECTBASELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x12773C90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_ChessEffectBaseList_TypeDefinitionIndex = 46314;

	class ConfigHollowChessboard_ChessEffectBaseList : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* List; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CHESSEFFECTBASELIST__CTOR_OFFSET))(this);
		}
	};
}
