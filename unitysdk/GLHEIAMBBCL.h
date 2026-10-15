#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHIEFPKGLAN;
class HFLKAOHICMK;
class KDKHADGLIPJ;
namespace RPG::GameCore { class ChimeraAbility; }

#define GLHEIAMBBCL_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0x15AB3F40)
#define GLHEIAMBBCL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15AB3A30)

inline static constexpr unsigned int GLHEIAMBBCL_TypeDefinitionIndex = 76623;

	class GLHEIAMBBCL : public ::System::Object
	{
	public:
		static ::EHIEFPKGLAN* BPLPBPMEODA(::KDKHADGLIPJ* a1, ::RPG::GameCore::ChimeraAbility* a2, ::KDKHADGLIPJ* a3, ::HFLKAOHICMK* a4)
		{
			return ((::EHIEFPKGLAN*(*)(::KDKHADGLIPJ*, ::RPG::GameCore::ChimeraAbility*, ::KDKHADGLIPJ*, ::HFLKAOHICMK*))((::PBYTE)hIl2Cpp + GLHEIAMBBCL_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		static ::EHIEFPKGLAN* BPLPBPMEODA_1(::KDKHADGLIPJ* a1, ::RPG::GameCore::ChimeraAbility* a2, ::EHIEFPKGLAN* a3, ::HFLKAOHICMK* a4)
		{
			return ((::EHIEFPKGLAN*(*)(::KDKHADGLIPJ*, ::RPG::GameCore::ChimeraAbility*, ::EHIEFPKGLAN*, ::HFLKAOHICMK*))((::PBYTE)hIl2Cpp + GLHEIAMBBCL_BPLPBPMEODA_1_OFFSET))(a1, a2, a3, a4);
		}

	};
