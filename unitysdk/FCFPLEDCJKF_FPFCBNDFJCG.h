#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCFPLEDCJKF_ANJIEBKBMKG.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BMDDCGIDIBB_HOPKGOHPHHN;
class FCFPLEDCJKF;
class IEGGFEMJNDD;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Throw; }

#define FCFPLEDCJKF_FPFCBNDFJCG_CTOR_OFFSET UNITYSDK_OFFSET(0x156BABE0)
#define FCFPLEDCJKF_FPFCBNDFJCG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156BAD70)
#define FCFPLEDCJKF_FPFCBNDFJCG_GET_THROWDIRECTION_OFFSET UNITYSDK_OFFSET(0x156BAD50)
#define FCFPLEDCJKF_FPFCBNDFJCG_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x156BADE0)

inline static constexpr unsigned int FCFPLEDCJKF_FPFCBNDFJCG_TypeDefinitionIndex = 69309;

	class FCFPLEDCJKF_FPFCBNDFJCG : public ::FCFPLEDCJKF_ANJIEBKBMKG
	{
	public:
		::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Throw* CIKPBGDIABO; // 0x10
		::UnityEngine::Vector3 _ThrowDirection_k__BackingField; // 0x18
		::System::Void _ctor(::FCFPLEDCJKF* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Throw* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FCFPLEDCJKF*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo_Throw*))((::PBYTE)hIl2Cpp + FCFPLEDCJKF_FPFCBNDFJCG_CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 get_ThrowDirection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFPLEDCJKF_FPFCBNDFJCG_GET_THROWDIRECTION_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFPLEDCJKF_FPFCBNDFJCG_DISPOSE_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::IEGGFEMJNDD* a1, ::BMDDCGIDIBB_HOPKGOHPHHN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IEGGFEMJNDD*, ::BMDDCGIDIBB_HOPKGOHPHHN*))((::PBYTE)hIl2Cpp + FCFPLEDCJKF_FPFCBNDFJCG_PKADDEPKJFN_OFFSET))(this, a1, a2);
		}

	};
