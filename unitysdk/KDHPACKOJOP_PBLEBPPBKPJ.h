#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KDHPACKOJOP;
namespace System { class Action; }

#define KDHPACKOJOP_PBLEBPPBKPJ_AOJFBKBMADF_OFFSET UNITYSDK_OFFSET(0x16334030)
#define KDHPACKOJOP_PBLEBPPBKPJ_BEDNEGCILNB_OFFSET UNITYSDK_OFFSET(0x163340C0)
#define KDHPACKOJOP_PBLEBPPBKPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16334020)

inline static constexpr unsigned int KDHPACKOJOP_PBLEBPPBKPJ_TypeDefinitionIndex = 82216;

class KDHPACKOJOP_PBLEBPPBKPJ : public ::System::Object
{
public:
	::KDHPACKOJOP* KLHPEBKNIFB; // 0x10
	::System::Action* HGBOMLCCBEE; // 0x18
	::System::Action* CAAFEGLOALC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHPACKOJOP_PBLEBPPBKPJ__CTOR_OFFSET))(this);
	}

	::System::Void AOJFBKBMADF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHPACKOJOP_PBLEBPPBKPJ_AOJFBKBMADF_OFFSET))(this);
	}

	::System::Void BEDNEGCILNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHPACKOJOP_PBLEBPPBKPJ_BEDNEGCILNB_OFFSET))(this);
	}
};
