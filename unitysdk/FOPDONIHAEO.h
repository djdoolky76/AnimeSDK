#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class LELFJCFONLP;
class MGBPBGBHKFB;
namespace MoleMole::Battle { class Entity; }

#define FOPDONIHAEO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EFF690)
#define FOPDONIHAEO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15EFF6D0)
#define FOPDONIHAEO_PROCESS_1_OFFSET UNITYSDK_OFFSET(0x15EFF800)
#define FOPDONIHAEO_PROCESS_OFFSET UNITYSDK_OFFSET(0x15EFF720)
#define FOPDONIHAEO__CTOR_OFFSET UNITYSDK_OFFSET(0x15EFF680)

inline static constexpr unsigned int FOPDONIHAEO_TypeDefinitionIndex = 61099;

class FOPDONIHAEO : public ::System::Object
{
public:
	::LELFJCFONLP* DAAAEJDBNFI; // 0x10

	::System::Void _ctor(::LELFJCFONLP* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::LELFJCFONLP*))((::PBYTE)hIl2Cpp + FOPDONIHAEO__CTOR_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOPDONIHAEO_DISPOSE_OFFSET))(this);
	}

	::System::Void Initialize(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FOPDONIHAEO_INITIALIZE_OFFSET))(this, KECKGDFIALJ);
	}

	::UnityEngine::Vector3 Process(::MGBPBGBHKFB* HLFFCMIFFIB, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::MGBPBGBHKFB*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FOPDONIHAEO_PROCESS_OFFSET))(this, HLFFCMIFFIB, OHOGDOMNHNK, BFBELMDIAHI);
	}

	::UnityEngine::Quaternion Process_1(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FOPDONIHAEO_PROCESS_1_OFFSET))(this, OHOGDOMNHNK, BFBELMDIAHI);
	}
};
