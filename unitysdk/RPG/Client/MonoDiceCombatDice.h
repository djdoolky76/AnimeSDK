#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ANIOGPJFCKF;
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }

#define RPG_CLIENT_MONODICECOMBATDICE_AENJAMCKKJF_OFFSET UNITYSDK_OFFSET(0xD74FAF0)
#define RPG_CLIENT_MONODICECOMBATDICE_COGHGBHMOMH_OFFSET UNITYSDK_OFFSET(0xD74F1E0)
#define RPG_CLIENT_MONODICECOMBATDICE_CTOR_OFFSET UNITYSDK_OFFSET(0xD74FDA0)
#define RPG_CLIENT_MONODICECOMBATDICE_ECMHJKMLELF_OFFSET UNITYSDK_OFFSET(0xD74F430)
#define RPG_CLIENT_MONODICECOMBATDICE_ELLKGFDHFII_OFFSET UNITYSDK_OFFSET(0xD74F010)
#define RPG_CLIENT_MONODICECOMBATDICE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xD74EF10)
#define RPG_CLIENT_MONODICECOMBATDICE_HEGCJBNHLKL_OFFSET UNITYSDK_OFFSET(0xD74EDC0)
#define RPG_CLIENT_MONODICECOMBATDICE_JAPLLCDAPEB_OFFSET UNITYSDK_OFFSET(0xD74F290)
#define RPG_CLIENT_MONODICECOMBATDICE_NNILNCKACFN_OFFSET UNITYSDK_OFFSET(0xD74F6A0)
#define RPG_CLIENT_MONODICECOMBATDICE_NPDDJBPFPJK_OFFSET UNITYSDK_OFFSET(0xD74FC10)
#define RPG_CLIENT_MONODICECOMBATDICE_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xD74ED50)
#define RPG_CLIENT_MONODICECOMBATDICE_ONTRIGGERSTAY_OFFSET UNITYSDK_OFFSET(0xD74EEA0)
#define RPG_CLIENT_MONODICECOMBATDICE_SETENABLE_OFFSET UNITYSDK_OFFSET(0xD74EB20)
#define RPG_CLIENT_MONODICECOMBATDICE_SETPERFORMANCECONFIGPROXY_OFFSET UNITYSDK_OFFSET(0xD74ED00)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDiceCombatDice_TypeDefinitionIndex = 63565;

	class MonoDiceCombatDice : public ::UnityEngine::MonoBehaviour
	{
	public:
		::ANIOGPJFCKF* BPHAGGCLIAE; // 0x18
		::System::String* IPHJGLFDPEH; // 0x20
		::System::String* CDOKKOIGCHL; // 0x28
		::Il2CppArray<::UnityEngine::RaycastHit>* DDDMMHLGKAH; // 0x30
		::System::Single PFNHBMEJLAO; // 0x38
		::System::Boolean MHEAIOMEGCA; // 0x3C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 EMOAICPGEJE; // 0x40
		::System::Single MNOKAIAOCPH; // 0x4C
		::System::Boolean ONCMMJIEOLI; // 0x50
		::System::Byte _padding1[0x7];
		::UnityEngine::Collider* GBDKBLPAHEL; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_CTOR_OFFSET))(this);
		}

		::System::Void SetEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_SETENABLE_OFFSET))(this, a1);
		}

		::System::Void SetPerformanceConfigProxy(::ANIOGPJFCKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANIOGPJFCKF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_SETPERFORMANCECONFIGPROXY_OFFSET))(this, a1);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerStay(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_ONTRIGGERSTAY_OFFSET))(this, a1);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void HEGCJBNHLKL(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_HEGCJBNHLKL_OFFSET))(this, a1);
		}

		::System::Single JAPLLCDAPEB(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_JAPLLCDAPEB_OFFSET))(this, a1);
		}

		::System::Boolean COGHGBHMOMH(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_COGHGBHMOMH_OFFSET))(this, a1);
		}

		::System::Void ECMHJKMLELF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_ECMHJKMLELF_OFFSET))(this);
		}

		::System::Void ELLKGFDHFII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_ELLKGFDHFII_OFFSET))(this);
		}

		::System::Boolean NNILNCKACFN(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_NNILNCKACFN_OFFSET))(this, a1);
		}

		::System::Void NPDDJBPFPJK(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_NPDDJBPFPJK_OFFSET))(this, a1);
		}

		::System::UInt32 AENJAMCKKJF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_AENJAMCKKJF_OFFSET))(this);
		}

	};
}
