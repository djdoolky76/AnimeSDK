#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PGNFPEFOACA_ADIOJNDAIJJ;
namespace MoleMole::Level { class LevelConfig; }

#define PGNFPEFOACA_AFIBPCKLPGE_HGHHPDKAODO_OFFSET UNITYSDK_OFFSET(0x1C1D3CB0)
#define PGNFPEFOACA_AFIBPCKLPGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D3CA0)

inline static constexpr unsigned int PGNFPEFOACA_AFIBPCKLPGE_TypeDefinitionIndex = 83309;

class PGNFPEFOACA_AFIBPCKLPGE : public ::System::Object
{
public:
	::PGNFPEFOACA_ADIOJNDAIJJ* FGBNBFHOKAA; // 0x10
	::MoleMole::Level::LevelConfig* BMNCHNFJFGE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNFPEFOACA_AFIBPCKLPGE__CTOR_OFFSET))(this);
	}

	::System::Void HGHHPDKAODO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNFPEFOACA_AFIBPCKLPGE_HGHHPDKAODO_OFFSET))(this);
	}
};
