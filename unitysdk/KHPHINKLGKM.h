#pragma once
#include "unitysdk/unitysdk.h"
class PGMFANHDHGG;
namespace RPG::GameCore { class TaskContext; }

#define KHPHINKLGKM_CTOR_OFFSET UNITYSDK_OFFSET(0xB40F410)
#define KHPHINKLGKM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB40F440)

inline static constexpr unsigned int KHPHINKLGKM_TypeDefinitionIndex = 53825;

	class KHPHINKLGKM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PGMFANHDHGG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PGMFANHDHGG*))((::PBYTE)hIl2Cpp + KHPHINKLGKM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPHINKLGKM_ONTASKBEGIN_OFFSET))(this);
		}

	};
