#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvPropSteerV2; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }

#define LIOGHHAGHJE_CTOR_OFFSET UNITYSDK_OFFSET(0xB6D4620)
#define LIOGHHAGHJE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6D4650)
#define LIOGHHAGHJE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6D4690)
#define LIOGHHAGHJE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB6D5220)

inline static constexpr unsigned int LIOGHHAGHJE_TypeDefinitionIndex = 52477;

	class LIOGHHAGHJE
	{
	public:
		::RPG::GameCore::PropComponent* IKHBMOJMEEM; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPropSteerV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPropSteerV2*))((::PBYTE)hIl2Cpp + LIOGHHAGHJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIOGHHAGHJE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIOGHHAGHJE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIOGHHAGHJE_ONTASKRESET_OFFSET))(this);
		}

	};
