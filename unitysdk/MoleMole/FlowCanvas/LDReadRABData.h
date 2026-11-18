#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlatBuffers::Config { class RABMapConfigTemplate; }

#define MOLEMOLE_FLOWCANVAS_LDREADRABDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x130C5520)
#define MOLEMOLE_FLOWCANVAS_LDREADRABDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x130C5670)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int LDReadRABData_TypeDefinitionIndex = 59092;

	class LDReadRABData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDREADRABDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::FlatBuffers::Config::RABMapConfigTemplate* Invoke(::System::Int32 Id, ::System::Boolean UseCurrentLevel)
		{
			return ((::MoleMole::FlatBuffers::Config::RABMapConfigTemplate*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDREADRABDATA_INVOKE_OFFSET))(this, Id, UseCurrentLevel);
		}
	};
}
