#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialChimeraBattlePauseGameLock; }

#define CHBMPGLPHEO_CTOR_OFFSET UNITYSDK_OFFSET(0xCC8C400)
#define CHBMPGLPHEO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC8C510)
#define CHBMPGLPHEO_HHPLCLPFPLD_OFFSET UNITYSDK_OFFSET(0xCC8C480)
#define CHBMPGLPHEO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC8C430)

inline static constexpr unsigned int CHBMPGLPHEO_TypeDefinitionIndex = 58817;

	class CHBMPGLPHEO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialChimeraBattlePauseGameLock* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialChimeraBattlePauseGameLock*))((::PBYTE)hIl2Cpp + CHBMPGLPHEO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBMPGLPHEO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBMPGLPHEO_DISPOSE_OFFSET))(this);
		}

		::System::Void HHPLCLPFPLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBMPGLPHEO_HHPLCLPFPLD_OFFSET))(this);
		}

	};
