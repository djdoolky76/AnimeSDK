#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GJHBJFMHOIK_SerializedVector3;

#define GJHBJFMHOIK_JIGBCBKOMJG_OFFSET UNITYSDK_OFFSET(0x13D5CE30)
#define GJHBJFMHOIK_KDMKKALHPNM_OFFSET UNITYSDK_OFFSET(0x13D5CF90)
#define GJHBJFMHOIK_KHILABACHGP_OFFSET UNITYSDK_OFFSET(0x13D5CEB0)
#define GJHBJFMHOIK_MIEAACLGKKB_OFFSET UNITYSDK_OFFSET(0x13D5CF20)

inline static constexpr unsigned int GJHBJFMHOIK_TypeDefinitionIndex = 60945;

class GJHBJFMHOIK : public ::System::Object
{
public:
	static ::UnityEngine::Vector3 JIGBCBKOMJG(::GJHBJFMHOIK_SerializedVector3* LBKLELFHDKO)
	{
		return ((::UnityEngine::Vector3(*)(::GJHBJFMHOIK_SerializedVector3*))((::PBYTE)hIl2Cpp + GJHBJFMHOIK_JIGBCBKOMJG_OFFSET))(LBKLELFHDKO);
	}

	static ::MoleMole::Vector2Int KHILABACHGP(::MoleMole::Vector2Int FFKBEGIHIGG, ::MoleMole::Vector2Int CKADGLGJJAB)
	{
		return ((::MoleMole::Vector2Int(*)(::MoleMole::Vector2Int, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + GJHBJFMHOIK_KHILABACHGP_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}

	static ::MoleMole::Vector2Int MIEAACLGKKB(::MoleMole::Vector2Int FFKBEGIHIGG, ::MoleMole::Vector2Int CKADGLGJJAB)
	{
		return ((::MoleMole::Vector2Int(*)(::MoleMole::Vector2Int, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + GJHBJFMHOIK_MIEAACLGKKB_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}

	static ::GJHBJFMHOIK_SerializedVector3* KDMKKALHPNM(::UnityEngine::Vector3 IJPANKCOLCP)
	{
		return ((::GJHBJFMHOIK_SerializedVector3*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GJHBJFMHOIK_KDMKKALHPNM_OFFSET))(IJPANKCOLCP);
	}
};
