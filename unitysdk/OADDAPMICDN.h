#pragma once
#include "unitysdk/unitysdk.h"
class OEAKPLCANOI;
class OJCPAPCGGFE;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::GameCore { class TaskContext; }

#define OADDAPMICDN_BPDJKBHIBGH_OFFSET UNITYSDK_OFFSET(0xBD14770)
#define OADDAPMICDN_CTOR_OFFSET UNITYSDK_OFFSET(0xBD141E0)
#define OADDAPMICDN_DPNMEFMDFJB_OFFSET UNITYSDK_OFFSET(0xBD14380)
#define OADDAPMICDN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD14210)

inline static constexpr unsigned int OADDAPMICDN_TypeDefinitionIndex = 52841;

	class OADDAPMICDN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OJCPAPCGGFE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OJCPAPCGGFE*))((::PBYTE)hIl2Cpp + OADDAPMICDN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OADDAPMICDN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void DPNMEFMDFJB(::RPG::Client::FiveDimGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + OADDAPMICDN_DPNMEFMDFJB_OFFSET))(this, a1);
		}

		::System::Void BPDJKBHIBGH(::OEAKPLCANOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEAKPLCANOI*))((::PBYTE)hIl2Cpp + OADDAPMICDN_BPDJKBHIBGH_OFFSET))(this, a1);
		}

	};
