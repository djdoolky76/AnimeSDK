#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHJDEAEBHGA.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CLFIGBPHLHI;
class KNBEDHIFIEE;
class PMDODGAKGHE;
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define PMDODGAKGHE_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0xC30FDE0)
#define PMDODGAKGHE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC30FD10)
#define PMDODGAKGHE_CLONE_OFFSET UNITYSDK_OFFSET(0xC3100A0)
#define PMDODGAKGHE_CTOR_OFFSET UNITYSDK_OFFSET(0xC30FCE0)
#define PMDODGAKGHE_KFPIIOKMALE_OFFSET UNITYSDK_OFFSET(0xC310180)
#define PMDODGAKGHE_NDPIBCMCJCM_OFFSET UNITYSDK_OFFSET(0xC30FF90)
#define PMDODGAKGHE_REVERSE_OFFSET UNITYSDK_OFFSET(0xC310110)
#define PMDODGAKGHE_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xC310050)

inline static constexpr unsigned int PMDODGAKGHE_TypeDefinitionIndex = 73557;

	class PMDODGAKGHE : public ::GHJDEAEBHGA
	{
	public:
		::UnityEngine::Vector3 DMOMPJOFLLL; // 0x48
		::System::Void _ctor(::KNBEDHIFIEE* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::KNBEDHIFIEE*, ::System::UInt32))((::PBYTE)hIl2Cpp + PMDODGAKGHE_CTOR_OFFSET))(this, a1, a2);
		}

		static ::PMDODGAKGHE* BPLPBPMEODA(::KNBEDHIFIEE* a1, ::System::UInt32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::PMDODGAKGHE*(*)(::KNBEDHIFIEE*, ::System::UInt32, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PMDODGAKGHE_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::PMDODGAKGHE* BPLPBPMEODA_1(::KNBEDHIFIEE* a1, ::System::UInt32 a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
		{
			return ((::PMDODGAKGHE*(*)(::KNBEDHIFIEE*, ::System::UInt32, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PMDODGAKGHE_BPLPBPMEODA_1_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean NDPIBCMCJCM(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PMDODGAKGHE_NDPIBCMCJCM_OFFSET))(this, a1, a2);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PMDODGAKGHE_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDODGAKGHE_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDODGAKGHE_REVERSE_OFFSET))(this);
		}

		::System::Void KFPIIOKMALE(::System::Single a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Object*))((::PBYTE)hIl2Cpp + PMDODGAKGHE_KFPIIOKMALE_OFFSET))(this, a1, a2);
		}

	};
