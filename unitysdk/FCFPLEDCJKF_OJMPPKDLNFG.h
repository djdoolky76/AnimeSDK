#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCFPLEDCJKF_ANJIEBKBMKG.h"
class BMDDCGIDIBB_HOPKGOHPHHN;
class FCFPLEDCJKF;
class IEGGFEMJNDD;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Possession; }

#define FCFPLEDCJKF_OJMPPKDLNFG_CTOR_OFFSET UNITYSDK_OFFSET(0x156AEDD0)
#define FCFPLEDCJKF_OJMPPKDLNFG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156AEFA0)
#define FCFPLEDCJKF_OJMPPKDLNFG_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x156AF010)

inline static constexpr unsigned int FCFPLEDCJKF_OJMPPKDLNFG_TypeDefinitionIndex = 69310;

	class FCFPLEDCJKF_OJMPPKDLNFG : public ::FCFPLEDCJKF_ANJIEBKBMKG
	{
	public:
		::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Possession* CIKPBGDIABO; // 0x10
		::System::Void _ctor(::FCFPLEDCJKF* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Possession* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FCFPLEDCJKF*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Possession*))((::PBYTE)hIl2Cpp + FCFPLEDCJKF_OJMPPKDLNFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFPLEDCJKF_OJMPPKDLNFG_DISPOSE_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::IEGGFEMJNDD* a1, ::BMDDCGIDIBB_HOPKGOHPHHN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IEGGFEMJNDD*, ::BMDDCGIDIBB_HOPKGOHPHHN*))((::PBYTE)hIl2Cpp + FCFPLEDCJKF_OJMPPKDLNFG_PKADDEPKJFN_OFFSET))(this, a1, a2);
		}

	};
