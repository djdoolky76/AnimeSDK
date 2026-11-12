#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ResetCameraAxis; }
namespace RPG::GameCore { class TaskContext; }

#define CGKJMPGJPOL_CTOR_OFFSET UNITYSDK_OFFSET(0xD638E50)
#define CGKJMPGJPOL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD638E80)

inline static constexpr unsigned int CGKJMPGJPOL_TypeDefinitionIndex = 56497;

	class CGKJMPGJPOL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetCameraAxis* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetCameraAxis*))((::PBYTE)hIl2Cpp + CGKJMPGJPOL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKJMPGJPOL_ONTASKBEGIN_OFFSET))(this);
		}

	};
