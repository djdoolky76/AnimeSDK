#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"

class AMLegIK;
class LKMHAPGNBKG;

#define LKMHAPGNBKG_BACNKHFKGCA_CJPGBDMDBEF_OFFSET UNITYSDK_OFFSET(0x16855650)
#define LKMHAPGNBKG_BACNKHFKGCA__CTOR_OFFSET UNITYSDK_OFFSET(0x16855640)

inline static constexpr unsigned int LKMHAPGNBKG_BACNKHFKGCA_TypeDefinitionIndex = 45568;

class LKMHAPGNBKG_BACNKHFKGCA : public ::System::Object
{
public:
	::Il2CppArray<::AMLegIK*>* EDFADLBGKNM; // 0x10
	::LKMHAPGNBKG* KLHPEBKNIFB; // 0x18
	::MoleMole::EntityHandle HPADNAEINPK; // 0x20
	::Il2CppArray<::UnityEngine::LayerMask>* JANDOEAJIGL; // 0x30
	::AMLegIK* IJHLALGJLEF; // 0x38
	::UnityEngine::LayerMask AFKEGKKLIAO; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMHAPGNBKG_BACNKHFKGCA__CTOR_OFFSET))(this);
	}

	::System::Void CJPGBDMDBEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMHAPGNBKG_BACNKHFKGCA_CJPGBDMDBEF_OFFSET))(this);
	}
};
