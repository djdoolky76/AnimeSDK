#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropSwitchMaterial; }
namespace RPG::GameCore { class TaskContext; }

#define PEOHCNOOOAN_CTOR_OFFSET UNITYSDK_OFFSET(0xCAD86F0)
#define PEOHCNOOOAN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCAD8910)
#define PEOHCNOOOAN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCAD8720)
#define PEOHCNOOOAN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCAD88C0)

inline static constexpr unsigned int PEOHCNOOOAN_TypeDefinitionIndex = 59616;

	class PEOHCNOOOAN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSwitchMaterial* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSwitchMaterial*))((::PBYTE)hIl2Cpp + PEOHCNOOOAN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOHCNOOOAN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOHCNOOOAN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOHCNOOOAN_DISPOSE_OFFSET))(this);
		}

	};
