#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIKFJEEPMPG_OENANCJLKHA.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIKFJEEPMPG_PFCFGIAFGDC_CTOR_OFFSET UNITYSDK_OFFSET(0xC265F70)
#define PIKFJEEPMPG_PFCFGIAFGDC_DEFOLDBLKKM_OFFSET UNITYSDK_OFFSET(0xC265960)
#define PIKFJEEPMPG_PFCFGIAFGDC_NFDNHGMCHML_OFFSET UNITYSDK_OFFSET(0xC2658D0)

inline static constexpr unsigned int PIKFJEEPMPG_PFCFGIAFGDC_TypeDefinitionIndex = 70637;

	class PIKFJEEPMPG_PFCFGIAFGDC : public ::PIKFJEEPMPG_OENANCJLKHA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKFJEEPMPG_PFCFGIAFGDC_CTOR_OFFSET))(this);
		}

		::System::Boolean NFDNHGMCHML(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PIKFJEEPMPG_PFCFGIAFGDC_NFDNHGMCHML_OFFSET))(this, a1, a2);
		}

		::System::Void DEFOLDBLKKM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIKFJEEPMPG_PFCFGIAFGDC_DEFOLDBLKKM_OFFSET))(this, a1);
		}

	};
