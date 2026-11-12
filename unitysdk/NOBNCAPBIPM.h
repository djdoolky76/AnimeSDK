#pragma once
#include "unitysdk/unitysdk.h"
class NKHAEEAHIGB;
namespace RPG::GameCore { class TaskContext; }

#define NOBNCAPBIPM_CTOR_OFFSET UNITYSDK_OFFSET(0xC5D14C0)
#define NOBNCAPBIPM_LLDKMAMCNIA_OFFSET UNITYSDK_OFFSET(0xC5D1650)
#define NOBNCAPBIPM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC5D14F0)

inline static constexpr unsigned int NOBNCAPBIPM_TypeDefinitionIndex = 53726;

	class NOBNCAPBIPM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NKHAEEAHIGB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NKHAEEAHIGB*))((::PBYTE)hIl2Cpp + NOBNCAPBIPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBNCAPBIPM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void LLDKMAMCNIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBNCAPBIPM_LLDKMAMCNIA_OFFSET))(this);
		}

	};
