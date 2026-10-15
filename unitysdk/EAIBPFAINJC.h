#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHJDEAEBHGA.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CLFIGBPHLHI;
class EAIBPFAINJC;
class KNBEDHIFIEE;
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define EAIBPFAINJC_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0x1267AB10)
#define EAIBPFAINJC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1267AA40)
#define EAIBPFAINJC_CLONE_OFFSET UNITYSDK_OFFSET(0x1267ADD0)
#define EAIBPFAINJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1267AA10)
#define EAIBPFAINJC_KFPIIOKMALE_OFFSET UNITYSDK_OFFSET(0x1267AEC0)
#define EAIBPFAINJC_NDPIBCMCJCM_OFFSET UNITYSDK_OFFSET(0x1267ACC0)
#define EAIBPFAINJC_REVERSE_OFFSET UNITYSDK_OFFSET(0x1267AE40)
#define EAIBPFAINJC_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x1267AD80)

inline static constexpr unsigned int EAIBPFAINJC_TypeDefinitionIndex = 73557;

	class EAIBPFAINJC : public ::GHJDEAEBHGA
	{
	public:
		::UnityEngine::Vector3 KBLKPDGGLCI; // 0x48
		::System::Void _ctor(::KNBEDHIFIEE* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::KNBEDHIFIEE*, ::System::UInt32))((::PBYTE)hIl2Cpp + EAIBPFAINJC_CTOR_OFFSET))(this, a1, a2);
		}

		static ::EAIBPFAINJC* BPLPBPMEODA(::KNBEDHIFIEE* a1, ::System::UInt32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::EAIBPFAINJC*(*)(::KNBEDHIFIEE*, ::System::UInt32, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EAIBPFAINJC_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::EAIBPFAINJC* BPLPBPMEODA_1(::KNBEDHIFIEE* a1, ::System::UInt32 a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
		{
			return ((::EAIBPFAINJC*(*)(::KNBEDHIFIEE*, ::System::UInt32, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EAIBPFAINJC_BPLPBPMEODA_1_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean NDPIBCMCJCM(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EAIBPFAINJC_NDPIBCMCJCM_OFFSET))(this, a1, a2);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + EAIBPFAINJC_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIBPFAINJC_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIBPFAINJC_REVERSE_OFFSET))(this);
		}

		::System::Void KFPIIOKMALE(::System::Single a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Object*))((::PBYTE)hIl2Cpp + EAIBPFAINJC_KFPIIOKMALE_OFFSET))(this, a1, a2);
		}

	};
