#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PLJGNOCMEKI_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x194B7B80)
#define PLJGNOCMEKI_MLMLEKKJJID_OFFSET UNITYSDK_OFFSET(0x194B7B70)
#define PLJGNOCMEKI_ONREADY_OFFSET UNITYSDK_OFFSET(0x194B7950)
#define PLJGNOCMEKI_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x194B7AC0)
#define PLJGNOCMEKI__CTOR_OFFSET UNITYSDK_OFFSET(0x194B7B30)

inline static constexpr unsigned int PLJGNOCMEKI_TypeDefinitionIndex = 77219;

class PLJGNOCMEKI
{
public:
	::UnityEngine::Vector3 BBGCDDPHLFI; // 0x28
	::UnityEngine::Vector3 FDCAFMGFPHD; // 0x34
	::System::Int32 HOEEMDIINIF; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLJGNOCMEKI__CTOR_OFFSET))(this);
	}

	::System::Void OnReady()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLJGNOCMEKI_ONREADY_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLJGNOCMEKI_ONRECYCLE_OFFSET))(this);
	}

	::System::Void MLMLEKKJJID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLJGNOCMEKI_MLMLEKKJJID_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLJGNOCMEKI_ANEOCOIFDDJ_OFFSET))(this);
	}
};
