#pragma once
#include "unitysdk/unitysdk.h"
class GMHCOKHCONB;
namespace RPG::GameCore { class TaskContext; }

#define BDABFCDMAKM_CTOR_OFFSET UNITYSDK_OFFSET(0x162EB680)
#define BDABFCDMAKM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162EB6B0)
#define BDABFCDMAKM__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x162EB990)

inline static constexpr unsigned int BDABFCDMAKM_TypeDefinitionIndex = 52804;

	class BDABFCDMAKM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GMHCOKHCONB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GMHCOKHCONB*))((::PBYTE)hIl2Cpp + BDABFCDMAKM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDABFCDMAKM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDABFCDMAKM__ONTASKBEGIN_B__1_0_OFFSET))(this);
		}

	};
