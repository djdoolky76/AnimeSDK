#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
namespace RPG::GameCore { class FormationData; }

#define CCGELMMFAJH_EMKGIBPKKNK_OFFSET UNITYSDK_OFFSET(0xC73AB40)
#define CCGELMMFAJH_KNHALNMOJGL_OFFSET UNITYSDK_OFFSET(0xC73A700)

inline static constexpr unsigned int CCGELMMFAJH_TypeDefinitionIndex = 59302;

	class CCGELMMFAJH : public ::System::Object
	{
	public:
		static ::System::Int32 KNHALNMOJGL(::RPG::GameCore::FormationData* a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FormationData*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CCGELMMFAJH_KNHALNMOJGL_OFFSET))(a1, a2);
		}

		static ::System::Boolean EMKGIBPKKNK(::RPG::GameCore::FormationData* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FormationData*))((::PBYTE)hIl2Cpp + CCGELMMFAJH_EMKGIBPKKNK_OFFSET))(a1);
		}

	};
