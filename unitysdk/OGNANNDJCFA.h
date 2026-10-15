#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNHDPDCGLAG.h"
#include "unitysdk/RPG/GameCore/AdvancedFollowType.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EDJNAGDJEKB;
class EIJDPLEBFPG;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define OGNANNDJCFA_ALIBLECMGGM_OFFSET UNITYSDK_OFFSET(0xBE5D390)
#define OGNANNDJCFA_BANJGKPEGFG_OFFSET UNITYSDK_OFFSET(0xBE5B870)
#define OGNANNDJCFA_CTOR_OFFSET UNITYSDK_OFFSET(0xBE5B820)
#define OGNANNDJCFA_HLIOLKPHHHF_OFFSET UNITYSDK_OFFSET(0xBE5BBB0)
#define OGNANNDJCFA_HMHIDINLAPO_OFFSET UNITYSDK_OFFSET(0xBE5CFF0)
#define OGNANNDJCFA_HOMEACGEIMB_OFFSET UNITYSDK_OFFSET(0xBE5CB40)
#define OGNANNDJCFA_IEHPLCAMANJ_OFFSET UNITYSDK_OFFSET(0xBE5D1F0)
#define OGNANNDJCFA_IIJKLMNIGPN_OFFSET UNITYSDK_OFFSET(0xBE5BC90)
#define OGNANNDJCFA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBE5BD50)
#define OGNANNDJCFA_JLKJIHLELND_OFFSET UNITYSDK_OFFSET(0xBE5D170)
#define OGNANNDJCFA_KGCHDHMCEBB_OFFSET UNITYSDK_OFFSET(0xBE5C030)
#define OGNANNDJCFA_NPJCJHBJLHA_OFFSET UNITYSDK_OFFSET(0xBE5D2F0)
#define OGNANNDJCFA_PHBFDPONIIN_OFFSET UNITYSDK_OFFSET(0xBE5CDD0)

inline static constexpr unsigned int OGNANNDJCFA_TypeDefinitionIndex = 52420;

	class OGNANNDJCFA : public ::LNHDPDCGLAG
	{
	public:
		::EIJDPLEBFPG* ODOBKOAKMGM; // 0x80
		::EDJNAGDJEKB* AEAPGPMOPMC; // 0x88
		::System::Single PJEAFBBMMDI; // 0x90
		::System::Boolean HAKMDIIOMHK; // 0x94
		::System::Byte _padding0[0x3];
		::System::Single DLOFJMOKDMO; // 0x98
		::System::Single MJBGKHOLOPC; // 0x9C
		::RPG::GameCore::CharacterMotionFlag ODBOHHKMIDP; // 0xA0
		::System::Single HFHNFNHNGHB; // 0xA4
		::System::Single NKNIKIIGENG; // 0xA8
		::System::Single LOFLFDNPNIE; // 0xAC
		::System::Single BLJLGBAJLAJ; // 0xB0
		::System::Single JOKFKNIBJJH; // 0xB4
		::System::Single OKFPHKACKNJ; // 0xB8
		::System::Single PMCAAPOFMCO; // 0xBC
		::System::Single JJGEDNHDMAH; // 0xC0
		::UnityEngine::Vector3 BEDPGAOCOHG; // 0xC4
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OGNANNDJCFA_CTOR_OFFSET))(this, a1);
		}

		::System::Void BANJGKPEGFG(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Boolean a8, ::System::Single a9, ::System::Single a10, ::System::Boolean a11, ::System::Boolean a12, ::RPG::GameCore::AdvancedFollowType a13, ::System::Single a14, ::System::Single a15, ::Il2CppArray<::System::Int32>* a16, ::System::Boolean a17)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdvancedFollowType, ::System::Single, ::System::Single, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OGNANNDJCFA_BANJGKPEGFG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
		}

		::System::Void HLIOLKPHHHF(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + OGNANNDJCFA_HLIOLKPHHHF_OFFSET))(this, a1, a2);
		}

		::System::Void IIJKLMNIGPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNANNDJCFA_IIJKLMNIGPN_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OGNANNDJCFA_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean HOMEACGEIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNANNDJCFA_HOMEACGEIMB_OFFSET))(this);
		}

		::System::Boolean KGCHDHMCEBB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNANNDJCFA_KGCHDHMCEBB_OFFSET))(this);
		}

		::System::Void PHBFDPONIIN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OGNANNDJCFA_PHBFDPONIIN_OFFSET))(this, a1);
		}

		::System::Void HMHIDINLAPO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OGNANNDJCFA_HMHIDINLAPO_OFFSET))(this, a1);
		}

		::RPG::GameCore::CharacterMotionFlag JLKJIHLELND()
		{
			return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNANNDJCFA_JLKJIHLELND_OFFSET))(this);
		}

		::System::Void IEHPLCAMANJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OGNANNDJCFA_IEHPLCAMANJ_OFFSET))(this, a1);
		}

		::System::Void NPJCJHBJLHA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OGNANNDJCFA_NPJCJHBJLHA_OFFSET))(this, a1);
		}

		::System::Void ALIBLECMGGM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OGNANNDJCFA_ALIBLECMGGM_OFFSET))(this, a1);
		}

	};
