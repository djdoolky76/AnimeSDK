#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlatBuffers::Config { class LevelPatternTemplate; }

#define MOLEMOLE_FLOWCANVAS_LDREADLEVELTEMPLATEDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x12446F80)
#define MOLEMOLE_FLOWCANVAS_LDREADLEVELTEMPLATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x124470D0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int LDReadLevelTemplateData_TypeDefinitionIndex = 88777;

	class LDReadLevelTemplateData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDREADLEVELTEMPLATEDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::FlatBuffers::Config::LevelPatternTemplate* Invoke(::System::Int32 Id, ::System::Boolean UseCurrentLevel)
		{
			return ((::MoleMole::FlatBuffers::Config::LevelPatternTemplate*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDREADLEVELTEMPLATEDATA_INVOKE_OFFSET))(this, Id, UseCurrentLevel);
		}
	};
}
