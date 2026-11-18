#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/BigSceneCommonSkillConfig.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadAssetListOp_1; }
namespace MoleMole { class ConfigBigSceneCommonSkill; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define BLAANAPHPDJ_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x11518B50)
#define BLAANAPHPDJ_OPJGLEIOCJI_OFFSET UNITYSDK_OFFSET(0x115194F0)
#define BLAANAPHPDJ_PAFMKNNCGJN_OFFSET UNITYSDK_OFFSET(0x11518C20)
#define BLAANAPHPDJ_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x11518C80)
#define BLAANAPHPDJ_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x11518AD0)
#define BLAANAPHPDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11518990)

inline static constexpr unsigned int BLAANAPHPDJ_TypeDefinitionIndex = 60630;

class BLAANAPHPDJ
{
public:
	::System::Collections::Generic::Dictionary_2<::Foundation::Unreal::FGameplayTag, ::MoleMole::BigSceneCommonSkillConfig>* LCFPAICIMFB; // 0x28
	::Il2CppArray<::Foundation::AssetPath>* IGEDJIHKEKD; // 0x30
	::ConfigModuleLib::Runtime::LoadAssetListOp_1<::MoleMole::ConfigBigSceneCommonSkill*>* OGJBEBAGJJJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLAANAPHPDJ__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BLAANAPHPDJ_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BLAANAPHPDJ_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::Foundation::Unreal::FGameplayTag, ::MoleMole::BigSceneCommonSkillConfig>* PAFMKNNCGJN()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::Foundation::Unreal::FGameplayTag, ::MoleMole::BigSceneCommonSkillConfig>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLAANAPHPDJ_PAFMKNNCGJN_OFFSET))(this);
	}

	::System::Void PKOGNPKCHHE(::System::Collections::Generic::IEnumerable_1<::MoleMole::ConfigBigSceneCommonSkill*>* KEJJKECGLOP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::ConfigBigSceneCommonSkill*>*))((::PBYTE)hIl2Cpp + BLAANAPHPDJ_PKOGNPKCHHE_OFFSET))(this, KEJJKECGLOP);
	}

	::System::Collections::Generic::IEnumerable_1<::Foundation::AssetPath>* OPJGLEIOCJI()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Foundation::AssetPath>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLAANAPHPDJ_OPJGLEIOCJI_OFFSET))(this);
	}
};
