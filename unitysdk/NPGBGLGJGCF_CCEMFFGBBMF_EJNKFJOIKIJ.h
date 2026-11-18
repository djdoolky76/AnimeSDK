#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPGBGLGJGCF_CCEMFFGBBMF_HLCLMAOPCHB.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/LayerMask.h"

#define NPGBGLGJGCF_CCEMFFGBBMF_EJNKFJOIKIJ_NGNCNKHONND_OFFSET UNITYSDK_OFFSET(0x5CA920)
#define NPGBGLGJGCF_CCEMFFGBBMF_EJNKFJOIKIJ__CCTOR_OFFSET UNITYSDK_OFFSET(0xEEB1DB0)

inline static constexpr unsigned int NPGBGLGJGCF_CCEMFFGBBMF_EJNKFJOIKIJ_TypeDefinitionIndex = 59305;

struct alignas(4) NPGBGLGJGCF_CCEMFFGBBMF_EJNKFJOIKIJ
{
	static ::NPGBGLGJGCF_CCEMFFGBBMF_EJNKFJOIKIJ* StaticGet_DDGNFJDLOKA()
	{
		return (::NPGBGLGJGCF_CCEMFFGBBMF_EJNKFJOIKIJ*)Il2CppClass::FromTypeDefinitionIndex(NPGBGLGJGCF_CCEMFFGBBMF_EJNKFJOIKIJ_TypeDefinitionIndex)->GetStaticField(0x10020);
	}
	::UnityEngine::LayerMask KNLOAAILJEG; // 0x10
	::System::Single GJHMCODMLBM; // 0x14
	::System::Single CMNIAIDKGGL; // 0x18
	::System::Single LAGFFIJLIFA; // 0x1C
	::System::Single MLADGOFKEEL; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_EJNKFJOIKIJ__CCTOR_OFFSET))();
	}

	::NPGBGLGJGCF_CCEMFFGBBMF_HLCLMAOPCHB NGNCNKHONND(::System::Single KPGBKOMDLOF)
	{
		return ((::NPGBGLGJGCF_CCEMFFGBBMF_HLCLMAOPCHB(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_EJNKFJOIKIJ_NGNCNKHONND_OFFSET))(this, KPGBKOMDLOF);
	}
};
