#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvPlayerEnableIdleShow; }
namespace RPG::GameCore { class TaskContext; }

#define EHFOGMKLNMK_CTOR_OFFSET UNITYSDK_OFFSET(0x18BCA3D0)
#define EHFOGMKLNMK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18BCA400)

inline static constexpr unsigned int EHFOGMKLNMK_TypeDefinitionIndex = 53573;

	class EHFOGMKLNMK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPlayerEnableIdleShow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPlayerEnableIdleShow*))((::PBYTE)hIl2Cpp + EHFOGMKLNMK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFOGMKLNMK_ONTASKBEGIN_OFFSET))(this);
		}

	};
