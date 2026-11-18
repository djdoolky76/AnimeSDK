#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkCallbackManager_EventCallback;
class AkExternalSourceInfoArray;
class GCAFMPBODBJ;
class JPBICLPKGIO;
class PPJPNBAAPJO;
namespace UnityEngine { class GameObject; }

#define KOKGNJDOKIE_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x17673560)
#define KOKGNJDOKIE_POLISH_OFFSET UNITYSDK_OFFSET(0x176734F0)
#define KOKGNJDOKIE_RECYCLE_OFFSET UNITYSDK_OFFSET(0x176733E0)
#define KOKGNJDOKIE__CTOR_OFFSET UNITYSDK_OFFSET(0x17673550)

inline static constexpr unsigned int KOKGNJDOKIE_TypeDefinitionIndex = 49764;

class KOKGNJDOKIE : public ::System::Object
{
public:
	::GCAFMPBODBJ* LFHIBEILOKJ; // 0x10
	::AkExternalSourceInfoArray* BAHGIADDIFA; // 0x18
	::AkCallbackManager_EventCallback* JHLIDNGONOH; // 0x20
	::JPBICLPKGIO* HKKEOJAJMLE; // 0x28
	::UnityEngine::GameObject* JEIDPPCEHLD; // 0x30
	::PPJPNBAAPJO* POCANNAFFOA; // 0x38
	::System::UInt32 GHNAFBPJNKB; // 0x40
	::System::UInt32 MAFPPOBIGGK; // 0x44
	::System::UInt32 CPOJJJIKPCI; // 0x48
	::System::Single HKCEBEEEPPE; // 0x4C
	::System::UInt32 GEPABHJBIAH; // 0x50
	::System::Int32 LLNAGBMMEED; // 0x54
	::System::Boolean PPGLBHHJPKG; // 0x58
	::System::Boolean CNKLEEMBING; // 0x59
	::System::Boolean EGFDHEFKJDH; // 0x5A
	::System::Boolean LKPHCNGPOLK; // 0x5B
	::System::Single NCLKNFCFDNL; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKGNJDOKIE__CTOR_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKGNJDOKIE_RECYCLE_OFFSET))(this);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKGNJDOKIE_POLISH_OFFSET))(this);
	}

	static ::KOKGNJDOKIE* COKNIICCODC()
	{
		return ((::KOKGNJDOKIE*(*)())((::PBYTE)hIl2Cpp + KOKGNJDOKIE_COKNIICCODC_OFFSET))();
	}
};
