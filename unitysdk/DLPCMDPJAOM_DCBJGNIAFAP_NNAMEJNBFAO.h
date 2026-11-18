#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MGBPBGBHKFB;
namespace MoleMole::Battle { class Entity; }

#define DLPCMDPJAOM_DCBJGNIAFAP_NNAMEJNBFAO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x132A24D0)
#define DLPCMDPJAOM_DCBJGNIAFAP_NNAMEJNBFAO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x132A2510)
#define DLPCMDPJAOM_DCBJGNIAFAP_NNAMEJNBFAO_PROCESS_1_OFFSET UNITYSDK_OFFSET(0x132A2600)
#define DLPCMDPJAOM_DCBJGNIAFAP_NNAMEJNBFAO_PROCESS_OFFSET UNITYSDK_OFFSET(0x132A2560)
#define DLPCMDPJAOM_DCBJGNIAFAP_NNAMEJNBFAO__CTOR_OFFSET UNITYSDK_OFFSET(0x132A2690)

inline static constexpr unsigned int DLPCMDPJAOM_DCBJGNIAFAP_NNAMEJNBFAO_TypeDefinitionIndex = 89045;

class DLPCMDPJAOM_DCBJGNIAFAP_NNAMEJNBFAO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_DCBJGNIAFAP_NNAMEJNBFAO__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_DCBJGNIAFAP_NNAMEJNBFAO_DISPOSE_OFFSET))(this);
	}

	::System::Void Initialize(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_DCBJGNIAFAP_NNAMEJNBFAO_INITIALIZE_OFFSET))(this, KECKGDFIALJ);
	}

	::UnityEngine::Vector3 Process(::MGBPBGBHKFB* HLFFCMIFFIB, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::MGBPBGBHKFB*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_DCBJGNIAFAP_NNAMEJNBFAO_PROCESS_OFFSET))(this, HLFFCMIFFIB, OHOGDOMNHNK, BFBELMDIAHI);
	}

	::UnityEngine::Quaternion Process_1(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_DCBJGNIAFAP_NNAMEJNBFAO_PROCESS_1_OFFSET))(this, OHOGDOMNHNK, BFBELMDIAHI);
	}
};
