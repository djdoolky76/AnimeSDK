#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYSOUND_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D08560)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYSOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x10D086B0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardPlaySound_TypeDefinitionIndex = 58572;

	class ChessboardPlaySound
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYSOUND__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 index, ::System::Int32 soundConfigId, ::System::Boolean notCanInterrupt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYSOUND_INVOKE_OFFSET))(this, index, soundConfigId, notCanInterrupt);
		}
	};
}
