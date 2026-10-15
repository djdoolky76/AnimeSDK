#pragma once
#include "unitysdk/unitysdk.h"
class BIKKDNAMGMG;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define DKICLOGOIHC_BIJPEOHBGKA_OFFSET UNITYSDK_OFFSET(0xF87B900)
#define DKICLOGOIHC_CTOR_OFFSET UNITYSDK_OFFSET(0xF87B570)
#define DKICLOGOIHC_KIADNFBKOCM_OFFSET UNITYSDK_OFFSET(0xF87B7D0)
#define DKICLOGOIHC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF87B5A0)

inline static constexpr unsigned int DKICLOGOIHC_TypeDefinitionIndex = 55781;

	class DKICLOGOIHC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BIKKDNAMGMG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BIKKDNAMGMG*))((::PBYTE)hIl2Cpp + DKICLOGOIHC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKICLOGOIHC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void BIJPEOHBGKA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DKICLOGOIHC_BIJPEOHBGKA_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* KIADNFBKOCM()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKICLOGOIHC_KIADNFBKOCM_OFFSET))(this);
		}

	};
