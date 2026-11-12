#pragma once
#include "unitysdk/unitysdk.h"
class MCIIEMOJFLO;
namespace RPG::GameCore { class TaskContext; }

#define ICLPLGLLFDI_CTOR_OFFSET UNITYSDK_OFFSET(0x16DFF060)
#define ICLPLGLLFDI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16DFF090)

inline static constexpr unsigned int ICLPLGLLFDI_TypeDefinitionIndex = 53971;

	class ICLPLGLLFDI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MCIIEMOJFLO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MCIIEMOJFLO*))((::PBYTE)hIl2Cpp + ICLPLGLLFDI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICLPLGLLFDI_ONTASKBEGIN_OFFSET))(this);
		}

	};
