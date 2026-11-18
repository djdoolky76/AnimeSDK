#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_UTILS_UIGAMECAMERADATATABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xE544730)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int UIGameCameraDataTable_TypeDefinitionIndex = 54757;

	class UIGameCameraDataTable
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_UIGAMECAMERADATATABLE__CTOR_OFFSET))(this);
		}
	};
}
