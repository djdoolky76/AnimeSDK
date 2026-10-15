#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBHJHADOEID.h"
namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class TaskContext; }

#define OOJAACMFFGA_BFALCBKCFFF_OFFSET UNITYSDK_OFFSET(0xBF81A40)
#define OOJAACMFFGA_CTOR_OFFSET UNITYSDK_OFFSET(0xBF819E0)

inline static constexpr unsigned int OOJAACMFFGA_TypeDefinitionIndex = 69437;

	class OOJAACMFFGA : public ::BBHJHADOEID
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJAACMFFGA_CTOR_OFFSET))(this);
		}

		::System::Void BFALCBKCFFF(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OOJAACMFFGA_BFALCBKCFFF_OFFSET))(this, a1, a2, a3, a4);
		}

	};
