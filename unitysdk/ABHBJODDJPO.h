#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EAKOMPBLNOG;
class MGBPBGBHKFB;
namespace MoleMole::Battle { class Entity; }

#define ABHBJODDJPO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14339DD0)
#define ABHBJODDJPO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x14339E10)
#define ABHBJODDJPO_PROCESS_1_OFFSET UNITYSDK_OFFSET(0x14339F60)
#define ABHBJODDJPO_PROCESS_OFFSET UNITYSDK_OFFSET(0x14339E60)
#define ABHBJODDJPO__CTOR_OFFSET UNITYSDK_OFFSET(0x14339DC0)

inline static constexpr unsigned int ABHBJODDJPO_TypeDefinitionIndex = 68680;

class ABHBJODDJPO : public ::System::Object
{
public:
	::EAKOMPBLNOG* DAAAEJDBNFI; // 0x10

	::System::Void _ctor(::EAKOMPBLNOG* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::EAKOMPBLNOG*))((::PBYTE)hIl2Cpp + ABHBJODDJPO__CTOR_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHBJODDJPO_DISPOSE_OFFSET))(this);
	}

	::System::Void Initialize(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ABHBJODDJPO_INITIALIZE_OFFSET))(this, KECKGDFIALJ);
	}

	::UnityEngine::Vector3 Process(::MGBPBGBHKFB* HLFFCMIFFIB, ::UnityEngine::Vector3 FMJGOHNLJNA, ::UnityEngine::Quaternion BFBELMDIAHI)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::MGBPBGBHKFB*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ABHBJODDJPO_PROCESS_OFFSET))(this, HLFFCMIFFIB, FMJGOHNLJNA, BFBELMDIAHI);
	}

	::UnityEngine::Quaternion Process_1(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ABHBJODDJPO_PROCESS_1_OFFSET))(this, OHOGDOMNHNK, BFBELMDIAHI);
	}
};
