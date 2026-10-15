#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ALMFLCJCHKP;
namespace System { class Action; }

#define AHDEHOKEMJM_CTOR_OFFSET UNITYSDK_OFFSET(0xEB7CB40)
#define AHDEHOKEMJM_GFLLDDKFPDE_OFFSET UNITYSDK_OFFSET(0xEB7C590)
#define AHDEHOKEMJM_JAMPAJHFHJN_OFFSET UNITYSDK_OFFSET(0xEB7C780)
#define AHDEHOKEMJM_KNJHHCMFFHH_OFFSET UNITYSDK_OFFSET(0xEB7C8F0)

inline static constexpr unsigned int AHDEHOKEMJM_TypeDefinitionIndex = 77814;

	class AHDEHOKEMJM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDEHOKEMJM_CTOR_OFFSET))(this);
		}

		::System::Void GFLLDDKFPDE(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AHDEHOKEMJM_GFLLDDKFPDE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAMPAJHFHJN(::ALMFLCJCHKP* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AHDEHOKEMJM_JAMPAJHFHJN_OFFSET))(this, a1, a2);
		}

		::System::Void KNJHHCMFFHH(::ALMFLCJCHKP* a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::UnityEngine::Vector3, ::System::Action*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AHDEHOKEMJM_KNJHHCMFFHH_OFFSET))(this, a1, a2, a3, a4);
		}

	};
