#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHDPDELCDNI.h"
#include "unitysdk/MoleMole/Photo/LookAtBoneForwardAxis.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JLJFLLKCPKE.h"
#include "unitysdk/NPCCrowd/Animation/FRefPose.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define JAHFCNNMABJ_JCIODAGLLGB_OFFSET UNITYSDK_OFFSET(0x1382C3B0)
#define JAHFCNNMABJ_NLPAGMOKLHE_1_OFFSET UNITYSDK_OFFSET(0x714E60)
#define JAHFCNNMABJ_NLPAGMOKLHE_2_OFFSET UNITYSDK_OFFSET(0x714F20)
#define JAHFCNNMABJ_NLPAGMOKLHE_OFFSET UNITYSDK_OFFSET(0x714E00)
#define JAHFCNNMABJ__CTOR_OFFSET UNITYSDK_OFFSET(0x714DF0)

inline static constexpr unsigned int JAHFCNNMABJ_TypeDefinitionIndex = 63939;

struct alignas(4) JAHFCNNMABJ
{
	::HHDPDELCDNI JKFCLNDCJJE; // 0x10
	::System::Single JAJHPKNEOFD; // 0x14
	::MoleMole::Photo::LookAtBoneForwardAxis DCKFAGMKGAB; // 0x18

	::System::Void _ctor(::HHDPDELCDNI CJAIGAKJOGE, ::System::Single IECOJPMPJMP, ::MoleMole::Photo::LookAtBoneForwardAxis BHFAGMPDIGJ)
	{
		return ((::System::Void(*)(::PVOID, ::HHDPDELCDNI, ::System::Single, ::MoleMole::Photo::LookAtBoneForwardAxis))((::PBYTE)hIl2Cpp + JAHFCNNMABJ__CTOR_OFFSET))(this, CJAIGAKJOGE, IECOJPMPJMP, BHFAGMPDIGJ);
	}

	::UnityEngine::Vector3 NLPAGMOKLHE(::NPCCrowd::Animation::FRefPose MOEKEKKJGBB)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::NPCCrowd::Animation::FRefPose))((::PBYTE)hIl2Cpp + JAHFCNNMABJ_NLPAGMOKLHE_OFFSET))(this, MOEKEKKJGBB);
	}

	::UnityEngine::Vector3 NLPAGMOKLHE_1(::JLJFLLKCPKE& MOEKEKKJGBB)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::JLJFLLKCPKE&))((::PBYTE)hIl2Cpp + JAHFCNNMABJ_NLPAGMOKLHE_1_OFFSET))(this, MOEKEKKJGBB);
	}

	::UnityEngine::Vector3 NLPAGMOKLHE_2(::UnityEngine::Quaternion BFBELMDIAHI)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + JAHFCNNMABJ_NLPAGMOKLHE_2_OFFSET))(this, BFBELMDIAHI);
	}

	/*
	static ::HHDPDELCDNI JCIODAGLLGB(::JAHFCNNMABJ OHJOMJCNNMC)
	{
		return ((::HHDPDELCDNI(*)(::JAHFCNNMABJ))((::PBYTE)hIl2Cpp + JAHFCNNMABJ_JCIODAGLLGB_OFFSET))(OHJOMJCNNMC);
	}
	*/
};
