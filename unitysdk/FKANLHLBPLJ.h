#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"
class BMDLLJPCEDN;
namespace RPGTools::Timeline { class CharacterFullBodyChainData; }
namespace RPGTools::Timeline { class CharacterFullBodyClip; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define FKANLHLBPLJ_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x157D9590)
#define FKANLHLBPLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x157DA010)
#define FKANLHLBPLJ_OBCKIOEGOGL_OFFSET UNITYSDK_OFFSET(0x157D9C90)
#define FKANLHLBPLJ_PMEJBHFCCJO_OFFSET UNITYSDK_OFFSET(0x157D9E10)

inline static constexpr unsigned int FKANLHLBPLJ_TypeDefinitionIndex = 47959;

	class FKANLHLBPLJ : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::RPGTools::Timeline::CharacterFullBodyClip* PJCDEGEDNFA; // 0x20
		::Il2CppArray<::RPGTools::Timeline::CharacterFullBodyChainData*>* MMAEKLBBLOD; // 0x28
		::BMDLLJPCEDN* EABKOHGCHFP; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKANLHLBPLJ_CTOR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKANLHLBPLJ_CLJEBKODGHK_OFFSET))(this);
		}

		::UnityEngine::Transform* PMEJBHFCCJO(::UnityEngine::GameObject* a1, ::RPGTools::Timeline::CharacterFullBodyChainData* a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::GameObject*, ::RPGTools::Timeline::CharacterFullBodyChainData*))((::PBYTE)hIl2Cpp + FKANLHLBPLJ_PMEJBHFCCJO_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Transform* OBCKIOEGOGL(::UnityEngine::GameObject* a1, ::RPGTools::Timeline::CharacterFullBodyChainData* a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::GameObject*, ::RPGTools::Timeline::CharacterFullBodyChainData*))((::PBYTE)hIl2Cpp + FKANLHLBPLJ_OBCKIOEGOGL_OFFSET))(this, a1, a2);
		}

	};
