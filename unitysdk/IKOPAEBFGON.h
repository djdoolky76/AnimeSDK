#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBHJHADOEID.h"
namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class TaskContext; }

#define IKOPAEBFGON_BFALCBKCFFF_OFFSET UNITYSDK_OFFSET(0x16491C20)
#define IKOPAEBFGON_CTOR_OFFSET UNITYSDK_OFFSET(0x16491BC0)

inline static constexpr unsigned int IKOPAEBFGON_TypeDefinitionIndex = 69438;

	class IKOPAEBFGON : public ::BBHJHADOEID
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKOPAEBFGON_CTOR_OFFSET))(this);
		}

		::System::Void BFALCBKCFFF(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IKOPAEBFGON_BFALCBKCFFF_OFFSET))(this, a1, a2, a3, a4);
		}

	};
