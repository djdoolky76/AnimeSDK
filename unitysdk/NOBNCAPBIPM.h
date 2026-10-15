#pragma once
#include "unitysdk/unitysdk.h"
class NKHAEEAHIGB;
namespace RPG::GameCore { class TaskContext; }

#define NOBNCAPBIPM_CTOR_OFFSET UNITYSDK_OFFSET(0xBCE55B0)
#define NOBNCAPBIPM_LLDKMAMCNIA_OFFSET UNITYSDK_OFFSET(0xBCE5740)
#define NOBNCAPBIPM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCE55E0)

inline static constexpr unsigned int NOBNCAPBIPM_TypeDefinitionIndex = 52619;

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
