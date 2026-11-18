#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MGBPBGBHKFB;
namespace MoleMole::Battle { class Entity; }

#define NDJKJMHIINL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE5761F0)
#define NDJKJMHIINL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE576190)
#define NDJKJMHIINL_PROCESS_1_OFFSET UNITYSDK_OFFSET(0xE576300)
#define NDJKJMHIINL_PROCESS_OFFSET UNITYSDK_OFFSET(0xE576240)
#define NDJKJMHIINL__CTOR_OFFSET UNITYSDK_OFFSET(0xE576640)

inline static constexpr unsigned int NDJKJMHIINL_TypeDefinitionIndex = 48763;

class NDJKJMHIINL : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* LEOKEOFNDLH; // 0x10
	::UnityEngine::Quaternion EKHGAMJMOBF; // 0x18
	::System::Boolean GEJFOBKKGCA; // 0x28
	::System::Byte _padding0[0x3];
	::System::Int32 DIGGEMGIEPL; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJKJMHIINL__CTOR_OFFSET))(this);
	}

	::System::Void Initialize(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NDJKJMHIINL_INITIALIZE_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJKJMHIINL_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::Vector3 Process(::MGBPBGBHKFB* HLFFCMIFFIB, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::MGBPBGBHKFB*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NDJKJMHIINL_PROCESS_OFFSET))(this, HLFFCMIFFIB, OHOGDOMNHNK, BFBELMDIAHI);
	}

	::UnityEngine::Quaternion Process_1(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NDJKJMHIINL_PROCESS_1_OFFSET))(this, OHOGDOMNHNK, BFBELMDIAHI);
	}
};
