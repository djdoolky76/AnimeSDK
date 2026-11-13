#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvDisableNpcSyncMotion; }
namespace RPG::GameCore { class TaskContext; }

#define CELILNMLNMP_CTOR_OFFSET UNITYSDK_OFFSET(0x18820480)
#define CELILNMLNMP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x188204B0)

inline static constexpr unsigned int CELILNMLNMP_TypeDefinitionIndex = 59112;

	class CELILNMLNMP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvDisableNpcSyncMotion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvDisableNpcSyncMotion*))((::PBYTE)hIl2Cpp + CELILNMLNMP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELILNMLNMP_ONTASKBEGIN_OFFSET))(this);
		}

	};
