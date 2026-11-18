#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"

class AMLegIK;
class FCJABCFLEMP;

#define FCJABCFLEMP_HJDDGEMNBDA_CJPGBDMDBEF_OFFSET UNITYSDK_OFFSET(0x156B4950)
#define FCJABCFLEMP_HJDDGEMNBDA__CTOR_OFFSET UNITYSDK_OFFSET(0x156B4940)

inline static constexpr unsigned int FCJABCFLEMP_HJDDGEMNBDA_TypeDefinitionIndex = 74786;

class FCJABCFLEMP_HJDDGEMNBDA : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::LayerMask>* JANDOEAJIGL; // 0x10
	::FCJABCFLEMP* KLHPEBKNIFB; // 0x18
	::MoleMole::EntityHandle HPADNAEINPK; // 0x20
	::Il2CppArray<::AMLegIK*>* EDFADLBGKNM; // 0x30
	::AMLegIK* IJHLALGJLEF; // 0x38
	::UnityEngine::LayerMask AFKEGKKLIAO; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCJABCFLEMP_HJDDGEMNBDA__CTOR_OFFSET))(this);
	}

	::System::Void CJPGBDMDBEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCJABCFLEMP_HJDDGEMNBDA_CJPGBDMDBEF_OFFSET))(this);
	}
};
