#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHDPDELCDNI.h"
#include "unitysdk/MoleMole/Photo/LookAtBoneForwardAxis.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JLJFLLKCPKE.h"
#include "unitysdk/NPCCrowd/Animation/FRefPose.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GAOKHAHEDPM_JCIODAGLLGB_OFFSET UNITYSDK_OFFSET(0x10EE0690)
#define GAOKHAHEDPM_NLPAGMOKLHE_1_OFFSET UNITYSDK_OFFSET(0x654330)
#define GAOKHAHEDPM_NLPAGMOKLHE_2_OFFSET UNITYSDK_OFFSET(0x654390)
#define GAOKHAHEDPM_NLPAGMOKLHE_OFFSET UNITYSDK_OFFSET(0x654270)
#define GAOKHAHEDPM__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int GAOKHAHEDPM_TypeDefinitionIndex = 73204;

struct alignas(4) GAOKHAHEDPM
{
	::HHDPDELCDNI JKFCLNDCJJE; // 0x10
	::MoleMole::Photo::LookAtBoneForwardAxis DCKFAGMKGAB; // 0x14

	::System::Void _ctor(::HHDPDELCDNI OHJOMJCNNMC, ::MoleMole::Photo::LookAtBoneForwardAxis BHFAGMPDIGJ)
	{
		return ((::System::Void(*)(::PVOID, ::HHDPDELCDNI, ::MoleMole::Photo::LookAtBoneForwardAxis))((::PBYTE)hIl2Cpp + GAOKHAHEDPM__CTOR_OFFSET))(this, OHJOMJCNNMC, BHFAGMPDIGJ);
	}

	::UnityEngine::Vector3 NLPAGMOKLHE(::JLJFLLKCPKE& MOEKEKKJGBB)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::JLJFLLKCPKE&))((::PBYTE)hIl2Cpp + GAOKHAHEDPM_NLPAGMOKLHE_OFFSET))(this, MOEKEKKJGBB);
	}

	::UnityEngine::Vector3 NLPAGMOKLHE_1(::NPCCrowd::Animation::FRefPose MOEKEKKJGBB)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::NPCCrowd::Animation::FRefPose))((::PBYTE)hIl2Cpp + GAOKHAHEDPM_NLPAGMOKLHE_1_OFFSET))(this, MOEKEKKJGBB);
	}

	/*
	static ::HHDPDELCDNI JCIODAGLLGB(::GAOKHAHEDPM OHJOMJCNNMC)
	{
		return ((::HHDPDELCDNI(*)(::GAOKHAHEDPM))((::PBYTE)hIl2Cpp + GAOKHAHEDPM_JCIODAGLLGB_OFFSET))(OHJOMJCNNMC);
	}
	*/

	::UnityEngine::Vector3 NLPAGMOKLHE_2(::UnityEngine::Quaternion BFBELMDIAHI)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + GAOKHAHEDPM_NLPAGMOKLHE_2_OFFSET))(this, BFBELMDIAHI);
	}
};
