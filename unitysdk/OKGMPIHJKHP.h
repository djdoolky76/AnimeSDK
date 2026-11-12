#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DGEGOJNFEAI.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JMHHBMNIJJB;
class LPHINGPIEAJ;
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define OKGMPIHJKHP_BBFJFHEMJBF_OFFSET UNITYSDK_OFFSET(0xC7D2C10)
#define OKGMPIHJKHP_CTOR_OFFSET UNITYSDK_OFFSET(0xC7D2470)
#define OKGMPIHJKHP_FNMCGFAGBBA_OFFSET UNITYSDK_OFFSET(0xC7D2DE0)
#define OKGMPIHJKHP_IKJGOEGPJGE_OFFSET UNITYSDK_OFFSET(0xC7D3220)
#define OKGMPIHJKHP_JDHBJCNLGGG_OFFSET UNITYSDK_OFFSET(0xC7D30E0)
#define OKGMPIHJKHP_MMNMGFDKIIL_OFFSET UNITYSDK_OFFSET(0xC7D3180)
#define OKGMPIHJKHP_NALNKFLKKPG_OFFSET UNITYSDK_OFFSET(0xC7D32C0)
#define OKGMPIHJKHP_NJBCAPLBHMI_OFFSET UNITYSDK_OFFSET(0xC7D2480)

inline static constexpr unsigned int OKGMPIHJKHP_TypeDefinitionIndex = 79759;

	class OKGMPIHJKHP : public ::System::Object
	{
	public:
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x10
		::System::Void _ctor(::JMHHBMNIJJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMHHBMNIJJB*))((::PBYTE)hIl2Cpp + OKGMPIHJKHP_CTOR_OFFSET))(this, a1);
		}

		::LPHINGPIEAJ* NJBCAPLBHMI(::DGEGOJNFEAI a1)
		{
			return ((::LPHINGPIEAJ*(*)(::PVOID, ::DGEGOJNFEAI))((::PBYTE)hIl2Cpp + OKGMPIHJKHP_NJBCAPLBHMI_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* BBFJFHEMJBF(::DGEGOJNFEAI a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::DGEGOJNFEAI))((::PBYTE)hIl2Cpp + OKGMPIHJKHP_BBFJFHEMJBF_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> FNMCGFAGBBA(::DGEGOJNFEAI a1)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::DGEGOJNFEAI))((::PBYTE)hIl2Cpp + OKGMPIHJKHP_FNMCGFAGBBA_OFFSET))(this, a1);
		}

		::System::Single JDHBJCNLGGG(::DGEGOJNFEAI a1)
		{
			return ((::System::Single(*)(::PVOID, ::DGEGOJNFEAI))((::PBYTE)hIl2Cpp + OKGMPIHJKHP_JDHBJCNLGGG_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* MMNMGFDKIIL(::DGEGOJNFEAI a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::DGEGOJNFEAI))((::PBYTE)hIl2Cpp + OKGMPIHJKHP_MMNMGFDKIIL_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* IKJGOEGPJGE(::DGEGOJNFEAI a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::DGEGOJNFEAI))((::PBYTE)hIl2Cpp + OKGMPIHJKHP_IKJGOEGPJGE_OFFSET))(this, a1);
		}

		::System::Void NALNKFLKKPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGMPIHJKHP_NALNKFLKKPG_OFFSET))(this);
		}

	};
