#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CHESSBOARDGLITCHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19294D10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessboardGlitchConfig_TypeDefinitionIndex = 92898;

	class ChessboardGlitchConfig : public ::System::Object
	{
	public:
		::System::String* EffectPrefab; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHESSBOARDGLITCHCONFIG__CTOR_OFFSET))(this);
		}
	};
}
