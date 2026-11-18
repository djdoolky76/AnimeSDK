#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlatBuffers::Config { class ABMapConfigTemplate; }

#define MOLEMOLE_FLOWCANVAS_LDREADBANGBOOAUTOBATTLEDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x139D2BF0)
#define MOLEMOLE_FLOWCANVAS_LDREADBANGBOOAUTOBATTLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x139D2D40)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int LDReadBangbooAutoBattleData_TypeDefinitionIndex = 38699;

	class LDReadBangbooAutoBattleData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDREADBANGBOOAUTOBATTLEDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::FlatBuffers::Config::ABMapConfigTemplate* Invoke(::System::Int32 Id, ::System::Boolean UseCurrentLevel)
		{
			return ((::MoleMole::FlatBuffers::Config::ABMapConfigTemplate*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDREADBANGBOOAUTOBATTLEDATA_INVOKE_OFFSET))(this, Id, UseCurrentLevel);
		}
	};
}
