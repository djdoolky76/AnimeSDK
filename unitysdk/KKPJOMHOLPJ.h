#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/HPPNJDAKAKO.h"
class BMNBIGCFJJB;
class MHHGNECMODJ;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace RPG::GameCore { class SummonUnitChildBillboardHost; }
namespace RPG::GameCore { class SummonUnitChildEffectConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define KKPJOMHOLPJ_CEFPFNBOAPL_OFFSET UNITYSDK_OFFSET(0xB4DC140)
#define KKPJOMHOLPJ_CEIJOJNNGGL_OFFSET UNITYSDK_OFFSET(0xB4DB770)
#define KKPJOMHOLPJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB4DA560)
#define KKPJOMHOLPJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4DA5F0)
#define KKPJOMHOLPJ_EDHAGLFGOJA_OFFSET UNITYSDK_OFFSET(0xB4DA9C0)
#define KKPJOMHOLPJ_EMIDKCMNBKD_OFFSET UNITYSDK_OFFSET(0xB4DAA80)
#define KKPJOMHOLPJ_FHBCPHIBKIJ_OFFSET UNITYSDK_OFFSET(0xB4DBC10)
#define KKPJOMHOLPJ_FKDIDAMOJNP_OFFSET UNITYSDK_OFFSET(0xB4DB6E0)
#define KKPJOMHOLPJ_GDLDDBIGIKO_OFFSET UNITYSDK_OFFSET(0xB4DC0F0)
#define KKPJOMHOLPJ_GHIFMGPKFPF_OFFSET UNITYSDK_OFFSET(0xB4DBC60)
#define KKPJOMHOLPJ_HCCENCMEPMJ_OFFSET UNITYSDK_OFFSET(0xB4DB7F0)
#define KKPJOMHOLPJ_IFGBLJFKAMN_OFFSET UNITYSDK_OFFSET(0xB4DAC00)
#define KKPJOMHOLPJ_INHHIGAOCNE_OFFSET UNITYSDK_OFFSET(0xB4DB680)
#define KKPJOMHOLPJ_INIJCJJLPKM_OFFSET UNITYSDK_OFFSET(0xB4DA790)
#define KKPJOMHOLPJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB4DB290)
#define KKPJOMHOLPJ_LDCHIKFDHCG_OFFSET UNITYSDK_OFFSET(0xB4DB7B0)
#define KKPJOMHOLPJ_LHOFDLKIFBF_OFFSET UNITYSDK_OFFSET(0xB4DA970)
#define KKPJOMHOLPJ_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0xB4DB730)
#define KKPJOMHOLPJ_NBJFLGNEBED_OFFSET UNITYSDK_OFFSET(0xB4DB380)
#define KKPJOMHOLPJ_NKAHOBJOGNE_OFFSET UNITYSDK_OFFSET(0xB4DA6D0)
#define KKPJOMHOLPJ_OOENBABOOMK_OFFSET UNITYSDK_OFFSET(0xB4DA8C0)

inline static constexpr unsigned int KKPJOMHOLPJ_TypeDefinitionIndex = 57449;

	class KKPJOMHOLPJ : public ::System::Object
	{
	public:
		::MHHGNECMODJ* JHFKOHNKLMH; // 0x10
		::RPG::GameCore::SummonUnitChildEffectConfig* LFOJLEOAAHJ; // 0x18
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x20
		::RPG::GameCore::SummonUnitChildEffectConfig* IBNEODGBKPB; // 0x28
		::System::Collections::Generic::LinkedList_1<::System::Object*>* PCOFNNCJJLH; // 0x30
		::RPG::GameCore::SummonUnitChildBillboardHost* JGLHHFGGHAA; // 0x38
		::System::Single HKGPLKJOCDH; // 0x40
		::System::Single CBJEFEAKKPE; // 0x44
		::System::Single NONAGBGPMKF; // 0x48
		::System::Boolean IMAJLPIFLNN; // 0x4C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x50
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x5C
		::System::Single CMBADIEHEGB; // 0x6C
		::System::Void _ctor(::MHHGNECMODJ* a1, ::BMNBIGCFJJB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MHHGNECMODJ*, ::BMNBIGCFJJB*))((::PBYTE)hIl2Cpp + KKPJOMHOLPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPJOMHOLPJ_DISPOSE_OFFSET))(this);
		}

		::System::Void INIJCJJLPKM(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KKPJOMHOLPJ_INIJCJJLPKM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OOENBABOOMK(::RPG::GameCore::PlayNPCBubbleTalk* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayNPCBubbleTalk*))((::PBYTE)hIl2Cpp + KKPJOMHOLPJ_OOENBABOOMK_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* LHOFDLKIFBF(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KKPJOMHOLPJ_LHOFDLKIFBF_OFFSET))(this, a1);
		}

		::System::Void EDHAGLFGOJA(::System::Collections::Generic::IReadOnlyList_1<::HPPNJDAKAKO>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::HPPNJDAKAKO>*))((::PBYTE)hIl2Cpp + KKPJOMHOLPJ_EDHAGLFGOJA_OFFSET))(this, a1);
		}

		::System::Void EMIDKCMNBKD(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + KKPJOMHOLPJ_EMIDKCMNBKD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IFGBLJFKAMN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KKPJOMHOLPJ_IFGBLJFKAMN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KKPJOMHOLPJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void NBJFLGNEBED(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KKPJOMHOLPJ_NBJFLGNEBED_OFFSET))(this, a1);
		}

		::System::Void INHHIGAOCNE(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + KKPJOMHOLPJ_INHHIGAOCNE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FKDIDAMOJNP(::System::Collections::Generic::IReadOnlyList_1<::HPPNJDAKAKO>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::HPPNJDAKAKO>*))((::PBYTE)hIl2Cpp + KKPJOMHOLPJ_FKDIDAMOJNP_OFFSET))(this, a1);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPJOMHOLPJ_MHFNJCLKNMG_OFFSET))(this);
		}

		::System::Void CEIJOJNNGGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPJOMHOLPJ_CEIJOJNNGGL_OFFSET))(this);
		}

		::System::Void LDCHIKFDHCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPJOMHOLPJ_LDCHIKFDHCG_OFFSET))(this);
		}

		::System::Void HCCENCMEPMJ(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + KKPJOMHOLPJ_HCCENCMEPMJ_OFFSET))(this, a1);
		}

		::System::Void FHBCPHIBKIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPJOMHOLPJ_FHBCPHIBKIJ_OFFSET))(this);
		}

		::System::Void GDLDDBIGIKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPJOMHOLPJ_GDLDDBIGIKO_OFFSET))(this);
		}

		::System::Void GHIFMGPKFPF(::RPG::GameCore::SummonUnitChildEffectConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitChildEffectConfig*))((::PBYTE)hIl2Cpp + KKPJOMHOLPJ_GHIFMGPKFPF_OFFSET))(this, a1);
		}

		::System::Void NKAHOBJOGNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPJOMHOLPJ_NKAHOBJOGNE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CEFPFNBOAPL()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPJOMHOLPJ_CEFPFNBOAPL_OFFSET))(this);
		}

	};
