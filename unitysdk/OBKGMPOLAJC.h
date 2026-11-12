#pragma once
#include "unitysdk/unitysdk.h"
class EIPNCIPFNNL;
namespace RPG::GameCore { class TaskContext; }

#define OBKGMPOLAJC_CTOR_OFFSET UNITYSDK_OFFSET(0xC64FA40)
#define OBKGMPOLAJC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC64FA70)

inline static constexpr unsigned int OBKGMPOLAJC_TypeDefinitionIndex = 59891;

	class OBKGMPOLAJC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EIPNCIPFNNL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EIPNCIPFNNL*))((::PBYTE)hIl2Cpp + OBKGMPOLAJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKGMPOLAJC_ONTASKBEGIN_OFFSET))(this);
		}

	};
