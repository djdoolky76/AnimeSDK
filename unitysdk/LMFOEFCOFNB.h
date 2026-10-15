#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LMFOEFCOFNB;
namespace RPG::GameCore { class TaskConfig; }

#define LMFOEFCOFNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D113AB0)
#define LMFOEFCOFNB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D113AC0)
#define LMFOEFCOFNB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D113A80)

inline static constexpr unsigned int LMFOEFCOFNB_TypeDefinitionIndex = 21550;

	class LMFOEFCOFNB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* KFNLCONEPDC; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* MGFLFCHMGPA; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* MAAKHAMPNNC; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FHGIDPKMDND; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* LDGEEMNBGPF; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* KBEFEGCJFCG; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* MPFHJEHNPJO; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* MNLFCOJAKLG; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFOEFCOFNB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LMFOEFCOFNB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LMFOEFCOFNB*))((::PBYTE)hIl2Cpp + LMFOEFCOFNB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LMFOEFCOFNB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LMFOEFCOFNB*))((::PBYTE)hIl2Cpp + LMFOEFCOFNB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
