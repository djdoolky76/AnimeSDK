#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_HACKERGAMEINITENTITYTAGSTATISTICSUI_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A083A40)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEINITENTITYTAGSTATISTICSUI_REGISTERVIRUSINDEX_OFFSET UNITYSDK_OFFSET(0x1A083CB0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEINITENTITYTAGSTATISTICSUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A083E50)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameInitEntityTagStatisticsUI_TypeDefinitionIndex = 75047;

	class HackerGameInitEntityTagStatisticsUI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEINITENTITYTAGSTATISTICSUI__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 virusOfConcern)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEINITENTITYTAGSTATISTICSUI_INVOKE_OFFSET))(this, virusOfConcern);
		}

		::System::Void RegisterVirusIndex(::System::Int32 virusIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEINITENTITYTAGSTATISTICSUI_REGISTERVIRUSINDEX_OFFSET))(this, virusIndex);
		}
	};
}
