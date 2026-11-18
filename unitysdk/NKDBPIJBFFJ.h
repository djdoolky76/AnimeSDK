#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define NKDBPIJBFFJ_IAJIHBHIGDP_OFFSET UNITYSDK_OFFSET(0x1315C6E0)
#define NKDBPIJBFFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1315C690)

inline static constexpr unsigned int NKDBPIJBFFJ_TypeDefinitionIndex = 79954;

class NKDBPIJBFFJ : public ::System::Object
{
public:
	::Foundation::Unreal::FGameplayTagContainer AHKAMGAJMFK; // 0x10

	::System::Void _ctor(::Foundation::Unreal::FGameplayTagContainer GMKMJBONMDC)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + NKDBPIJBFFJ__CTOR_OFFSET))(this, GMKMJBONMDC);
	}

	::System::Boolean IAJIHBHIGDP(::MoleMole::EntityHandle HPADNAEINPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + NKDBPIJBFFJ_IAJIHBHIGDP_OFFSET))(this, HPADNAEINPK);
	}
};
