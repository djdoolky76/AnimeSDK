#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerHitProp; }

#define ICBAOFNCJKG_CTOR_OFFSET UNITYSDK_OFFSET(0x16DF4210)
#define ICBAOFNCJKG_NICNFGOAOHI_OFFSET UNITYSDK_OFFSET(0x16DF4290)
#define ICBAOFNCJKG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16DF4240)

inline static constexpr unsigned int ICBAOFNCJKG_TypeDefinitionIndex = 60056;

	class ICBAOFNCJKG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerHitProp* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerHitProp*))((::PBYTE)hIl2Cpp + ICBAOFNCJKG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBAOFNCJKG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void NICNFGOAOHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBAOFNCJKG_NICNFGOAOHI_OFFSET))(this);
		}

	};
