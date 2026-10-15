#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WorldShiftingReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KDFFHMDFALG;

#define NPEBLEKDAGI_ADJGJDFAIBB_OFFSET UNITYSDK_OFFSET(0xBCFB820)
#define NPEBLEKDAGI_CGNFJINIMDN_OFFSET UNITYSDK_OFFSET(0xBCFB790)
#define NPEBLEKDAGI_CTOR_OFFSET UNITYSDK_OFFSET(0xBCFBB50)
#define NPEBLEKDAGI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCFBB10)
#define NPEBLEKDAGI_FJKDMEOBHBA_OFFSET UNITYSDK_OFFSET(0xBCFB960)
#define NPEBLEKDAGI_HJNFCIAFAMM_OFFSET UNITYSDK_OFFSET(0xBCFBA00)
#define NPEBLEKDAGI_JJEPJBNNGJP_OFFSET UNITYSDK_OFFSET(0xBCFB7E0)
#define NPEBLEKDAGI_KOENMLBCBFG_OFFSET UNITYSDK_OFFSET(0xBCFB910)
#define NPEBLEKDAGI_LCHCNDGGOMF_OFFSET UNITYSDK_OFFSET(0xBCFBA50)
#define NPEBLEKDAGI_LKINOKFJPCL_OFFSET UNITYSDK_OFFSET(0xBCFB890)
#define NPEBLEKDAGI_PCPBCOPEIED_OFFSET UNITYSDK_OFFSET(0xBCFB9B0)

inline static constexpr unsigned int NPEBLEKDAGI_TypeDefinitionIndex = 60613;

	class NPEBLEKDAGI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEBLEKDAGI_CTOR_OFFSET))(this);
		}

		::System::Void CGNFJINIMDN(::KDFFHMDFALG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDFFHMDFALG*))((::PBYTE)hIl2Cpp + NPEBLEKDAGI_CGNFJINIMDN_OFFSET))(this, a1);
		}

		::System::Void JJEPJBNNGJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEBLEKDAGI_JJEPJBNNGJP_OFFSET))(this);
		}

		::System::Void ADJGJDFAIBB(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPEBLEKDAGI_ADJGJDFAIBB_OFFSET))(this, a1, a2);
		}

		::System::Void LKINOKFJPCL(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPEBLEKDAGI_LKINOKFJPCL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KOENMLBCBFG(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NPEBLEKDAGI_KOENMLBCBFG_OFFSET))(this, a1, a2);
		}

		::System::Void FJKDMEOBHBA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPEBLEKDAGI_FJKDMEOBHBA_OFFSET))(this, a1);
		}

		::System::Void PCPBCOPEIED(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPEBLEKDAGI_PCPBCOPEIED_OFFSET))(this, a1);
		}

		::System::Void HJNFCIAFAMM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPEBLEKDAGI_HJNFCIAFAMM_OFFSET))(this, a1);
		}

		::System::Void LCHCNDGGOMF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Quaternion a4, ::RPG::Client::WorldShiftingReason a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::RPG::Client::WorldShiftingReason))((::PBYTE)hIl2Cpp + NPEBLEKDAGI_LCHCNDGGOMF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEBLEKDAGI_DISPOSE_OFFSET))(this);
		}

	};
