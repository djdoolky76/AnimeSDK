#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StopElevationDither; }
namespace RPG::GameCore { class TaskContext; }

#define JJOCMKICFPN_CTOR_OFFSET UNITYSDK_OFFSET(0xB203CD0)
#define JJOCMKICFPN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB203D00)

inline static constexpr unsigned int JJOCMKICFPN_TypeDefinitionIndex = 53296;

	class JJOCMKICFPN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopElevationDither* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopElevationDither*))((::PBYTE)hIl2Cpp + JJOCMKICFPN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOCMKICFPN_ONTASKBEGIN_OFFSET))(this);
		}

	};
