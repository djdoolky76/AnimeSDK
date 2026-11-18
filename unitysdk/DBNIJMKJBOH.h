#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class UIAdataporRectTransform; }

#define DBNIJMKJBOH_BKCHOKGOOLG_OFFSET UNITYSDK_OFFSET(0x15A2B1C0)
#define DBNIJMKJBOH_EMLDIHEBNBO_OFFSET UNITYSDK_OFFSET(0x76D6D0)

inline static constexpr unsigned int DBNIJMKJBOH_TypeDefinitionIndex = 39354;

struct alignas(4) DBNIJMKJBOH
{
	::UnityEngine::Vector2 OODIMCBKGPN; // 0x10
	::UnityEngine::Vector2 ELHPDKGENAC; // 0x18
	::UnityEngine::Vector2 OHJOKINLKEB; // 0x20
	::UnityEngine::Vector2 GLAJICKGDDJ; // 0x28
	::UnityEngine::Vector2 FHCEPMACAPD; // 0x30
	::UnityEngine::Vector2 LEKIMGKFLDA; // 0x38

	::System::Void EMLDIHEBNBO(::MoleMole::UIAdataporRectTransform* MGOFOAFCFIJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAdataporRectTransform*))((::PBYTE)hIl2Cpp + DBNIJMKJBOH_EMLDIHEBNBO_OFFSET))(this, MGOFOAFCFIJ);
	}

	/*
	static ::DBNIJMKJBOH BKCHOKGOOLG(::MoleMole::UIAdataporRectTransform* MGOFOAFCFIJ)
	{
		return ((::DBNIJMKJBOH(*)(::MoleMole::UIAdataporRectTransform*))((::PBYTE)hIl2Cpp + DBNIJMKJBOH_BKCHOKGOOLG_OFFSET))(MGOFOAFCFIJ);
	}
	*/
};
