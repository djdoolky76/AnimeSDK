#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UITRAININGROOMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12BFAD40)

namespace MoleMole
{
	inline static constexpr unsigned int UITrainingRoomContext_TypeDefinitionIndex = 73933;

	class UITrainingRoomContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRAININGROOMCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
