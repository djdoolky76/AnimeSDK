#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropUnloadHitBox; }
namespace RPG::GameCore { class TaskContext; }

#define JDCNLKFDIOA_CTOR_OFFSET UNITYSDK_OFFSET(0x165B00E0)
#define JDCNLKFDIOA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165B0110)

inline static constexpr unsigned int JDCNLKFDIOA_TypeDefinitionIndex = 58363;

	class JDCNLKFDIOA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropUnloadHitBox* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropUnloadHitBox*))((::PBYTE)hIl2Cpp + JDCNLKFDIOA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDCNLKFDIOA_ONTASKBEGIN_OFFSET))(this);
		}

	};
