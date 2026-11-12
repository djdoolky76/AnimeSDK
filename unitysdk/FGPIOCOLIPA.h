#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class SetFilterVolumeEnable; }
namespace RPG::GameCore { class TaskContext; }

#define FGPIOCOLIPA_CBKENJKPBCP_OFFSET UNITYSDK_OFFSET(0x1668F7C0)
#define FGPIOCOLIPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1668F610)
#define FGPIOCOLIPA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1668F880)
#define FGPIOCOLIPA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1668F640)
#define FGPIOCOLIPA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1668F770)

inline static constexpr unsigned int FGPIOCOLIPA_TypeDefinitionIndex = 59809;

	class FGPIOCOLIPA
	{
	public:
		::RPG::Client::Stage* PDAIGLPEMEE; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFilterVolumeEnable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFilterVolumeEnable*))((::PBYTE)hIl2Cpp + FGPIOCOLIPA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPIOCOLIPA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPIOCOLIPA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void CBKENJKPBCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPIOCOLIPA_CBKENJKPBCP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPIOCOLIPA_DISPOSE_OFFSET))(this);
		}

	};
