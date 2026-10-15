#pragma once
#include "unitysdk/unitysdk.h"
class NMAFJJJCPIM;
namespace RPG::GameCore { class TaskContext; }

#define FNIFNLCCKOI_CTOR_OFFSET UNITYSDK_OFFSET(0x158659F0)
#define FNIFNLCCKOI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15865A20)

inline static constexpr unsigned int FNIFNLCCKOI_TypeDefinitionIndex = 52853;

	class FNIFNLCCKOI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NMAFJJJCPIM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NMAFJJJCPIM*))((::PBYTE)hIl2Cpp + FNIFNLCCKOI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIFNLCCKOI_ONTASKBEGIN_OFFSET))(this);
		}

	};
