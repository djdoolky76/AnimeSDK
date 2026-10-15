#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class FloorCustomBoolConfig; }

#define PJBDLDHBMOA_CTOR_OFFSET UNITYSDK_OFFSET(0xC27B6E0)
#define PJBDLDHBMOA_ISVALUEEQUALSTO_OFFSET UNITYSDK_OFFSET(0xC27B710)

inline static constexpr unsigned int PJBDLDHBMOA_TypeDefinitionIndex = 62086;

	class PJBDLDHBMOA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::FloorCustomBoolConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FloorCustomBoolConfig*))((::PBYTE)hIl2Cpp + PJBDLDHBMOA_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsValueEqualsTo(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PJBDLDHBMOA_ISVALUEEQUALSTO_OFFSET))(this, a1);
		}

	};
