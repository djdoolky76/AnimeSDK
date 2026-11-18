#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHKNFJGOBFH.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MGBPBGBHKFB;
namespace MoleMole::Battle { class Entity; }
template <typename T> class JBILFLPADFI_1;

#define MOLEMOLE_MONOSLIDINGPANEL_OHOPKHAEEIM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A70D8B0)
#define MOLEMOLE_MONOSLIDINGPANEL_OHOPKHAEEIM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A70D8F0)
#define MOLEMOLE_MONOSLIDINGPANEL_OHOPKHAEEIM_PROCESS_1_OFFSET UNITYSDK_OFFSET(0x1A70DA00)
#define MOLEMOLE_MONOSLIDINGPANEL_OHOPKHAEEIM_PROCESS_OFFSET UNITYSDK_OFFSET(0x1A70D940)
#define MOLEMOLE_MONOSLIDINGPANEL_OHOPKHAEEIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A70D8A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSlidingPanel_OHOPKHAEEIM_TypeDefinitionIndex = 47501;

	class MonoSlidingPanel_OHOPKHAEEIM : public ::System::Object
	{
	public:
		::JBILFLPADFI_1<::CHKNFJGOBFH>* JEKBHMPNGCE; // 0x10

		::System::Void _ctor(::JBILFLPADFI_1<::CHKNFJGOBFH>* MOAFHFBKOID)
		{
			return ((::System::Void(*)(::PVOID, ::JBILFLPADFI_1<::CHKNFJGOBFH>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSLIDINGPANEL_OHOPKHAEEIM__CTOR_OFFSET))(this, MOAFHFBKOID);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSLIDINGPANEL_OHOPKHAEEIM_DISPOSE_OFFSET))(this);
		}

		::System::Void Initialize(::MoleMole::Battle::Entity* KECKGDFIALJ)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSLIDINGPANEL_OHOPKHAEEIM_INITIALIZE_OFFSET))(this, KECKGDFIALJ);
		}

		::UnityEngine::Vector3 Process(::MGBPBGBHKFB* HLFFCMIFFIB, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::MGBPBGBHKFB*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSLIDINGPANEL_OHOPKHAEEIM_PROCESS_OFFSET))(this, HLFFCMIFFIB, OHOGDOMNHNK, BFBELMDIAHI);
		}

		::UnityEngine::Quaternion Process_1(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSLIDINGPANEL_OHOPKHAEEIM_PROCESS_1_OFFSET))(this, OHOGDOMNHNK, BFBELMDIAHI);
		}
	};
}
