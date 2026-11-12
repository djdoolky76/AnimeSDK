#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class DriftComponentData; }
namespace UnityEngine { class Transform; }

#define JCPHHMANKBM_CTOR_OFFSET UNITYSDK_OFFSET(0xB8EE1F0)
#define JCPHHMANKBM_FEAKJONHHDL_OFFSET UNITYSDK_OFFSET(0xB8EDA90)

inline static constexpr unsigned int JCPHHMANKBM_TypeDefinitionIndex = 75905;

	class JCPHHMANKBM : public ::System::Object
	{
	public:
		::RPG::GameCore::DriftComponentData* FJCAKOIDONG; // 0x10
		::System::Single EJMDKHOJILJ; // 0x18
		::UnityEngine::Vector3 DNFLHFPODGF; // 0x1C
		::UnityEngine::Vector3 LBJIJPLBKDF; // 0x28
		::UnityEngine::Vector3 EDLHLKAFDFA; // 0x34
		::UnityEngine::Vector3 NIAEHDLDOJO; // 0x40
		::UnityEngine::Vector3 GMAEEGJGDJH; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPHHMANKBM_CTOR_OFFSET))(this);
		}

		::System::Void FEAKJONHHDL(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JCPHHMANKBM_FEAKJONHHDL_OFFSET))(this, a1);
		}

	};
