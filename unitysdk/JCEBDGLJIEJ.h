#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightRoleSkillRemarkActivateType.h"
#include "unitysdk/System/Object.h"
class JCEBDGLJIEJ;

#define JCEBDGLJIEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16945970)
#define JCEBDGLJIEJ_FOGDIFNBEKO_OFFSET UNITYSDK_OFFSET(0x16945860)

inline static constexpr unsigned int JCEBDGLJIEJ_TypeDefinitionIndex = 66834;

	class JCEBDGLJIEJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEBDGLJIEJ_CTOR_OFFSET))(this);
		}

		static ::JCEBDGLJIEJ* FOGDIFNBEKO(::RPG::GameCore::GridFightRoleSkillRemarkActivateType a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::JCEBDGLJIEJ*(*)(::RPG::GameCore::GridFightRoleSkillRemarkActivateType, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + JCEBDGLJIEJ_FOGDIFNBEKO_OFFSET))(a1, a2);
		}

	};
